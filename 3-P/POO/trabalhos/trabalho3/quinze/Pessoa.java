
public class Pessoa {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  // nome, idade, sexo, telefone, email
  private String nome;
  private int idade;
  private String sexo;
  private String telefone;
  private String email =  "";

  public Pessoa(String nome, int idade, String sexo, String telefone) {
    this.nome = nome;
    this.idade = idade;
    this.sexo = sexo;
    this.telefone = telefone;
  }

  public Pessoa(String nome, int idade, String sexo, String telefone, String email) {
    this.nome = nome;
    this.idade = idade;
    this.sexo = sexo;
    this.telefone = telefone;
    this.email = email;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public int getIdade() {
    return idade;
  }

  public void setIdade(int idade) {
    this.idade = idade;
  }

  public String getSexo() {
    return sexo;
  }

  public void setSexo(String sexo) {
    this.sexo = sexo;
  }

  public String getTelefone() {
    return telefone;
  }

  public void setTelefone(String telefone) {
    this.telefone = telefone;
  }

  public String getEmail() {
    return email;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  @Override
  public String toString() {
    return "Pessoa [email=" + email + ", idade=" + idade + ", nome=" + nome + ", sexo=" + sexo + ", telefone=" + telefone
        + "]";
  }

  

  
}
