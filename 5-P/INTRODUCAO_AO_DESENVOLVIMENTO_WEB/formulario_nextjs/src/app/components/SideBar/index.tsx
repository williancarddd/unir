import Link from "next/link";
import FormIm  from  "../../../../public/channels4_profile.jpg";
import Image from "next/image";
import  {AiOutlineForm}  from "react-icons/ai";
import  {BiPurchaseTag}  from "react-icons/bi";

function Sidebar(): JSX.Element {
 
  return (
    <aside className="sm:flex xs:hidden overflow-y-hidden h-screen w-fit" aria-label="Sidebar">
      <div className="flex flex-1 flex-col shadow-md bg-goat-gray-50   items-center">
        <Link className="flex items-center justify-center flex-col" href="/">
          <Image src={FormIm} className="h-14 w-14 object-fit rounded-lg" alt="Goat Tech Logo" />
        </Link>
        <div className="flex justify-between h-full">
          <ul className="flex flex-2 gap-4 flex-col items-center justify-center">
            <li >
            <Link  className="flex flex-col justify-center items-center p-2 text-center font-normal rounded-lg hover:text-goat-purple-800 w-[5rem] gap-[8px] text-goat-gray-70" 
            href='/'
            target="_self"
            >
                {<AiOutlineForm size={24}/>}
                <p className={`font-sans font-bold uppercase text-[8px]`} >Home</p>
            </Link>
            </li>
            <li >
            <Link  className="flex flex-col justify-center items-center p-2 text-center font-normal rounded-lg hover:text-goat-purple-800 w-[5rem] gap-[8px] text-goat-gray-70" 
            href='/product'
            target="_self"
            >
                {<BiPurchaseTag size={24}/>}
                <p className={`font-sans font-bold uppercase text-[8px]`} >Purchase</p>
            </Link>
            </li>
          </ul>
        </div>
      </div>
    </aside>
  );
}

export default Sidebar;