function [S] = metodoLagrange(x, y, p)
  n = length(x);
  S = 0;
  
  for i = 1 : n
    L =1;
    for j =1 : n
      if(i != j)
      L = L*(p - x(j)) / (x(i) - x(j));
      endif;
    endfor
    S = S +  y(i) * L;
  endfor
endfunction