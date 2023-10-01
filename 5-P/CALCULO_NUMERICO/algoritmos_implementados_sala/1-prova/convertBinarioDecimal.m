function r = convertBinarioDecimal(x)
  [m, n] = size(x);
  r = 0;
  for i = 1: n
   r = str2num(x(i))* (2 ^ (n - i)) + r;
  endfor
endfunction

