
public class Televisao {
  /**
   * Simulador de televisão com 10 canais
   * possui os seguintes métodos:
   * 1. canal: retorna o canal atual
   * 2. volume: retorna o volume atual
   * 3. aumentaVolume: aumenta o volume em 1
   * 4. diminuiVolume: diminui o volume em 1
   * 5. aumentaCanal: aumenta o canal em 1
   * 6. diminuiCanal: diminui o canal em 1
   */

   /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private int volume = 0;
  private int canal = 0;

  public Televisao(int volume, int canal) {
    this.volume = volume;
    this.canal = canal;
  }

  public void aumentaVolume() {
    volume++;
  }

  public void diminuiVolume() {
    volume--;
  }

  public void aumentaCanal() {
    canal++;
  }

  public void diminuiCanal() {
    canal--;
  }

  public void trocaCanal(int canal) {
    this.canal = canal;
  }

  public int getVolume() {
    return volume;
  }

  public void setVolume(int volume) {
    this.volume = volume;
  }

  public int getCanal() {
    return canal;
  }

  public void setCanal(int canal) {
    this.canal = canal;
  }

  @Override
  public String toString() {
    return "Televisao [canal=" + canal + ", volume=" + volume + "]";
  }

  
}
