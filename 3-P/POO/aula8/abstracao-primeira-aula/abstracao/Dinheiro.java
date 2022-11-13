import java.time.LocalDate;

public class Dinheiro extends Pagamento {
  private double desconto = 0.1;

  public Dinheiro() {
    super();
  }

  public Dinheiro(double v, LocalDate d) {
    super(v, d);
  }

  public double calcularValor() {
    return this.getValor() - this.getValor()*this.desconto;
  }
 
  public String toString() {
    return super.toString() + String.format("\nValor pagar: R$ %,.2f", this.calcularValor());
  }

  public double getDesconto() {
    return this.desconto;
  }

  public void setDesconto(double d) {
    this.desconto = d;
  }

  

}