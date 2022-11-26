import _thread
import multiprocessing

def leitura():
    arquivo = open("exemplo.txt", "r")
    texto = arquivo.read()
    print(texto)
    arquivo.close()
    return texto


def escrita(n = 0):
    arquivo = open("exemplo.txt", "w")
    arquivo.write("Ola mundo " + str(n))
    arquivo.close()


def exemplo_sem_comuicacao():
    buffer = leitura()
    print(buffer)
    escrita(1)
    buffer = leitura()
    print(buffer)

def exemplo_com_comunicacao():
    buffer = multiprocessing.Queue()
    #_thread.start_new_thread(leitura, (buffer,))
    _thread.start_new_thread(escrita, (buffer, 3))
    buffer.

if __name__ == "__main__":
    # exemplo_sem_comuicacao()
    exemplo_com_comunicacao()
