import java.time.LocalDate;

public interface AnaliseData {
  int calcularIdade(LocalDate dataNascimento, LocalDate date);
  int quantosDiasParaAniversario(LocalDate dataNascimento);
  int quantosDiasDesdoUltimoAniversario(LocalDate dataNascimento);
}
