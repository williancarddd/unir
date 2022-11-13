
public class Banco implements IBanco {
  private double saldo = 0.0;

  public void depositar(double valor) {
    saldo += valor;
  }

  public void sacar(double valor) {
    saldo -= valor;
  }

  public double saldo() {
    return saldo;
  }

  public void transferir(Banco destino, double valor) {
    sacar(valor);
    destino.depositar(valor);
  }

  public static void main(String[] args) {
    Banco banco = new Banco();
    banco.depositar(100.0);
    banco.sacar(50.0);
    System.out.println(banco.saldo());
    banco.imprimirExtrato();
    IBanco.imprimirNomeBanco();
    IBanco.imprimirPrivilegio();
  }
}
