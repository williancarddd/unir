function isolamento_raizes(a, b, p, func)
    function resultado = muda_sinal(x)
        resultado = sign(func(x)) ~= sign(func(x + p));
    end
    num_raizes = 0;
    for x = a:p:b-p
        if muda_sinal(x)
            num_raizes = num_raizes + 1;
        end
    end

    % Exibe o resultado
    if num_raizes == 0
        disp("Não foram encontradas raízes no intervalo.");
    elseif num_raizes == 1
        disp("Foi encontrada 1 raiz no intervalo.");
    else
        disp(["Foram encontradas ", num2str(num_raizes), " raízes no intervalo."]);
    end
end
