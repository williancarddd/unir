import java.util.Arrays;

public class Prova {
  /*
   * A prova recebe um gabarito e um vetor de respostas
   * e calcula a nota do aluno. Também, é possível obter
   * a nota de cada questão.
   */

   /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private char[] respostas;
  private int indice;
  private Gabarito gabarito;

  public Prova(Gabarito gabarito) {
    this.gabarito = gabarito;
    this.respostas = new char[15];
    this.indice = 0;
  }

  public void respostaAluno(char resposta) {
    this.respostas[this.indice] = resposta;
    this.indice++;
  }

  public int acertos() {
    int acertos = 0;
    for (int i = 0; i < this.respostas.length; i++) {
      if (this.respostas[i] == this.gabarito.respostaQuestao(i + 1)) {
        acertos++;
      }
    }
    return acertos;
  }

  public double nota() {
    double nota = 0;
    for (int i = 0; i < this.respostas.length; i++) {
      if (this.respostas[i] == this.gabarito.respostaQuestao(i + 1)) {
        if (i < 10) {
          nota += 0.5;
        } else {
          nota += 1;
        }
      }
    }
    return nota;
  }

  public double maior(Prova outra) {
    if (this.acertos() > outra.acertos()) {
      return this.nota();
    } else if (this.acertos() < outra.acertos()) {
      return outra.nota();
    } else {
      if (this.nota() > outra.nota()) {
        return this.nota();
      } else {
        return outra.nota();
      }
    }
  }

  @Override
  public String toString() {
    return "Prova [gabarito=" + gabarito + ", indice=" + indice
        + ", respostas=" + Arrays.toString(respostas) + "]";
  }
}
