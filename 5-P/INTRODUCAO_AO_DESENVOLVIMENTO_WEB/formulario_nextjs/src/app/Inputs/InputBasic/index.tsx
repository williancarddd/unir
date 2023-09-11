import React, { useState } from "react";

interface Props extends React.InputHTMLAttributes<HTMLInputElement> {
  erros?: boolean;
  label?: string;
  labelerror?: string;
  variant?: 'outlined' | 'gray-input';
  register?: any;
}
export const InputBasic = ({register, label = '', labelerror = '', variant ='gray-input', erros, ...props}: Props) => {
  const classNAMEDEFAUALT = variant === 'outlined' ? `border outline-none border-goat-black relative text-goat-black rounded-lg bg-white pt-4 pr-4 pb-4 pl-4 focus:border-goat-purple-800 ${erros ? "border border-red-600" : ""}`
   : `outline-none text-goat-black font-light rounded-lg bg-goat-gray-20 pt-4 pr-4 pb-4 pl-4 focus:ring-1 focus:ring-goat-gray-70 ${erros ? "border border-red-600" : ""}`;
  
   const [inputFocused, setInputFocused] = useState(false);

   const handleInputFocus = () => {
     setInputFocused(true);
   };
 
   const handleInputBlur = () => {
     setInputFocused(false);
   };
 
  
   return (
    <div className="relative flex flex-col xs:min-w-full sm:min-w-0">
      {variant === 'outlined' ?
      <>
      <div className="bg-white h-[2px] top-[0px] z-10 absolute left-[20px] pr-2 pl-2"><span className="text-transparent text-[12px]" >{label}</span></div>
        <label className={`font-sans font-semibold h-1/2 text-[12px] absolute z-10 top-[-10px] left-[20px] pr-2 pl-2 ${inputFocused ? 'text-goat-purple-800': 'text-goat-black'}`} id={'label'+props.id} htmlFor={props.id}>
        {label}
      </label>
      </>
      :
      <label className="font-sans font-bold text-sm text-goat-black" htmlFor={props.id}>{label}</label>
      }
      <input
      {...register(props.id)}
      onFocus={handleInputFocus}
      onBlur={handleInputBlur}
      {...props}
      className={classNAMEDEFAUALT + " " + props.className }
    />
    {labelerror && <p className="text-red-600 text-sm">{labelerror}</p>}
    </div>
  );
};