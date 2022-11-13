
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Main {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {

    Cliente cliente = new Cliente();
    
    //criar venda
    Venda venda = new Venda(new Date(), cliente);

    //criar passagem
    Passagem passagem = new Passagem("A1", new Date(), 1000, "São Paulo", "Rio de Janeiro", cliente);

    //adicionar passagem na venda
    venda.getPassagens().add(passagem);

    //adicionar assento na venda
    venda.getAssentos().add(1);


    //mostar passagem

    System.out.println("Passagem: " + venda.getPassagens().get(0).getAssento());


    //adicionar assento disponivel na venda
    venda.getAssentosDisponiveis().add(1);

    // calcular valor
    venda.calcValorPassagem();

    //mostrar venda
    System.out.println(venda.toString());

    //remover assento disponivel na venda

    venda.getAssentosDisponiveis().remove(0);

    //remover passagem na venda

    venda.getPassagens().remove(0);
    
  }
}
