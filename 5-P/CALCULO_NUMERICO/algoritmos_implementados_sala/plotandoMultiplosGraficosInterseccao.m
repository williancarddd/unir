function plot_multiple_functions(functions, x_linspace, highlight_intersection)
    % Verificar o número de funções
    num_functions = length(functions);

    % Plot das funções
    hold on;
    for i = 1:num_functions
        plot(x_linspace, functions{i}(x_linspace), 'LineWidth', 2);
    end

    % Encontrar os pontos de interseção entre as funções e destacar os pontos, se necessário
    if highlight_intersection && num_functions > 1
        for i = 1:num_functions-1
            for j = i+1:num_functions
                f1 = functions{i};
                f2 = functions{j};
                intersection_points = fsolve(@(x) f1(x) - f2(x), x_linspace);
                y_intersect = f1(intersection_points);
                disp(intersection_points)
                plot(intersection_points, y_intersect, 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'r');
            end
        end
    end

    % Adicionando rótulos e legendas
    xlabel('Eixo x');
    ylabel('Valores das Funções');
    title('Gráfico de Funções');
    legend_strings = cellfun(@func2str, functions, 'UniformOutput', false);
    legend(legend_strings, 'Location', 'northwest');

    % Adicionando grid
    grid on;

    hold off;
end
