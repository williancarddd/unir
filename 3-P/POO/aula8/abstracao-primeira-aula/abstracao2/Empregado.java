

abstract class Empregado {
  private String nome;
  private String sobrenome;

  public Empregado() {
    this.setNome("");
    this.setSobrenome("");
  }

  public Empregado(String nome, String sobrenome) {
    this.setNome(nome);
    this.setSobrenome(sobrenome);
  }

  public abstract double calcularSalario();

  public void setNome(String nome){
    this.nome = nome;
  }

  public String getNome(){
    return nome;
  }

  public void setSobrenome(String sobrenome){
    this.sobrenome = sobrenome;
  }

  public String getSobrenome(){
    return sobrenome;
  }

  public String toString(){
    return "Nome: " + this.getNome() + " " + this.getSobrenome();
  }
}