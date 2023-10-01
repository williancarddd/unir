function r = converterOctalDecimal(x)
  r = 0;
  [m, n] = size(x);
    for i = 1: n
     r += str2num(x(i)) * (8^(n - i));
     endfor
endfunction
