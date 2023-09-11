function [x] = gaussSeidel(A, b, x0, tol, kmax)
     k = 0;
     er = tol +1;
     L = tril(A);
     M = A -  L;
     printf("Meu L \n");
     L
     printf("Meu M = A - L\n");
     M
     while (k <= kmax && er > tol)
       k = k +1;
       x =  L\(b - M*x0);
       er = norm(x - x0, inf) / norm(x, inf);
        printf("Erro deu %f\n", er);
        x0 = x;
     endwhile

     printf("Interou %d vezes  \n", k);
endfunction
