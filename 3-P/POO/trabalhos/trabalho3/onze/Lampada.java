
public class Lampada {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private String estado;
  public void acende() {
    if (estado == "acesa") {
      System.out.println("A lâmpada já está acesa");
    } else {
      estado = "acesa";
      System.out.println("A lâmpada foi acesa");
    }
  }
  public void apaga() {
    if (estado == "apagada") {
      System.out.println("A lâmpada já está apagada");
    } else {
      estado = "apagada";
      System.out.println("A lâmpada foi apagada");
    }
  }
  public void imprimirEstado() {
    System.out.println(estado);
  }

}
