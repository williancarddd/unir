function res = fillMatriz23(n)
  M = diag(ones(n-1, 1) * 2);

  for i = 1: n
    for j = 1: n
        if (i == j) && (j +1) <= n
          M(i, j + 1) = 3;
         end

    endfor
  endfor

  res = M;

endfunction
