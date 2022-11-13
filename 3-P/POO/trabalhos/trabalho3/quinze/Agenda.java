import java.util.ArrayList;
import java.util.List;

public class Agenda {
  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  List<Pessoa> pessoas = new ArrayList<Pessoa>();
   
  public Agenda() {}

  public void armazenaPessoa(Pessoa pessoa) {
    pessoas.add(pessoa);
  }

  public void removePessoa(String nome) {
    for (int i = 0; i < pessoas.size(); i++) {
      if (pessoas.get(i).getNome().equals(nome)) {
        pessoas.remove(i);
      }
    }
  }

  public int buscaPessoa(String nome) {
    for (int i = 0; i < pessoas.size(); i++) {
      if (pessoas.get(i).getNome().equals(nome)) {
        return i;
      }
    }
    return -1;
  }

  public void imprimeAgenda() {
    for (int i = 0; i < pessoas.size(); i++) {
      System.out.println(pessoas.get(i).toString());
    }
  }

  public void imprimePessoa(int index) {
    System.out.println(pessoas.get(index).toString());
  }

  
}
