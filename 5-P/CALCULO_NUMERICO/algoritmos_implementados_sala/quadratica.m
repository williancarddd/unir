function [eixox, eixoy] = quadratica(vala, valb, valc)
  %{
  [eixox, eixoy] = quadratica(vala, valb, valc)
  QUADRATICA calcula os valores da função quadrática
  Y = A*X^2 + B*X + C para todos os valores de X (eixox),
  definido entre -50 e 50.
  %}
  % O valor da equação quadrática depende dos valores de x.
  eixox = -50:0.01:50;
  % Como eixox é um vetor, usamos .* e .^ para multiplicação
  % e exponencial por todos os elementos
  eixoy = vala.*eixox.^2 + valb.*eixox + valc;
endfunction