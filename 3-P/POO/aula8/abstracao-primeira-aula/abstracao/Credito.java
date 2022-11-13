import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;

public class Credito extends Pagamento {
  private double jurosAm = 0.015;
  private int parcelas = 1;

  public Credito() {
    super();
  }

  public Credito(double v, LocalDate d, int p) {
    super(v, d);
    this.parcelas = p;
  }

  public double calcularValor() {
    double valor = this.getValor();
    if (this.parcelas > 1) {
      valor = valor + (this.getValor()*this.jurosAm);
    }
    return valor;
  }

  public String toString() {
    return super.toString() + String.format("\nValor pagar: R$ %,.2f", this.calcularValor());
  }

  public double getJurosAm() {
    return this.jurosAm;
  }

  public void setJurosAm(double j) {
    this.jurosAm = j;
  }

  public int getParcelas() {
    return this.parcelas;
  }

  public void setParcelas(int p) {
    this.parcelas = p;
  }
}