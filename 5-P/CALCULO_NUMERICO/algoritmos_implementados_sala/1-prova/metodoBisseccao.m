function [raiz]  = metodoBisseccao(N, a, b, delta, f)

  for  i = 0: N
    x = (a + b) /2;
    if(f(x) ==  0 || ((b-a) / 2 ) < delta )
      raiz = x;
    endif

    if(f(a)*f(x) < 0)
      b = x;
    else
      a = x;
    endif
  endfor
endfunction






