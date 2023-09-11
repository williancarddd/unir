function delta = discr(vala, valb, valc)
  %{
  delta = discr(vala, valb, valc)
  DISCR calcula o discriminante (delta) da equação
  quadrática A*X^2 + B*X + C = 0, a partir dos valores
  de A (vala), B (valb) e C (valc).
  %}
  delta = valb^2 - 4*vala*valc;
endfunction

