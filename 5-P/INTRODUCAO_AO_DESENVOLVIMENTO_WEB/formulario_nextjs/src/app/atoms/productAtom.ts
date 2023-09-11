import {atom} from 'jotai';
import IUSer, {} from '../interfaces/IUser';
import userSchema from '../schemas/UserSchema';
import IProduct from '../interfaces/IProduct';


const productAtom = atom<IProduct>({} as IProduct);

export default productAtom;
