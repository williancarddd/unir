import java.util.List;

public interface INotas {
  float mediaAlunoUnidade1(List<Float> notasProvas, List<Float> pesoProvas, List<Float> notasTrabalhos, List<Float> pesoTrabalhos, List<Float> notasTarefas, List<Float> pesoTarefas);
  float paraPassar ( float notaFinal , float notaMinima );
}