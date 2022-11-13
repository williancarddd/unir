
import java.time.LocalDate;
public class Main {
  public static void main(String []args) {
    Cheque  c = new Cheque(
      3000.00,
      LocalDate.of(2020, 12, 10),
      LocalDate.of(2020, 12, 20).plusDays(20)
    );
    //System.out.println(c.toString());

    Dinheiro d = new Dinheiro(3000.00, LocalDate.of(2020, 12, 10));

    //System.out.println(d.toString());

    Credito cre = new Credito(1000.00, LocalDate.of(2020, 12, 10), 3);

    System.out.println(cre.toString());
  }
}
