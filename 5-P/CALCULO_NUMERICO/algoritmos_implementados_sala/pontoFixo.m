
function [x] =  pontoFixo(f, x1, e, n)
    x = x1;
    for i = 1:n
        x = f(x);
        xk =  sqrt((5*x) -1);
        if abs(xk) < e
        break;
        endif
        x1 = x;

        %iteração
        printf("Iteração %d: x = %f\n", i, x);
        %valores
        printf("f(x) = %f; \n", f(x));
    endfor
endfunction

