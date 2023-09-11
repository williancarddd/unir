

function [raiz]  = metodoBisseccaoDidatico(N, a, b, delta, f)

  for  i = 0: N
    x = (a + b) / 2;
    printf("para x(%d) a = %f b = %f\n", i, a, b);
    printf("ponto medio (%f + %f) / 2 = %f \n", a, b, x);
    printf("criterio de parada (%f - %f) / 2 => %f < %f\n", b , a,((b-a) / 2 ), delta )
    if(f(x) ==  0 || ((b-a) / 2 ) < delta )
      raiz = x;
    endif
    if(f(a)*f(x) < 0)
      b = x;
    else
      a = x;
    endif

    printf("\n");
  endfor
endfunction
