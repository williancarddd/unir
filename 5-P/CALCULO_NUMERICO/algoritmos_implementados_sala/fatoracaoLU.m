A = [1 1 1; 1 2 2 ; 2 1 3];
b = [6; 9; 11] ;
U = A;
L = eye(3);
l21 = U(2,1)/U(1,1);
l31 = U(3,1)/U(1,1);
L(2,1) = l21;
L(3,1) = l31;
L2 = U(2,:) - (l21 * U(1,:));
L3 = U(3,:) - (l31 * U(1,:));
U(2,:) = L2
U(3,:) = L3
l32 = U(3,2)/U(2,2);
L(3,2) = l32;
L3 = U(3,:) - (l32*U(2,:));
U(3,:) = L3
%Resolução de sistemas lineares utilização fatoração LU
%[y] = subs_direta(L, b)
%[x] = subs_reversa(U, y)

[y] = L\b
[x] = U\y


%Eu devo calcular a matriz LU, L é todos elementos que causaram a eliminação na triangularização
%Mas esses elementos devem estar em uma matriz identidade.
%Também é composto pela matriz U, que é a matriz triangularizada.
%logo em seguida calculo [y] = L\b
%depos calculo [x] = L\y
%tenho meu resultado x;
