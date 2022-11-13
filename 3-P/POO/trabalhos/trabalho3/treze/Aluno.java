
public class Aluno {
  /*
   * Classe que representa um aluno
   * com nome, matrícula e curso.
   * Possui os seguintes métodos:
   * 1. getNome: retorna o nome do aluno
   * 2. getMatricula: retorna a matrícula do aluno
   * 3. getCurso: retorna o curso do aluno
   * 4. setNome: altera o nome do aluno
   * 5. setMatricula: altera a matrícula do aluno
   * 6. setCurso: altera o curso do aluno
   * 7. toString: retorna o nome, matrícula e curso do aluno
   */
  

   /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private int matricula;
  private String nome = "";
  private double nota1 = 0;
  private double nota2 = 0;
  private double trabalho = 0;
  private Integer peso1 = 4;
  private Integer peso2 = 2;
  public Aluno(int matricula) {
    this.matricula = matricula;
  }

  public Aluno(int matricula, String nome, double nota1, double nota2, double trabalho) {
    this.matricula = matricula;
    this.nome = nome;
    this.nota1 = nota1;
    this.nota2 = nota2;
    this.trabalho = trabalho;
  }
  public double media() {
    return ((nota1 * peso1) + (nota2 * peso1) + (trabalho * peso2)) / (peso1 + peso2);
  }

  public double nFinal() {
    if (media() >= 6) {
      return 0;
    } else {
      return 6 - media();
    }
  }

  //getters and setters
  public int getMatricula() {
    return matricula;
  }

  public void setMatricula(int matricula) {
    this.matricula = matricula;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public double getNota1() {
    return nota1;
  }

  public void setNota1(double nota1) {
    this.nota1 = nota1;
  }

  public double getNota2() {
    return nota2;
  }

  public void setNota2(double nota2) {
    this.nota2 = nota2;
  }

  public double getTrabalho() {
    return trabalho;
  }

  public void setTrabalho(double trabalho) {
    this.trabalho = trabalho;
  }

  public double calcularNotaRepositiva() {
  
    if (nFinal() == 0) {
      return 0;
    } else if (nFinal() > 10) {
      return 10;
    } else {
      return nFinal();
    }

  }

  public double quantoFalta(double v1, double v2, double trabalho) {
    double valorFaltante;
    double media = (v1 + v2 + trabalho) / 3;
    valorFaltante = 6 - media; 
    return valorFaltante;
  }

  @Override
  public String toString() {
    String temp =  "Aluno [matricula=" + matricula + ", nome=" + nome + ", nota1=" + nota1 + ", nota2=" + nota2 + ", trabalho="
        + trabalho +  "]";
    
    if(this.media() < 6) {
      Double valorTemp = this.calcularNotaRepositiva();
      temp +=  String.format("\nReposição: %.2f", valorTemp);
      if (this.calcularNotaRepositiva() > 10) {
        temp += "\nAluno reprovado por nota";
      }
      
    } else {
      temp +=  String.format("\nRepositiva: nao aplicavel");
    }
    return temp;
  }

}
