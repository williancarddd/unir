public class Main {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    Data data = new Data(20, 10, 2019);
    Data data2 = new Data(25, 10, 2019);
    System.out.println(data.compara(data2));

    System.out.println(data.isBissexto());
    System.out.println(data.getMesExtenso());
    Data clonado = data.clone();
    System.out.println(clonado.getDia());
  }
}
