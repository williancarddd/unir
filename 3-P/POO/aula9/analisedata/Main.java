import java.time.LocalDate;

public class Main {
  public static void main(String[] args) {
    AnaliseData data = new TestarData();
    LocalDate dataNascimento = LocalDate.of(1954, 11, 24);
    LocalDate date = LocalDate.now();
    System.out.println("Idade: " + data.calcularIdade(dataNascimento, date));
    System.out.println("Dias para aniversário: " + data.quantosDiasParaAniversario(dataNascimento));
    System.out.println("Dias desde o último aniversário: " + data.quantosDiasDesdoUltimoAniversario(dataNascimento));
  }
}
