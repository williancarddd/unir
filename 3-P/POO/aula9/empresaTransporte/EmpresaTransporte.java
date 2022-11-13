/*
 * 
 * Na sua análise, quais métodos abstratos e/ou variáveis constantes deveriam
existir nesse tipo de interface?
  métodos:
   - calcularFrete()
    - calcularPrazo()
    - calcularValorSeguro()
    - calcularValorImposto()
    - calcularValorTotal()
    - calcularMelhorCaminho()
  variaveis:
    endereco_destino
    endereco_origem
    peso
    valor
 */

interface EmpresaTransporte {
    public double calcularFrete();
    public double calcularPrazo();
    public double calcularValorSeguro();
    public double calcularValorImposto();
    public double calcularValorTotal();
    public double calcularMelhorCaminho();

    String endereco_destino = null;
    String endereco_origem = null;
    double peso = 0;
    double valor = 0;
}