import productAtom from "@/app/atoms/productAtom";
import userAtom from "@/app/atoms/userAtom";
import { Button } from "@/app/components/Button";
import { useAtom } from "jotai";
import Router from "next/router";

export default function ShowData():JSX.Element {
    const [product, setProduct] = useAtom(productAtom);

    function handleClick() {
        Router.push('/product');
    }
    return (
        <>
            <div className="grid grid-cols-1 gap-3 w-[400px] mt-9">
                <div>
                    <p>Nome do Produto: {product?.nameProduct} </p>
                </div>
                <div>
                    <p>Quantidade: {product?.quantity}</p>
                </div>
                <div>
                    <p>Validade: {new Date(product?.expireIn).toString()} </p>
                </div>
                <div>
                    <p>Dias para validade: {
                        Math.floor((new Date(product?.expireIn).getTime() - new Date().getTime()) / (1000 * 60 * 60 * 24))
                        } </p>
                </div>
                <div>
                    <p>Validade: {product.value?.toLocaleString(
                        "pt-br",
                        { style: "currency", currency: "BRL" }
                    
                    )} </p>
                </div>
                <div>
                    <Button text="Voltar" onClick={() => handleClick()} />
                </div>
            </div>
        </>
    )
}
