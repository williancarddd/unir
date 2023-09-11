function [MA] = algoritmoEliminacao(A, B)
  [m, n] = size(A);


  for i = 1: n - 1
    for j = i + 1: n
      fator = A(j,i) / A(i,i);

      A(j, i) = 0;

      for k = i + 1: n
        A(j, k) = A(j, k) - (fator*A(i,k));
      endfor

      B(j) = B(j) - (fator *B(i));
    endfor
  endfor

  MA = [A B];
endfunction
