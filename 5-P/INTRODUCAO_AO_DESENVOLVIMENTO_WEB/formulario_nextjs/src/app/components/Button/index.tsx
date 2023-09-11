import React from "react";

interface Props extends React.ButtonHTMLAttributes<HTMLButtonElement> {
  text: string;
  disabled?: boolean,
}
export const Button = ({text,disabled,...props}: Props) => {
  const classNameDefault = `px-[24px] flex gap-[14px] justify-center py-[13px] font-bold text-white rounded-[8px] ${disabled ? 'bg-goat-gray' : 'bg-goat-black '} `
  return (
    <button
    {...props}
    className={ classNameDefault + " " + props.className }
    onClick={disabled ? () => {} : props.onClick}>
      {text}
      {props.children}
    </button>
  );
};