function binaryFractionToDecimal(binaryFraction)
    binaryStr = num2str(binaryFraction);
    [~, decimalPart] = strtok(binaryStr, '.');

    decimalValue = 0;
    power = -1;

    printf("Passo a passo da conversão de binário fracionário para decimal:\n");

    for i = 1:length(decimalPart)
        digit = str2double(decimalPart(i));
        decimalValue = decimalValue + digit * 2^power;

        printf("  %d * 2^(%d)", digit, power);

        if i < length(decimalPart)
            printf(" + ");
        else
            printf("\n");
        end

        power = power - 1;
    end

    printf("Resultado final: %s em binário fracionário é equivalente a %.10f em decimal.\n", binaryStr, decimalValue);
end

% Chame a função com o valor do número binário fracionário
binaryFractionToDecimal(0.10101);

