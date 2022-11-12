% Bruno Mcpherson
% Willian Cardoso
% João Pedro

come(urso, peixe).
come(peixe, peixinho).
come(peixinho, alga).
come(quati, peixe).
come(urso, quati).
come(urso, raposa).
come(raposa, coelho).
come(coelho, mato).
come(urso, veado).
come(veado, mato).
come(gato-selvagem, veado).
animal(urso).
animal(peixe).
animal(peixinho).
animal(quati).
animal(raposa).
animal(coelho).
animal(veado).
animal(gato-selvagem).
planta(mato).
planta(alga).
presa(Y):-  come(_, Y), animal(Y).


% Questão 1
come(urso, peixinho).

% Questão 2
come(raposa,coelho).

% Questão 3
come(quati, X).

% Questão 4
come(X, mato).

% Questão 5
come(urso,X), come(X, coelho).

% Questão 6
presa(X) , not(come(raposa, X)).

% Questão 7
herbivoro(X):- come(X, Y), planta(Y).

% Questão 8
herbivoro(x).
