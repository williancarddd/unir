import * as z from "zod";
import userSchema from "../schemas/UserSchema";

interface IUSer extends z.infer<typeof userSchema> {}

export default IUSer;