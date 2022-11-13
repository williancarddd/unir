
public class ContaBancariaSimplificada {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
 
  private String nomeDoCorrentista;
  private double saldo = 0;
  private boolean eContaEspecial = false;

  public  ContaBancariaSimplificada(String nomeDoCorrentista) {
    this.nomeDoCorrentista = nomeDoCorrentista;
  }

  public ContaBancariaSimplificada(String nomeDoCorrentista, double saldo, boolean eContaEspecial) {
    this.nomeDoCorrentista = nomeDoCorrentista;
    this.saldo = saldo;
    this.eContaEspecial = eContaEspecial;
  }

  public String getNomeDoCorrentista() {
    return nomeDoCorrentista;
  }

  public void setNomeDoCorrentista(String nomeDoCorrentista) {
    this.nomeDoCorrentista = nomeDoCorrentista;
  }

  public double getSaldo() {
    return saldo;
  }

  public void setSaldo(double saldo) {
    this.saldo = saldo;
  }

  public boolean iseContaEspecial() {
    return eContaEspecial;
  }

  public void seteContaEspecial(boolean eContaEspecial) {
    this.eContaEspecial = eContaEspecial;
  }

  public void depositar(double valor) {
    this.saldo += valor;
  }

  public void sacar(double valor) {
    if (this.eContaEspecial) {
      double newValue = this.saldo - valor;
      if (newValue < 0 ) System.out.println("A conta irá ficar negativa");
      this.saldo = newValue;
    } else {
      if (this.saldo >= valor) {
        this.saldo -= valor;
      } else {
        System.out.println("Saldo insuficiente");
      }
    }
  }

  public void imprimir() {
    System.out.println("Nome do correntista: " + this.nomeDoCorrentista);
    System.out.println("Saldo: " + this.saldo);
    System.out.println("Conta especial: " + this.eContaEspecial);
  }

}
