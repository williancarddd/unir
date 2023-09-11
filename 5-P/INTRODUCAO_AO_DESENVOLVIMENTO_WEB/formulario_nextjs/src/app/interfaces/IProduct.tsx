import { z } from "zod";
import productSchema from "../schemas/ProductSchema";


interface IProduct extends z.infer<typeof productSchema> {}

export default IProduct;