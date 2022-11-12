import os

listaArquivos = os.listdir(os.getcwd())# nome todos arquivos
print(listaArquivos)


maior = 0

for x in listaArquivos:
    pegarNum = x.split('_')
    if len(pegarNum) == 1:
        print('o próprio arquivo.')
    else:
        numero = int(pegarNum[1])
        if numero > maior: # essa condição funciona somente para esse meu problema, pois eu sei que todos o números são maiores que 0.
            maior = numero
print(maior)
open(f'aula_{maior+1}_udemy_Miranda.py', 'x' ) # criando arquivo com proximo numero
