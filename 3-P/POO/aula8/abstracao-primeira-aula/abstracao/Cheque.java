import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class Cheque extends Pagamento{
  private LocalDate dataDescontar;

  public Cheque() {
    super();
    this.dataDescontar = LocalDate.now().plusDays(30);
  }

  public Cheque(Double v, LocalDate dDesc, LocalDate d) {
    super(v, dDesc);
    this.dataDescontar = d;
  }

  public double calcularValor() {
    //evitar crash

    long diffDias = this.getData().datesUntil(this.dataDescontar).count();
    System.out.println(diffDias);
    double valor = 0;
    if (diffDias <= 30) {
      valor = this.getValor() + this.getValor()*0.03;
    }
    else if (diffDias <= 60) {
    valor = this.getValor() + this.getValor()*0.06;
    } else if (diffDias <= 90) {
      valor = this.getValor() + this.getValor()*0.09;
    }
    return valor;
  }
  public String toString() {
    return super.toString() + "\nData para desconto: " + this.dataDescontar.format(DateTimeFormatter.ofPattern("dd/MM/yyyy"))
    + String.format("\nValor pagar: R$ %,.2f", this.calcularValor());
  }
}
