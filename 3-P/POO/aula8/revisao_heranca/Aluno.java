import java.time.LocalDate;

public class Aluno extends Pessoa {
  private String matricula;
  public Aluno() {
    super();
  }

  public Aluno(String matricula, String nome, String cpf, LocalDate data) {
    super(nome, cpf, data);
    this.matricula = matricula;
  }

  public String toString() {
    return super.toString() + "\nMatricula: " + this.matricula;
  }
}
