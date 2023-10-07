function [y]= F(x)  
  y(1) = x(1) ^2 + 8*x(2) - 16;
  y(2) = -3*x(1)^2 + x(2)^2 + 12*x(2) + 48;   
  y = y';
endfunction
