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




export default function Form(): JSX.Element {
    const [user, setUser] = useAtom(userAtom);
    const {
        handleSubmit,
        register,
        formState: { errors },
    } = useForm<IUSer>({
        mode: "all",
        reValidateMode: "onChange",
        resolver: zodResolver(userSchema),
        values: user,
    });

    console.log(errors);
    function handleSave(data: IUSer) {
        console.log(data);
        console.log(user);
        setUser(data);
        Router.push('/showData');
    }
    

    return (
        <>
            <form onSubmit={handleSubmit(handleSave)} className="grid grid-cols-1 gap-3 w-[400px] mt-9">
                <div>
                    <InputBasic label="Nome" 
                     register={register}
                     id="name"
                     name="name"
                     type="text"
                     labelerror={errors.name?.message}
                     erros={!!errors.name?.message}
                    />
                </div>
                <div>
                    <InputBasic label="Nome de Usuário" 
                    register={register}
                    id="username"
                    type="text"
                    labelerror={errors.username?.message}
                    erros={!!errors.username?.message}

                    />
                </div>
                <div>
                    
                    <InputBasic label="Email" type="email"
                    register={register}
                    id="email"
                    labelerror={errors.email?.message}
                    erros={!!errors.email?.message}
                    />
                </div>
                <div>
                    
                    <InputBasic label="Email" type="date"
                    register={register}
                    id="dataNascimento"
                    labelerror={errors.dataNascimento?.message}
                    erros={!!errors.dataNascimento?.message}
                    />
                </div>
                <div>
                    <InputBasic label="Senha" type="password" 
                    register={register}
                    id="password"
                    labelerror={errors.password?.message}
                    erros={!!errors.password?.message}
                    />
                </div>
                <div>
                    
                    <InputBasic label="Confirmar Senha" type="password"
                    register={register}
                    id="confirmPassword"
                    labelerror={errors.confirmPassword?.message}
                    erros={!!errors.confirmPassword?.message}
                    />
                </div>

                <div>
                    <Button text="Criar" type="submit" />
                </div>
            </form>
        </>
    )
}

