
public class Main {
  public static void main(String[] args) {

    // valendo 1 ponto
    char respostas[] = { 'A', 'C', 'B', 'E', 'C', 'B', 'D', 'C', 'E', 'D' };
    Prova prova = new Prova(10, new char[] {'A', 'C', 'B', 'E', 'C', 'B', 'D', 'C', 'E', 'D'}, respostas);
    System.out.println(prova.calculaNotaPessoa());

    // valendo 2 pontos
    char respostas2[] = { 'A', 'C', 'B', 'E', 'C' };
    Prova prova2 = new Prova(5, new char[] {'A', 'C', 'B', 'E', 'A'}, respostas2);
    prova2.setNotaQuestao(2);
    System.out.println(prova2.calculaNotaPessoa());



  }
}
