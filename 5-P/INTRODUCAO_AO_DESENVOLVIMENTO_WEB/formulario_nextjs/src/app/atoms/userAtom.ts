import {atom} from 'jotai';
import IUSer, {} from '../interfaces/IUser';
import userSchema from '../schemas/UserSchema';


const userAtom = atom<IUSer>({} as IUSer);

export default userAtom;
