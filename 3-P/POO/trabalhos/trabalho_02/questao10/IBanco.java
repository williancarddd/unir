
public interface IBanco {
  public static final String NOME_BANCO = "Banco do Brasil";
  public static final String PRIVILEGIO = "admin";
  public double saldo = 0.0;
  public void depositar(double valor);
  public void sacar(double valor);
  public double saldo();
  public void transferir(Banco destino, double valor);
  public default void imprimirExtrato() {
    System.out.println("Saldo: " + saldo());
  }

  public static void imprimirNomeBanco() {
    System.out.println(NOME_BANCO);
  }

  public static void imprimirPrivilegio() {
    System.out.println(PRIVILEGIO);
  }
  

}
