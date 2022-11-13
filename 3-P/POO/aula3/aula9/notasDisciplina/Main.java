import java.util.List;

class Main {
    public static void main(String[] args) {
      Notas notas = new Notas();
      List<Float> notasDaProva = List.of(7.4f);
      List<Float> pesoDaProva = List.of(0.5f);
      List<Float> notasDoTrabalho = List.of(9.5f);
      List<Float> pesoDoTrabalho = List.of(0.3f);
      List<Float> notasDaTarefa = List.of(8f, 6f, 4f);
      List<Float> pesoDaTarefa = List.of(0.2f, 0.2f, 0.2f);
      float media = notas.mediaAlunoUnidade1(notasDaProva, pesoDaProva, notasDoTrabalho, pesoDoTrabalho, notasDaTarefa, pesoDaTarefa);
      System.out.println(media);

      float notaFinal = 7.5f;
      float notaMinima = 6f;
      float notaNecessaria = notas.paraPassar(notaFinal, notaMinima);
      System.out.println(notaNecessaria);
    }
}