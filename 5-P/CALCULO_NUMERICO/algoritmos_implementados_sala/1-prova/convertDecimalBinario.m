function r = converterDecimalBinario(x)
  r = [];
  i = 1;

  while (x > 0)
    r(i) = fix(mod(x, 2));
    x = x / 2;
    i = i + 1;
  endwhile
endfunction

