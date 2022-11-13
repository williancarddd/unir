import java.util.ArrayList;
import java.util.List;

public class main {
  public static void main(String[] args) {
    List<MeuFloat> floatas = new ArrayList<MeuFloat>();
    floatas.add(new MeuFloat(9.8));
    floatas.add(new MeuFloat(8.14));
    floatas.add(new MeuFloat(9.14));
    floatas.add(new MeuFloat(9.14));
    

    System.out.println("O tamanho da lista é: " + floatas.size());
    double soma = 0;
    for (MeuFloat f : floatas) {
      soma += f.getValor();
    }
    System.out.println("A soma dos valores é: " + soma);
    System.out.println(String.format("media: %.2f" , soma / floatas.size() ));
  }
}
