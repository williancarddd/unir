
public class Main {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    ContaBancariaSimplificada conta = new ContaBancariaSimplificada("João");
    conta.depositar(100);
    conta.sacar(50);
    conta.imprimir();
    conta.sacar(100);
    conta.sacar(0.1);
    conta.imprimir();
  }
}
