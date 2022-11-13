import java.time.LocalDate;

public class Main {
  public static void main(String []args) {
    String nome = "William Cardoso";
    String cpf = "0833048731";
    LocalDate nascimento = LocalDate.of(2002, 07, 06);
    String matricula = "32131231";
    Pessoa pessoa = new Pessoa(nome, cpf, nascimento);
    //System.out.println(pessoa.toString());

    Aluno aluno = new Aluno(matricula, nome, cpf, nascimento);
    System.out.println(aluno.toString());
  }
}
