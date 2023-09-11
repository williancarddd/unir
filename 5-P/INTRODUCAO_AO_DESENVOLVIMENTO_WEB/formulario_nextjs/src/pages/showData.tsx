import userAtom from "@/app/atoms/userAtom";
import { Button } from "@/app/components/Button";
import { useAtom } from "jotai";
import Router from "next/router";

export default function ShowData():JSX.Element {
    const [user, setUser] = useAtom(userAtom);

    function handleClick() {
        Router.push('/');
    }
    return (
        <>
            <div className="grid grid-cols-1 gap-3 w-[400px] mt-9">
                <div>
                    <p>Nome: {user.name} </p>
                </div>
                <div>
                    <p>Nome de Usuário: {user.username}</p>
                </div>
                <div>
                    <p>email: {user.email} </p>
                </div>
                <div>
                    <Button text="Voltar" onClick={() => handleClick()} />
                </div>
            </div>
        </>
    )
}
