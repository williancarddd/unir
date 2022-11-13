import java.util.ArrayList;

abstract class RespostasProvaConcurso {
  private String concurso = "ProgramadorTJ";
  private int qtQuestoes = 10;
  private char respostas[];

  abstract float calculaNotaPessoa();

  public RespostasProvaConcurso(int qtQuestoes, char respostas[]) {
    this.setQtQuestoes(qtQuestoes);
    this.setRespostas(respostas);
  }

  public ArrayList<Boolean> verificaAcertos(char questoes[]) {
    ArrayList<Boolean> acertos = new ArrayList<Boolean>();
    for (int i = 0; i < this.qtQuestoes; i++) {
      acertos.add(this.isAcerto(this.getRespostaQuestao(i), questoes[i]));
    }
    return acertos;
  }

  public char getRespostaQuestao(int numeroQuestao) {
    return this.respostas[numeroQuestao];
  }

  private boolean isAcerto(char a, char b) {
    return a == b;
  }

  public String getConcurso() {
    return this.concurso;
  }

  public int getQtQuestoes() {
    return this.qtQuestoes;
  }

  public char[] getRespostas() {
    return this.respostas;
  }

  public void setRespostas(char[] respostas) {
    this.respostas = respostas;
  }

  public void setConcurso(String concurso) {
    this.concurso = concurso;
  }

  public void setQtQuestoes(int qtQuestoes) {
    this.qtQuestoes = qtQuestoes;
  }
}