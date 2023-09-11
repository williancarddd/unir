function [x, i] = secante(f, x0, x1, tol, n)
   i = 0;
  while (i < n)
    fx1 = f(x1);
    fx0 = f(x0);
    x = ((x0 * fx1) - (x1 * fx0))/(fx1 - fx0);
    x0 = x1;
    x1 = x;    
    printf("x = %f, i = %d\n", x, i);
    if (abs((x1 - x0)/x1) < tol)
      printf("O método parou em %d iterações! com x sendo %d.\n", i, x);
      return;
    endif
    i = i +1;    
  endwhile
  printf("O método falhou em %d iterações!\n", i);  
endfunction
