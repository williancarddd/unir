interface ICalcularJuros {
  public static final double taxaJuros = 0.05; // 5%
  public abstract double calcularJurosSimples ( double
  valorDevido );
  public abstract double calcularJurosSimples ( double
  valorDevido , int qtMeses );
  // Pesquisar fó rmula dos juros compostos
  public abstract double calcularJurosComposto ( double
  valorDevido , int qtMeses );
}