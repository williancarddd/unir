import socket
import threading

clients = {}

def handle_client(client_socket):
    name = client_socket.recv(1024).decode()
    clients[client_socket] = name

    while True:
        data = client_socket.recv(1024)
        if not data:
            break
        message = f"{clients[client_socket]}: {data.decode()}"
        print(message)
        broadcast(message.encode(), client_socket)

    del clients[client_socket]
    client_socket.close()

def broadcast(message, sender_socket):
    for client_socket in clients:
        if client_socket != sender_socket:
            try:
                client_socket.send(message)
            except:
                client_socket.close()
                del clients[client_socket]

def main():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.bind(("0.0.0.0", 8080))
    server.listen(5)
    print("[*] Esperando conexões na porta 8080")

    while True:
        client_socket, addr = server.accept()
        print(f"[*] Conexão aceita de {addr[0]}:{addr[1]}")

        client_handler = threading.Thread(target=handle_client, args=(client_socket,))
        client_handler.start()

if __name__ == "__main__":
    main()
