%CAPITAIS
capital(boa_vista).
capital(palmas).
capital(porto_velho).
capital(rio_branco).
capital(manaus).
capital(porto_alegre).
capital(florianopolis).
capital(curitiba).

%ESTADO-CAPITAL
estado_capital(boa_vista, roraima).
estado_capital(palmas, tocantins).
estado_capital(porto_velho, rondonia).
estado_capital(rio_branco, acre).
estado_capital(manaus, amazonas).
estado_capital(porto_alegre, rio_grande_do_sul).
estado_capital(florianopolis, santa_catarina).
estado_capital(curitiba, parana).

%CIDADE-GRANDE
cidadeg(curitiba).
cidadeg(florianopolis).
cidadeg(porto_alegre).
cidadeg(manaus).

%CIDADE-PEQUENA
cidadep(boa_vista).
cidadep(palmas).
cidadep(porto_velho).
cidadep(rio_branco).

%REGIAO_ESTADO
regiao_estado(boa_vista, norte).
regiao_estado(palmas, norte).
regiao_estado(porto_velho, norte).
regiao_estado(rio_branco, norte).
regiao_estado(manaus, norte).
regiao_estado(porto_alegre, sul).
regiao_estado(florianopolis, sul).
regiao_estado(curitiba, sul).

cosmopolita(X):- capital(X), cidadeg(X).