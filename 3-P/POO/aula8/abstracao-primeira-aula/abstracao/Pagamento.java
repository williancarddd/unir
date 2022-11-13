import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

abstract class Pagamento {
  private double valor;
  private LocalDate data;

  public Pagamento() {
    this.setValor(0);
    this.setData(LocalDate.now());
  }

  public Pagamento(Double v, LocalDate d) {
    this.setValor(v);
    this.setData(d);
  }

  public abstract double calcularValor();

  public String toString() {
    return String.format("Valor: R$ %,.2f", this.valor) 
    + "\nData: " + this.data.format(DateTimeFormatter.ofPattern("dd/MM/yyyy"));
  }

  public double getValor() {
    return this.valor;
  }

  public void setValor(double v) {
    this.valor = v;
  }

  public LocalDate getData() {
    return this.data;
  }

  public void setData(LocalDate d) {
    this.data = d;
  }
}