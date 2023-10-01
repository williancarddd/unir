function [x]  = algoritmoSubDireta(a, b)
  MA =  [a b];
  [n, m] = size(MA);
  x = zeros(n, 1);
  for k = 1  : n
    i = n - k + 1;
    for j = i + 1 : n
      x(k) += ( a(k, j)* x(j) );
    endfor
    x(k) = (b(k) - x(k) / a(k, k);
  endfor
endfunction
