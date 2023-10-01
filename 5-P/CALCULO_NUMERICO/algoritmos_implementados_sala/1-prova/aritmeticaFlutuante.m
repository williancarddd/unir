=% normalização de ponto fluante > deixar o primeiro digito da mantissa igual a 0. Ex: 0.32*10^3
base = 0
precisao = 0
m = 0
M = 0
xm = base ^ (m - 1) %  menor valor representável
xM = (1 - base^(-precisao))*base^M % maior valor representável



% Erro absoluto
%diferença entre o valor exato de um número e seu valor aproóximado
EA = x - xbarra


%Erro Relativo
ERx = ( x - xbarra ) / xbarra


%Soma de pontos flutuantes
x = 0,937 x 10^4
y = 0,1272 x 10^2

x = 0,937 x 104
y = 0,001272 x 104
xs = x + y
%alinhar y com a diferença do expoente.

%o mesmo para subtração
