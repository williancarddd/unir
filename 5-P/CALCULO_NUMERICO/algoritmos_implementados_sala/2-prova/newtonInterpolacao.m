function [S] = interpolacaoNewton(x, y, p)
  n = size(x);
  T = tabelaDiferencasDivididas(x, y);
  S = y(1);
  for i =2 : n
    M = 1;
    for j =1 : (i -1)
      M = M*(p - x(j));
    endfor
    S = S + M*T(1, i);
  endfor
endfunction

% usar o symbolic para comprovar
% pkg load symbolic
% syms x;
% usar o interpolacaoNewton([], [], x)