function r = convertBinarioFracDecimal(x)
  r = 0;
  p = 0;
  [m, n] = size(x);
  for i = 1 : n
    if (x(i) == '.')
      continue;
    else
      r = (1/2) * (str2num(x(i)) + r);
      printf("1/ 2 * %f =  %f\n", (str2num(x(i)) + r), r);
    endif;
  endfor
endfunction

