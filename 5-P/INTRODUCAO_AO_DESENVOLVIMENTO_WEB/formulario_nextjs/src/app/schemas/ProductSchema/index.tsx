import * as z from "zod";
const productSchema = z.object({
    id: z.string().optional(),
    nameProduct: z.string().min(3, "Nome do produto deve ter no mínimo 3 caracteres").nonempty("Nome não pode estar vazio"),
    quantity: z.string(),
    expireIn: z.string().nonempty("Data de vencimento não pode estar vazia"),
    value: z.string(),
}).refine((data) => {
    return new Date(data.expireIn) > new Date();
}, {
    message: "Data de vencimento deve ser maior que a data atual",
    path: ["expireIn"],
}).transform((data) => ({
    ...data,
    value: Number(data.value),
    quantity: Number(data.quantity),
    expireIn: new Date(data.expireIn),
}))
export default productSchema;