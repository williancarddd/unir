function parabola(eixox, eixoy, raiz1, raiz2)
  %{
  parabola(eixox, eixoy, raiz1, raiz2)
  PARABOLA é responsável por plotar o gráfico da função
  quadrática e também as raízes X1 (raiz1) e X2 (raiz2),
  obtidas por meio da função RAIZES.
  %}
  disp('As raízes são: ');
  disp(raiz1);
  disp(raiz2);
  % Gráfico da função e das raízes.
  plot(eixox, eixoy, 'linewidth', 2)
  hold on;
  plot(raiz1, 0, 'r*', 'linewidth', 8)
  plot(raiz2, 0, 'r*', 'linewidth', 4)
  hold off;
endfunction
