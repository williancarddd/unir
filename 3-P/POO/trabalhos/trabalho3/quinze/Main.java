
public class Main {
  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  public static void main(String[] args) {
    Agenda agenda = new Agenda();
    Pessoa pessoa1 = new Pessoa("William", 19, "masculino", "79992643914");
    Pessoa pessoa2 = new Pessoa("Jose", 19, "masculino", "265484214");

    agenda.armazenaPessoa(pessoa2);
    agenda.armazenaPessoa(pessoa1);
    agenda.imprimeAgenda();
    agenda.removePessoa("William");
    agenda.imprimeAgenda();
  }
}
