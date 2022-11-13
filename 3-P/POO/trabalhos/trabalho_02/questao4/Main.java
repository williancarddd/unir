public class Main {
  public static void main(String[] args) {
    ElevadorDeVerdade elevador = new ElevadorDeVerdade(0, 0, 0);
    elevador.sobe(1);
    elevador.adicionaPessoa(1);
    elevador.adicionaPeso(100);
    elevador.sobe(2);
    elevador.adicionaPessoa(1);
    elevador.adicionaPeso(100);
    elevador.sobe(3);
    System.out.println(elevador.toString());
  }
}
