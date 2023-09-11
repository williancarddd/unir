// get dom elements
const name_product = document.getElementById('name_product');
const description_product = document.getElementById('description_product');
const img_product = document.getElementById('img_product');
const button_back = document.getElementById('back');
const button_next = document.getElementById('next');


// url https://peticiones.online/api/products


const setData = ({results}, index) => {
   
    if (results ) {
        console.log(results[index]);
        name_product.innerHTML = results[index].name;
        description_product.innerHTML = results[index].description;
        img_product.src = results[index].image;
    } else {
        name_product.innerHTML = '';
        description_product.innerHTML = '';
        img_product.src = '';
    }
}

// get data from api
const getData = async () => {
    const url = 'https://peticiones.online/api/products';
    const response = await fetch(url)
    return await response.json()
}


const verifyIndex = (index) => {
    if (index == 0) {
        button_back.style.display = 'none';
    } else {
        button_back.style.display = 'block';
    }
}

const configure = async () => {
    const data = await getData()
    setData(data, 0)
    let index = 0
    verifyIndex(index)
    button_back.addEventListener('click', () => {
        if (index > 0) {
            index--
            verifyIndex(index)
            setData(data, index)
        }
    })
    button_next.addEventListener('click', () => {
        if (index < data.results.length - 1) {
            index++
            verifyIndex(index)
            setData(data, index)
        }
    })


}

configure()