
public class Main {
  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    Televisao tv = new Televisao(0, 0);
    tv.setCanal(5);
    tv.setVolume(5);
    tv.aumentaCanal();
    tv.aumentaVolume();
    tv.diminuiCanal();
    tv.diminuiVolume();
    tv.trocaCanal(10);
    System.out.println(tv.toString());

  }
}
