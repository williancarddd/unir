import { InputBasic } from "@/app/Inputs/InputBasic";
import { Button } from "../Button";
import { useState } from "react";
import  userAtom  from "@/app/atoms/userAtom";
import { useAtom } from "jotai";
import Router from "next/router";
import IUSer from "@/app/interfaces/IUser";
import { useForm } from "react-hook-form";
import userSchema from "@/app/schemas/UserSchema";

import { zodResolver } from '@hookform/resolvers/zod';
import productSchema from "@/app/schemas/ProductSchema";
import IProduct from "@/app/interfaces/IProduct";
import productAtom from "@/app/atoms/productAtom";




export default function FormProduct(): JSX.Element {
    const [product, setProduct] = useAtom(productAtom);
    const {
        handleSubmit,
        register,
        formState: { errors },
    } = useForm<IProduct>({
        mode: "all",
        reValidateMode: "onChange",
        resolver: zodResolver(productSchema),
        values: product,
    });

    console.log(errors);
    function handleSave(data: IProduct) {
        setProduct(data);
        Router.push('/purchase');
    }
    

    return (
        <>
            <form onSubmit={handleSubmit(handleSave)} className="grid grid-cols-1 gap-3 w-[400px] mt-9">
                <div>
                    <InputBasic label="Nome do produto" 
                     register={register}
                     id="nameProduct"
                     type="text"
                     labelerror={errors.nameProduct?.message}
                     erros={!!errors.nameProduct?.message}
                    />
                </div>
                <div>
                    <InputBasic label="Data de validade" 
                    register={register}
                    id="expireIn"
                    type="date"
                    labelerror={errors.expireIn?.message}
                    erros={!!errors.expireIn?.message}

                    />
                </div>
                <div>
                    
                    <InputBasic label="Quantidade" type="text"
                    register={register}
                    id="quantity"
                    labelerror={errors.quantity?.message}
                    erros={!!errors.quantity?.message}
                    />
                </div>
                <div>
                    
                    <InputBasic label="Valor" type=""
                    register={register}
                    id="value"
                    labelerror={errors.value?.message}
                    erros={!!errors.value?.message}
                    />
                </div>

                <div>
                    <Button text="Criar Produto" type="submit" />
                </div>
            </form>
        </>
    )
}

