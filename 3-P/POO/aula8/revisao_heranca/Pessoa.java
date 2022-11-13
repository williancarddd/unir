import java.time.LocalDate;
import java.time.format.DateTimeFormatter;


public class  Pessoa {
  private String nome, CPF;
  private LocalDate dataNasc;
  private long idade;
  private LocalDate DataAtual = LocalDate.now();

  public Pessoa() {}

  public Pessoa(String n,  String c, LocalDate d) {
    this.nome = n;
    this.CPF = c;
    this.dataNasc = d;
    this.idade = this.DataAtual.compareTo(this.dataNasc);
  }
  
  public String toString() {
    return "Nome: " + this.nome 
    + "\nCPF: " + this.CPF
    + "\nNascimento: " + 
    this.dataNasc.format(
      DateTimeFormatter.ofPattern("dd/MM/yyyy")
      )
    + "\nidade: " + this.idade + " anos";
  }
}