x = linspace(-4, 4);
g = @(x) x.^3
h = @(x) 9*x - 3
hold all
plot(x,g(x),'-','linewidth', 3)
plot(x,h(x),'-','linewidth',2)
%plot(x, g(x), x, h(x))
legend('g(x)', 'h(x)')
hold off