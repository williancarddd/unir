

public class AgendaVoo {
  /**
   * Simulador de agenda de voo
   * possui os seguintes métodos:
   * 1. proximoLivre: retorna o próximo assento livre
   * 2. rerifica: verifica se o assento está livre
   * 3. ocupa: ocupa o assento
   * 4. vagas: retorna o número de assentos livres
   * 5. toString: retorna a agenda de voo
   */

   /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private int numeroVoo;
  private Data data;
  private int[] cadeiras;

  public AgendaVoo(int numeroVoo, Data data) {
    this.numeroVoo = numeroVoo;
    this.data = data;
    cadeiras = new int[10];
  }
  
  public int proximoLivre() {
    for (int i = 0; i < cadeiras.length; i++) {
      if (cadeiras[i] == 0) {
        return i;
      }
    }
    return -1;
  }

  public boolean verifica(int cadeira) {
    if (cadeiras[cadeira] == 0) {
      return false;
    } else {
      return true;
    }
  }

  public boolean ocupa(int cadeira) {
    if (cadeiras[cadeira] == 0) {
      cadeiras[cadeira] = 1;
      return true;
    } else {
      return false;
    }
  }

  public int vagas() {
    int vagas = 0;
    for (int i = 0; i < cadeiras.length; i++) {
      if (cadeiras[i] == 0) {
        vagas++;
      }
    }
    return vagas;
  }

  public int getVoo() {
    return numeroVoo;
  }

  public Data getData() {
    return data;
  }

  public AgendaVoo clone() {
    AgendaVoo clone = new AgendaVoo(numeroVoo, data);
    for (int i = 0; i < cadeiras.length; i++) {
      clone.cadeiras[i] = cadeiras[i];
    }
    return clone;
  }

  public String toString() {
    String cadeiras = "";
    for (int i = 0; i < this.cadeiras.length; i++) {
      cadeiras += this.cadeiras[i] + " ";
    }
    return "AgendaVoo [numeroVoo=" + numeroVoo + ", data=" + data + ", cadeiras=" + cadeiras + "]";
  }
}
