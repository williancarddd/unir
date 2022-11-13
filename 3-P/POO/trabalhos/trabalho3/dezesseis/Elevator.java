
public class Elevator {
  /**
   * Simulador de elevador com 10 andares
   * posssui os seguintes métodos: 
   * 1. entrar: adiciona uma pessoa no elevador
   * 2. sair: remove uma pessoa do elevador
   * 3. subir: sobe uma pessoa no elevador
   * 4. descer: desce uma pessoa do elevador
   * 5. getAndar: retorna o andar atual do elevador
   * 6. getCapacidade: retorna a capacidade atual do elevador
   * 7. getLotacao: retorna a lotação atual do elevador
   */

   /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private int andarAtual = 0;
  private int totalAndares = 0;
  private int capacidade = 0;
  private int pessoasPresentes = 0;

  public Elevator() {}

  public Elevator(int capacidade, int totalAndares) {
    this.capacidade = capacidade;
    this.totalAndares = totalAndares;
  }

  public void entra() {
    if (pessoasPresentes < capacidade) {
      pessoasPresentes++;
    }
  }

  public void sai() {
    if (pessoasPresentes > 0) {
      pessoasPresentes--;
    }
  }

  public void sobe() {
    if (andarAtual < totalAndares) {
      andarAtual++;
    }
  }

  public void desce() {
    if (andarAtual > 0) {
      andarAtual--;
    }
  }

  public int getAndarAtual() {
    return andarAtual;
  }

  public int getTotalAndares() {
    return totalAndares;
  }

  public int getCapacidade() {
    return capacidade;
  }

  public int getPessoasPresentes() {
    return pessoasPresentes;
  }

  public void setAndarAtual(int andarAtual) {
    this.andarAtual = andarAtual;
  }

  public void setTotalAndares(int totalAndares) {
    this.totalAndares = totalAndares;
  }

  public void setCapacidade(int capacidade) {
    this.capacidade = capacidade;
  }

  public void setPessoasPresentes(int pessoasPresentes) {
    this.pessoasPresentes = pessoasPresentes;
  }

  @Override
  public String toString() {
    return "Elevador [andarAtual=" + andarAtual + ", capacidade=" + capacidade + ", pessoasPresentes="
        + pessoasPresentes + ", totalAndares=" + totalAndares + "]";
  }

}
