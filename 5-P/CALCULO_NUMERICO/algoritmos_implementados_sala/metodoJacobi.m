function [x] = metodoJacobi(A, b, x0, tol, kmax)
  [n n] = size(A);
  D = diag(diag(A));
  M = A - D;
  x = x0;
  erro = tol + 1;
  k = 0;

  while (k <= kmax && erro >= tol)
    x = D\(b - (M * x0));
    erro = (norm(abs(x - x0), inf) / norm(abs(x), inf));
    x0 = x;
    k = k + 1;

    % Adicione um print para mostrar o progresso
    fprintf("\nErro de %f \n", erro);
    fprintf('\nIteração %d: \n', k);
    disp(x);
  endwhile
endfunction

