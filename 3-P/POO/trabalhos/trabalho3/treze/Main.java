
public class Main {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    Aluno aluuno1 = new Aluno(1, "Joao", 2, 2, 0);

    System.out.println(aluuno1.media());
    System.out.println(aluuno1.nFinal());
    aluuno1.calcularNotaRepositiva();
    System.out.println(aluuno1.toString());
  }
  
}
