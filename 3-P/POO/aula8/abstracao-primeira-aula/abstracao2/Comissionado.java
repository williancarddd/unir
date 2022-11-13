public class Comissionado extends Empregado {
  private double vendasBrutas;
  private double taxaComissao;
  private double bonus;

  public Comissionado() {
    super();
    this.setVendasBrutas(0);
    this.setTaxaComissao(0);
    this.setBonus(0);
  }

  public Comissionado(String nome, String sobrenome, double vendasBrutas, double taxaComissao, double bonus) {
    super(nome, sobrenome);
    this.setVendasBrutas(vendasBrutas);
    this.setTaxaComissao(taxaComissao);
    this.setBonus(bonus);
  }


  public void setVendasBrutas(double vendasBrutas){
    this.vendasBrutas = vendasBrutas;
  }

  public double getVendasBrutas(){
    return vendasBrutas;
  }

  public void setTaxaComissao(double taxaComissao){
    this.taxaComissao = taxaComissao;
  }

  public double getTaxaComissao(){
    return taxaComissao;
  }

  public void setBonus(double bonus){
    this.bonus = bonus;
  }

  public double getBonus(){
    return bonus;
  }

  public double calcularSalario(){
    return this.getVendasBrutas() * this.getTaxaComissao() + this.getBonus();
  }

  public String toString(){
    return super.toString() + " Vendas Brutas: " + this.getVendasBrutas() + " Taxa de Comissão: " + this.getTaxaComissao()*100 + "%" + " Bônus: " + this.getBonus() + " Salário: " + this.calcularSalario();
  }

}
