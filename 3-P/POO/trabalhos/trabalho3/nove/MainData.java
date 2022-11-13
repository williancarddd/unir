

public class MainData {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public  static void main(String[] args) {
    Dataa data = new Dataa();
    data.setDia(20);  
    data.setMes(10);
    data.setAno(2020);
    System.out.println(data.getDia() + "/" + data.getMes() + "/" + data.getAno());
    System.out.println(data.vemAntes(20, 10, 2020));
    System.out.println(data.vemAntes(20, 10, 2021));
  }
}
