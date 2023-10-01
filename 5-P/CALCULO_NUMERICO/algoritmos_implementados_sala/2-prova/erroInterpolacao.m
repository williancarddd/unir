function sr = erroInterpolcao(x, y, f)
  n = length(x);
  sr = 0;
  
  for i = 1: n
    sr = ( y(i) - f(x(i)) ) ^2;
  endfor
endfunction


erroInterpolcao(x, y, f)
ans = 0.1993