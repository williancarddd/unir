%Bruno Mcpherson
%Willian Cardoso
%João Pedro

% Questão 10
% fatos
autor(chicobuarque).
autor(paulocoelho).
autor(cslewis).

% pergunta para saber se chicobuarque escreveu estorvo
% gerou(chicobuarque, estorvo).
% gerou(X, estorvo).

gerou(chicobuarque, estorvo).
gerou(chicobuarque, budapeste).
gerou(chicobuarque, o_irmao_alemao).
gerou(chicobuarque, leite_derramado).
gerou(chicobuarque, estorbo).

% pergunta para achar todos os livros de paulo coelho
% gerou(paulocoelho, X).

gerou(paulocoelho, alquimista).
gerou(paulocoelho, onze_minutos).
gerou(paulocoelho, veronika).
gerou(paulocoelho, adulterio).
gerou(paulocoelho, o_mago).

gerousgerou(cslewis, cronicas_de_narnia).
gerou(cslewis, perelandra).
gerou(cslewis, os_quatro_amores).
gerou(cslewis, o_sobrinho_do_mago).
gerou(cslewis, a_vida_de_cslewis).

% livros classificados em:
% ficçao(X).
% referencia(X).
% biografia(X).

ficçao(cronicas_de_narnia).
ficçao(perelandra).
ficçao(o_sobrinho_do_mago).
ficçao(o_irmao_alemao).
ficçao(veronika).
ficçao(adulterio).


referencia(estorvo).
referencia(estorbo).
referencia(budapeste).
referencia(onze_minutos).
referencia(alquimista).


biografia(os_quatro_amores).
biografia(a_vida_de_cslewis).
biografia(leite_derramado).
biografia(o_mago).

% pergunta que acha autores de livro nao-ficçao
% naoficçao(X).

naoficçao(malcolm_gladwell).
naoficçao(jia_tolentino).
naoficçao(james_clear).
naoficçao(geoff_dyer).
naoficçao(matheus_de_souza).



