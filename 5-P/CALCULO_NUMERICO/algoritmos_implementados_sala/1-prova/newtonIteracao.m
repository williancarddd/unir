function [x] = newtonIteracao(f, fd, x0, tol, n)
  i = 0;
  while (i < n)
    x = x0 - f(x0)/fd(x0);
    printf("x = %f, i = %d\n", x, i);
    if (abs((x - x0)/x) < tol) % erro relativo     
      printf("Metodo parou %d iterações! com x sendo %d \n\n", i, x);
      return;
    endif
    x0 = x;
    i = i + 1;    
  endwhile  
  error("Método falhou em %d iterações!", i);
endfunction
