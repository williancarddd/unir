from string import ascii_uppercase
import time

"""
 CRIAR UM PROGRAMA (CIFRA DE CESAR )QUE RECEBA UMA PALAVRA E O NÚMERO DE ROTAÇÕES.
  O PROGRAMA DEVE RETORNAR A PALAVRA CRIPTOGRAFADA.
  EXEMPLO: PALAVRA = "PYTHON" E NÚMERO DE ROTAÇÕES = 3
  RETORNO = "SBWKRQ"

-> O PROGRAMA DEVE IMPRIMIR O PASSO A PASSO DO QUE ESTÁ FAZENDO COM O DELAY DE 0.5 S
-> O PROGRAMA DEVE O PASSO A PASSO EM FORMA DE MATRIZ


"""

def criptografar(palavra, rotacoes):
    alfabeto = ascii_uppercase
    palavra = palavra.upper()
    palavraCriptografada = ""
    show_frase = list(palavra)

    # para cada letra
    for i, letra in enumerate(show_frase):
        posicao = alfabeto.find(letra) # posicao da letra no alfabeto
        novaPosicao = (posicao + rotacoes) % 26  # nova posicao da letra no alfabeto
        palavraCriptografada += alfabeto[novaPosicao] # adiciona a letra na palavra criptografada
        show_frase[i] = alfabeto[novaPosicao] # adiciona a letra na frase
        print(show_frase) # mostra a frase
        time.sleep(0.5) # delay de 0.5 segundos

    return palavraCriptografada

def descriptografar(palavra, rotacoes):
    alfabeto = ascii_uppercase
    palavra = palavra.upper()
    palavraDescriptografada = ""

    for letra in palavra:
        posicao = alfabeto.find(letra)
        novaPosicao = (posicao - rotacoes) % 26 # nova posicao da letra no alfabeto , subtraindo o numero de rotacoes
        palavraDescriptografada += alfabeto[novaPosicao]

    return palavraDescriptografada

def main():
    palavra = input("Digite a palavra: ")
    rotacoes = int(input("Digite o número de rotações: "))

    palavraCriptografada = criptografar(palavra, rotacoes)
    palavraDescriptografada = descriptografar(palavraCriptografada, rotacoes)

    print("Palavra criptografada: ", palavraCriptografada)
    print("Palavra descriptografada: ", palavraDescriptografada)

if __name__ == "__main__":
  main()