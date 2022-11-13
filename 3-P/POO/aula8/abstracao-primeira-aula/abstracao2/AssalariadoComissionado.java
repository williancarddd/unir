public class AssalariadoComissionado extends Assalariado {
  private double salarioBase;

  public AssalariadoComissionado() {
    super();
    this.setSalarioBase(0.0);
  }

  public AssalariadoComissionado(String nome, String sobrenome, double salarioBase, double salarioMensal, double desconto) {
    super(nome, sobrenome, salarioMensal, desconto);
    this.setSalarioBase(salarioBase);
  }
  public void setSalarioBase(double v) {
    this.salarioBase = v;
  }

  public double getSalarioBase() {
    return this.salarioBase;
  }

  public double calcularSalario() {
    return this.getSalarioBase() + super.calcularSalario();
  }

  public String toString() {
    return super.toString() + " Salário Base: " + this.getSalarioBase() + " Salário: " + this.calcularSalario();
  }
}
