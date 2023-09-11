function [raiz] = newtonRaphson(N, x0, delta, f, fd)

  i = 0;

  while i <= N
    xi = x0 - (f(x0) / fd(x0));
    printf("Iteração %d:\n", i);
    printf("xi = %f ; x0 = %f ; f(x0) = %f ; fd(x0) = %f\n", xi, x0, f(x0), fd(x0));
    if  abs((xi - x0) / xi) < delta
      printf("Convergência alcançada: %f\n", xi);
      raiz = xi;
      break;
    end

    x0 = xi;
    i = i + 1;
  printf("\n");
  end

endfunction

