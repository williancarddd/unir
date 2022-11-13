import java.util.Date;

public class Pessoa {
  /*
   A classe recebe o nome, a data de nascimento e o peso da pessoa.
   Além disso, possui um método para mostrar essas informações.
  */
  /**
 * @author William Cardoso Barbosa
 * @see williancard123@gmail.com
 */
  private String nome;
  private Date dataNascimento;
  private float altura;

  public Pessoa(String nome, Date dataNascimento, float altura) {
    this.nome = nome;
    this.dataNascimento = dataNascimento;
    this.altura = altura;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public Date getDataNascimento() {
    return dataNascimento;
  }

  public void setDataNascimento(Date dataNascimento) {
    this.dataNascimento = dataNascimento;
  }

  public float getAltura() {
    return altura;
  }

  public void setAltura(float altura) {
    this.altura = altura;
  }

  @Override
  public String toString() {
    return "Pessoa [altura=" + altura + ", dataNascimento=" + dataNascimento + ", nome=" + nome + "]";
  }

  
}
