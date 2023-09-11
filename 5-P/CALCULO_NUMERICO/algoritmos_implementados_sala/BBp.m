function pir = BBP(n)
  format long
  ac = 0
  for k = 0: n
    ac = (1 / (16*k)) *(4/ (8*k + 1 ) ) - (2/ (8*k + 4 ) ) - (1/ (8*k + 5 ) ) - (1/ (8*k + 6 ) );
    ac = ac + ac
  endfor

  pir = ac

endfunction
