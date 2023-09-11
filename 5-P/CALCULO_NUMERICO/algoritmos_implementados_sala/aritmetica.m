% exemplo B = 10, t = 3
%a. (23.4 + 5.18) + 3.05
% 23.4 + (5.18 + 3.05)
%passo 1: normalizar e igualar os expoentes
%x = 0.234 * 10^2
%y = 0.0518 * 10^2
%z = 0.0305 * 10^2
x = 0.234;
y = 0.0518;
z = 0.0305;
res = x + y
printf("%.3f\n", res)
% passo 2: arredondamento
res = 0.286
% passo 3: soma
res = res + z
printf("%.3f\n", res)

res = y + z;
printf("%.3f\n", res)
res = 0.082;
res = res + x
printf("%.3f\n", res)



