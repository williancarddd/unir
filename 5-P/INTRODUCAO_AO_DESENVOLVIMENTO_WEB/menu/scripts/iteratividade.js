const opcoes = document.querySelectorAll('.opcao');
const data = document.querySelector('.data'); // image

const pathIMgs =  ["assets/cliente.png", "assets/documentos.jpeg", "assets/free-dashboard-templates-1.jpg"]
opcoes.forEach(opcao => {
    opcao.addEventListener('click', () => {
        if(opcao.innerHTML == 'Cliente') {
            data.src = pathIMgs[0];
        }
        if(opcao.innerHTML == 'Documentos') {
            data.src = pathIMgs[1];
        }
        if(opcao.innerHTML == 'Dashboard') {
            data.src = pathIMgs[2];
        }

    });
});