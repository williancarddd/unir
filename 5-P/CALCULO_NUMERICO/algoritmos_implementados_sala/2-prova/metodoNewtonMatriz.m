function [x] = metodoNewtonMatriz(x0, tol, N)
  x = x0;
  k = 1;
  
  while(k < = N)
    s = -JF(x)\funcaoX(x);
    x = x + s;
    disp(x)
    erro = max(abs(x -x0)/max(abs(x)));
    x0 = x;
    
    printf("Interação %d\n", k);
    if(erro < tol)
      return
    endif
    k = k+ 1;

  endwhile
endfunction
