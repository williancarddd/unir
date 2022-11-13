
public class Main {
  public static void main(String[] main) {
        /*
      * @author William Cardoso Barbosa
      * @see williancard123@gmail.com
      */
      Gabarito gabarito = new Gabarito(); 
      Prova prova1 = new Prova(gabarito);

      prova1.respostaAluno('A');
      prova1.respostaAluno('B');
      prova1.respostaAluno('C');
      prova1.respostaAluno('D');
      prova1.respostaAluno('E');
      prova1.respostaAluno('A');
      prova1.respostaAluno('B');
      prova1.respostaAluno('C');
      prova1.respostaAluno('D');
      prova1.respostaAluno('E');
      prova1.respostaAluno('A');
      prova1.respostaAluno('B');
      prova1.respostaAluno('C');
      prova1.respostaAluno('D');

      System.out.println(prova1.acertos());
      System.out.println(prova1.nota());
      
  
  } 
}
