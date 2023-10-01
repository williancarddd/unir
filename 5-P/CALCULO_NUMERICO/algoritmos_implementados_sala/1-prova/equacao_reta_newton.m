%função
f = @(x) x.^3 - 30*x.^2 + 2552; % função principal
fd = @(x) 3*x.^2 - 60*x; % derivada da função

% Dado o ponto conhecido
x1 = 18.092;
y1 = f(x1);

% Dado o coeficiente angular (m)
m = fd(x1); % é dado pela derivada da função no ponto x1

% Calculando o coeficiente linear (b)
b = y1 - m * x1;

% Exibindo a equação da reta
fprintf('A equação da reta é: y = %.2fx + %.2f\n', m, b);

% Vetor de valores de x para plotar o gráfico
x = linspace(0, 20, 100);

% Calculando os valores de y correspondentes usando a equação da reta
y = m * x + b;

% Plotando o gráfico
plot(x, y, 'r', 'LineWidth', 1);
hold on;
plot(x, f(x));

% Plotando o ponto (x1, y1)
plot(x1, y1, 'go', 'MarkerSize', 10);
grid on;


% Mantendo o gráfico aberto após a plotagem
hold off;
