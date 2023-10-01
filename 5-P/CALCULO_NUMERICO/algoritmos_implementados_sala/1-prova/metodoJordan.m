function [MA] = metodoJordan(A, B)
  [m, n] = size(A);
  for i = 1 : n
    pivoteamentoParcial(A, B, i);
    for j = 1 : n
      if i != j
        fator = A(j,i)/A(i, i);
        A(i, j) = 0;

        for k = i + 1 : n
          A(j, k) = A(j, k) - fator * A(i, k);
        endfor
        b (j) = b(j) -  fator * B(i);
      endif
    endfor
  endfor
endfunction
