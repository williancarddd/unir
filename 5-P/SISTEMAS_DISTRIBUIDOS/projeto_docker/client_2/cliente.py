import socket
import threading

def main():
    client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client.connect(("172.18.0.2", 8080))

    name = input("Digite seu nome: ")
    client.send(name.encode())
    
    print("Bem-vindo ao chat! Digite 'q' para sair.")
    
    def receive_messages():
        while True:
            message = client.recv(1024).decode()
            print(message)

    receive_thread = threading.Thread(target=receive_messages)
    receive_thread.start()

    while True:
        message = input()
        if message.lower() == 'q':
            break
        client.send(message.encode())

    client.close()

if __name__ == "__main__":
    main()
