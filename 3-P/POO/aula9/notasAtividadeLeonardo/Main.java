import java.util.List;

class Main {
    public static void main(String[] args) {
      NotasDisciplina notas = new NotasDisciplina();
      List<Float> notasProvas = List.of(9.6f);
      List<Float> pesoProvas = List.of(0.5f);
      List<Float> notasTrabalhos = List.of(9.5f);
      List<Float> pesoTrabalhos = List.of(0.3f);
      List<Float> notasAtividades = List.of(10f, 10f , 8f);
      List<Float> pesoAtividades = List.of(0.2f , 0.2f , 0.2f);
      float notaFinal = notas.mediaFinalAluno(notasProvas, pesoProvas, notasTrabalhos, pesoTrabalhos, notasAtividades, pesoAtividades);
      System.out.println(String.format("Nota final: %.2f", notaFinal));
      notas.quantidadeParaAprovacao(notaFinal, 7f);
    }
}