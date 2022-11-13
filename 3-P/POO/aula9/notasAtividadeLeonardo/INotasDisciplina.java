import java.util.List;

public interface INotasDisciplina {
  float mediaFinalAluno ( float prova1 , float pesop1 , float
  prova2 , float pesop2 , float trabalho1 , float pesot1 ,
  float trabalho2 , float pesot2 , float pesoProvas , float
  pesoTrabalhos );
  float mediaFinalAluno ( List < Float > notasProvas , List <
  Float > pesoProvas , List < Float > notasTrabalhos , List <
  Float > pesoTrabalhos, List < Float > notasAtividades, List < Float > pesoAtividades);
  void quantidadeParaAprovacao ( float notaFinal , float notaMinima );
}