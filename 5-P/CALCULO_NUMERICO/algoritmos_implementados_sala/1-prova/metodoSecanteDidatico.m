function [raiz] = metodoSecante(N, delta, f, xi, x0)
  i = 0;
  xant = xi;
  xantant = x0;

  while i <= N
    xi = (xantant * f(xant) - xant * f(xantant)) / (f(xant) - f(xantant));

    printf("Iteração %d:\n", i);
    printf("xi = %f ; xant = %f ; xantant = %f ; f(xant) = %f ; f(xantant) = %f\n", xi, xant, xantant, f(xant), f(xantant));

    if abs(xi - xant) / xi < delta
      printf("Convergência alcançada: %f\n", xi);
      raiz = xi;
      break;
    end

    xantant = xant;
    xant = xi;
    i = i + 1;
  end

  printf("Total de iterações: %d\n", i + 1);
endfunction

