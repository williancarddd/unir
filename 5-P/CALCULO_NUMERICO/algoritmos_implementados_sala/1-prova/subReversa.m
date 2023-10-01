function [x]  = algoritmoSubReversa(a, b)
  MA =  [a b];
  [n, m] = size(MA);
  x = zeros(n, 1);
  for k = 1  : n
    i = n - k + 1;
    for j = i + 1 : n
      x(i) += ( a(i, j)* x(j) );
    endfor
    x(i) = (b(i) - x(i)) / a(i, i);
  endfor
endfunction
