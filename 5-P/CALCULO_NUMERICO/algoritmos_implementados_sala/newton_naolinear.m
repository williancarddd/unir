function [k, x] = newton_naolinear(x0, tol, kMax)
  k = 0;
  er = 1;
  while(k <= kMax)
    k = k + 1;
    s = -JF(x0)\FX(x0);
    x = x0 + s;
    
    disp("");
    er =(max(abs(x-x0))/max(abs(x)));
    if (er < tol)
      return;
    endif
    printf("xk %.5f\n", x);
    x0 = x;
  endwhile
  error("O método falhou em %d iterações\n!", k);
endfunction
