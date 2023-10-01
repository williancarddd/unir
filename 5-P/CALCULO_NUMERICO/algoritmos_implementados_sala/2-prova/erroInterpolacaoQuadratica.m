function sr = erroQuadratico(x, y, f)
  n = length(x);
  e =  zeros(n, 1);
  
  for i = 1: n
    e(i) =  abs(y(i) - f(x(i))) ;
  endfor
  e
  e'
  sr = (e')*e;
  
endfunction