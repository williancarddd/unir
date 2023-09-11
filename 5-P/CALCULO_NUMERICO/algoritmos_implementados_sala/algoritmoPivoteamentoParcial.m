% At e bt são variáveis de saída;
% A, b e j são os parâmetros de entrada;
function [At, bt] = pivotParcial(A, b, j)
  maxValor = A(j,j);
  maxLin = j;
  [n,m] = size(A);
  for i=j+1:n-1
    if (abs(maxValor) < abs(A(i,j)))
      maxValor = A(i,j);
      maxLin = i;
    endif
  endfor
  % verificando se o maior valor encontrado é o pivô
  if (maxValor != A(j,j))
    for (i=1:n)
      aux = A(j,i);
      A(j,i) = A(maxLin, i);
      A(maxLin, i) = aux;
      aux = b(j);
      b(j) = b(maxLin);
      b(maxLin) = aux;
    endfor
  endif
  At = A;
  bt = b;
endfunction


function [MA] = algoritmoEliminacao(A, B)
  [m, n] = size(A);


  for i = 1: n - 1
    [A, B] = metodoPivoteamentoParcial(A, B, i);
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
