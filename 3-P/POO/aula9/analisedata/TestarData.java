import java.time.LocalDate;

public class TestarData implements AnaliseData {
  public int calcularIdade(LocalDate dataNascimento, LocalDate date){
    int idade = date.getYear() - dataNascimento.getYear();
    
    if (date.getMonthValue() < dataNascimento.getMonthValue()) {
      idade--;
    } else if (date.getMonthValue() == dataNascimento.getMonthValue()) {
      if (date.getDayOfMonth() < dataNascimento.getDayOfMonth()) {
        idade--;
      }
    }
    return idade;
  }
  public int quantosDiasParaAniversario(LocalDate dataNascimento){
    int dias = 0;
    LocalDate date = LocalDate.now();
    System.out.println("Dias datanascimnto.getday " + dataNascimento.getDayOfYear());
    System.out.println("Dias date.getDayOfYear() " + date.getDayOfYear());
    dias = dataNascimento.getDayOfYear() - date.getDayOfYear();
    if (dias < 0) {
      dias = 365 + dias;
    } 
    return dias;
  }
  public int quantosDiasDesdoUltimoAniversario(LocalDate dataNascimento){
    int dias = 0;
    LocalDate date = LocalDate.now();
    dias = date.getDayOfYear() - dataNascimento.getDayOfYear();
    if (dias < 0) {
      dias = 365 + dias;
    }
    return dias;
  }
}