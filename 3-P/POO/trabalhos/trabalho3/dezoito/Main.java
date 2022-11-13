
public class Main {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    AgendaVoo av = new AgendaVoo(1, new Data(20, 10, 2010));
    av.ocupa(1);
    av.ocupa(2);
    av.ocupa(3);
    av.ocupa(4);

    AgendaVoo av2 = av.clone();
    av2.ocupa(5);
    av2.ocupa(6);
    av2.ocupa(7);
    av2.ocupa(8);
    av2.ocupa(9);

    System.out.println(av.toString());

  }
  
}
