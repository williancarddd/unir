import java.util.ArrayList;

public class Prova  extends RespostasProvaConcurso {
  private double notaQuestao = 1;
  private char gabarito[];

  public Prova(int qtQuestoes, char respostas[], char gabarito[]) {
    super(qtQuestoes, respostas);
    this.setGabarito(gabarito);
  }

  public float calculaNotaPessoa() {
    ArrayList<Boolean> acertos = this.verificaAcertos(this.getGabarito());
    int acertosInt = 0;
    for (Boolean acerto : acertos) {
      if (acerto) {
        acertosInt++;
      }
    }
    return (float) (acertosInt * this.notaQuestao);
  }

  public char[] getGabarito() {
    return this.gabarito;
  }

  public void setGabarito(char[] gabarito) {
    this.gabarito = gabarito;
  }

  public double getNotaQuestao() {
    return this.notaQuestao;
  }

  public void setNotaQuestao(double notaQuestao) {
    this.notaQuestao = notaQuestao;
  }
  
  
}
