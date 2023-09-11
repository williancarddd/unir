import * as z from "zod";
const userSchema = z.object({
    name: z.string().min(3, "Nome deve ter no mínimo 3 caracteres"),
    username: z.string().min(3, "Nome de Usuário deve ter no mínimo 3 caracteres"),
    password: z.string().min(6, "Senha deve ter no mínimo 6 caracteres").nonempty("Senha não pode estar vazia"),
    confirmPassword: z.string().nonempty("Confirmação de Senha não pode estar vazia"),
    email: z.string().email("Email inválido"),
    dataNascimento: z.string().nonempty("Data de Nascimento não pode estar vazia"),
}).refine((data) => data.password === data.confirmPassword, {
    message: "Senhas não conferem",
    path: ["confirmPassword"],
});
export default userSchema;