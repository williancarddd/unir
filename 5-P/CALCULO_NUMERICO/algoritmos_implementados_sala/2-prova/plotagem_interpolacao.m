f = @(x) (((2*x.^2) / 3) - ((7*x) / 3 ) + 1 );
x = linspace(-3, 10);

plot(x, f(x), 'b', 'LineWidth', 2); % Traça a função f(x) em azul
hold on;

x1 = [-1 0 2];
y1 = [4 1 -1];

plot(x1, y1, 'ro', 'MarkerSize', 10, 'MarkerFaceColor', 'r'); % Traça os pontos em vermelho

xlabel('Eixo X');
ylabel('Eixo Y');
title('Gráfico da Função e dos Pontos');
legend('f(x)', 'Pontos', 'Location', 'Best');

hold off;
