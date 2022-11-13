public class Horista extends Empregado {
  private double salarioHora;
  private double horasTrabalhadas;

  public Horista() {
    super();
    this.setSalarioHora(0);
    this.setHorasTrabalhadas(0);
  }

  public Horista(String nome, String sobrenome, double salarioHora, double horasTrabalhadas) {
    super(nome, sobrenome);
    this.setSalarioHora(salarioHora);
    this.setHorasTrabalhadas(horasTrabalhadas);
  }

  public void setSalarioHora(double salarioHora){
    this.salarioHora = salarioHora;
  }

  public double getSalarioHora(){
    return salarioHora;
  }

  public void setHorasTrabalhadas(double horasTrabalhadas){
    this.horasTrabalhadas = horasTrabalhadas;
  }

  public double getHorasTrabalhadas(){
    return horasTrabalhadas;
  }

  public double calcularSalario(){
    if(this.getHorasTrabalhadas() <= 40){
      return this.getSalarioHora() * this.getHorasTrabalhadas();
    } else {
      return (this.getSalarioHora() * 40) + (this.getSalarioHora() * 1.5);
    }
  }

  public String toString(){
    return super.toString() + " Salário Hora: " + this.getSalarioHora() + " Horas Trabalhadas: " + this.getHorasTrabalhadas() + " Salário: " + this.calcularSalario();
  }

}