public class Main {
 public static void main(String[] args) {
  Comissionado comissionado = new Comissionado("John", "Doe", 1000, 0.1, 100);
  //System.out.println(comissionado.toString());

  Horista horista = new Horista("Jane", "Doe", 10, 100);
  //System.out.println(horista.toString());

  Assalariado assalariado = new Assalariado("John", "Doe", 1000, 100);
  //System.out.println(assalariado.toString());

  AssalariadoComissionado assalariadoComissionado = new AssalariadoComissionado("John", "Doe", 1000, 100, 1000);
  System.out.println(assalariadoComissionado.toString());
 } 
}
