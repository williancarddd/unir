function [x, cont] = metodoFalsaPosicao(a, b, p, N, f)

  cont = 0;
  er = 1;
  x = a;

  while cont <= N
    xa = x;
    x = a - ((f(a) * (b - a)) ) / (f(b) - f(a));
    er = abs(x - xa) / x;

    fprintf("Iteração %d:\n", cont);
    fprintf("x = %f ; xa = %f ; er = %f\n", x, xa, er);

    if er < p
      fprintf("Convergência alcançada: x = %f, iteração = %d\n", x, cont);
      return;
    end

    if f(x) * f(a) < 0
      b = x;
    else
      a = x;
    end

    cont = cont + 1;
    fprintf("a = %f, b = %f", a, b);
  end

  error("O método falhou em %d interações\n", cont);
endfunction

