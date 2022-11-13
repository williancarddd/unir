import java.util.List;

public class Notas implements INotas {
  public Notas() {}
  public float mediaAlunoUnidade1(List<Float> notasProvas, List<Float> pesoProvas, List<Float> notasTrabalhos, List<Float> pesoTrabalhos, List<Float> notasTarefas, List<Float> pesoTarefas) {
    float mediaProvas = 0f;
    float mediaTrabalhos = 0f;
    float mediaTarefas = 0f;
    float mediaFinal = 0f;
    for (int i = 0; i < notasProvas.size(); i++) {
      mediaProvas += notasProvas.get(i) * pesoProvas.get(i);
    }
    for (int i = 0; i < notasTrabalhos.size(); i++) {
      mediaTrabalhos += notasTrabalhos.get(i) * pesoTrabalhos.get(i);
    }
    for (int i = 0; i < notasTarefas.size(); i++) {
      mediaTarefas += notasTarefas.get(i) * pesoTarefas.get(i);
    }
    mediaFinal = ((mediaProvas*notasProvas.size()) + (mediaTrabalhos*notasTrabalhos.size()) + (mediaTarefas*notasTarefas.size()) / (notasProvas.size() + notasTrabalhos.size() + notasTarefas.size()));
    return mediaFinal;
  }
  
  public float paraPassar ( float notaFinal , float notaMinima ) {
    return (notaMinima - notaFinal) ;
  }
}
