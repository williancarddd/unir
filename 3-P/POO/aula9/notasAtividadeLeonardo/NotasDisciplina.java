import java.util.List;

public class NotasDisciplina implements INotasDisciplina {
  public NotasDisciplina() {}
  public float mediaFinalAluno ( float prova1 , float pesop1 , float
  prova2 , float pesop2 , float trabalho1 , float pesot1 ,
  float trabalho2 , float pesot2 , float pesoProvas , float
  pesoTrabalhos ){
    float mediaProvas = ( prova1 * pesop1 + prova2 * pesop2 ) /
    ( pesop1 + pesop2 );
    float mediaTrabalhos = ( trabalho1 * pesot1 + trabalho2 *
    pesot2 ) / ( pesot1 + pesot2 );
    return ( mediaProvas * pesoProvas + mediaTrabalhos *
    pesoTrabalhos ) / ( pesoProvas + pesoTrabalhos );
  }
  public float mediaFinalAluno ( List < Float > notasProvas , List <
  Float > pesoProvas , List < Float > notasTrabalhos , List <
  Float > pesoTrabalhos, List < Float > notasAtividades, List < Float > pesoAtividades){
    float mediaProvas = 0;
    float mediaTrabalhos = 0;
    float pesoTotalProvas = 0;
    float pesoTotalTrabalhos = 0;
    float pesoTotalAtividades = 0;
    for ( int i = 0 ; i < notasProvas.size(); i++ ) {
      mediaProvas += notasProvas.get(i) * pesoProvas.get(i);
      pesoTotalProvas += pesoProvas.get(i);
    }
    for ( int i = 0 ; i < notasTrabalhos.size(); i++ ) {
      mediaTrabalhos += notasTrabalhos.get(i) * pesoTrabalhos.get(i);
      pesoTotalTrabalhos += pesoTrabalhos.get(i);
    }
    for ( int i = 0 ; i < notasAtividades.size(); i++ ) {
      pesoTotalAtividades += pesoAtividades.get(i);
    }
    return ( mediaProvas / pesoTotalProvas + mediaTrabalhos / pesoTotalTrabalhos ) / 2;
  }

  public void quantidadeParaAprovacao ( float notaFinal , float notaMinima ){
    float  notaNecessaria = notaMinima - notaFinal;
    if ( notaNecessaria > 0 ) {
      System.out.println(String.format("Para ser aprovado, você precisa tirar %.2f na prova final.", notaNecessaria));
    } else {
      System.out.println("Você já está aprovado.");
    }
  }
}
