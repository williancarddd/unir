public class CalcularJurps  implements ICalcularJuros{
  public CalcularJurps() {}
  public static final double taxaJuros = 0.05; // 5%
  public double calcularJurosSimples ( double
  valorDevido ) {
    return valorDevido * taxaJuros + valorDevido;
  }
  public double calcularJurosSimples ( double
  valorDevido , int qtMeses )
  {
    return valorDevido * taxaJuros * qtMeses + valorDevido;
  }
  // Pesquisar fó rmula dos juros compostos
  public  double calcularJurosComposto ( double
  valorDevido , int qtMeses ){
    return valorDevido * Math.pow(1 + taxaJuros, qtMeses);
  }
}
