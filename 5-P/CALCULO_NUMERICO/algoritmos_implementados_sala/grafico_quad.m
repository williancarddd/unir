function grafico_quad()
  %{
  grafico_quad()
  GRAFICO_QUAD plota o gráfico da função do segundo grau
  Y = A*X^2+B*X+C, com A (coef_a), B (coef_b) e C (coef_c)
  fornecidos pelo usuário, além das raízes X1 (x0_1) e X2
  (x0_2), obtidas com o auxílio das funções DISCR e RAIZES.
  %}
  disp('*** Gráfico de Y = A*X^2+B*X+C, com X = [-50, 50]. ***');
  coef_a = input('Digite o valor do coeficiente A: ');
  coef_b = input('Digite o valor do coeficiente B: ');
  coef_c = input('Digite o valor do coeficiente C: ');
  % Chamando a função discr() com os argumentos obtidos.
  val_delta = discr(coef_a, coef_b, coef_c);
  % Obtendo X1 e X2 por meio da função raizes().
  [raiz_1, raiz_2] = raizes(val_delta, coef_a, coef_b);
  % Calculando os pontos usando a função quadratica().
  [eixo_x, eixo_y] = quadratica(coef_a, coef_b, coef_c);
  % Plotando os gráficos com a função parabola().
  parabola(eixo_x, eixo_y, raiz_1, raiz_2);
endfunction