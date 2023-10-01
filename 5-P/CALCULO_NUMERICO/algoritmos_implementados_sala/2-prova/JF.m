function [out]= JF(x)  
  out(1,1) = 2*x(1) - 4;
  out(1,2) = 8;  
  out(2,1) = -6*x(1);
  out(2,2) = 2*x(2) + 12;   
endfunction
