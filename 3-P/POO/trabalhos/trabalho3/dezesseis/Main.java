
public class Main {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    Elevator elevador = new Elevator(10, 10);
    elevador.setAndarAtual(5);
    elevador.setTotalAndares(10);
    elevador.setCapacidade(10);
    elevador.setPessoasPresentes(5);

    elevador.entra();
    elevador.entra();

    System.out.println(elevador.toString());

    elevador.desce();
    elevador.sai();
    elevador.sai();
    System.out.println(elevador.toString());
  } 
}
