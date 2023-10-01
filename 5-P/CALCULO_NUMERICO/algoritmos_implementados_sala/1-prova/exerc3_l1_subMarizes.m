function [res, B, C, D] = constructorPerfectMatriz(n)
  M = zeros(n);
  B = zeros(n)
  C = zeros(n)

  for i = 1: n
    for j =1: n
      M(i, j) = i + j;
    endfor
  endfor


  bi = 1;
  for i = 1: n
    if(mod(i, 2) == 0)
      B(bi , :) = M(i, :);
      bi = bi + 1;
     endif
  endfor

  cj = 1;
  for j = 1: n
    if(mod(j, 2) != 0)
      B(: , cj) = M(:, j);
      cj = cj + 1;
     endif
  endfor


  res = M;

  D = res(1:n-1, 1:n-1)

endfunction
