pkg load symbolic;
syms x y; % Declarar x e y como símbolos simbólicos

% Definir as equações
f1 = x^2 + y^2 - 9;
f2 = x^2 + -4*y;

% Criar um vetor de funções
F = [f1; f2];

% Calcular a matriz jacobiana
J = jacobian(F, [x, y]);

% Exibir a matriz jacobiana
disp(J);
