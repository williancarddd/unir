public class Assalariado  extends Empregado{
    private double salarioMensal;
    private double desconto;

    public Assalariado() {
        super();
        this.setSalarioMensal(0);
        this.setDesconto(0);
    }

    public Assalariado(String nome, String sobrenome, double salarioMensal, double desconto) {
        super(nome, sobrenome);
        this.setSalarioMensal(salarioMensal);
        this.setDesconto(desconto);
    }

    public void setSalarioMensal(double salarioMensal){
        this.salarioMensal = salarioMensal;
    }

    public double getSalarioMensal(){
        return salarioMensal;
    }

    public void setDesconto(double desconto){
        this.desconto = desconto;
    }

    public double getDesconto(){
        return desconto;
    }

    public double calcularSalario(){
        return this.getSalarioMensal() - this.getDesconto();
    }

    public String toString(){
        return super.toString() + " Salário Mensal: " + this.getSalarioMensal() + " Desconto: " + this.getDesconto() + " Salário: " + this.calcularSalario();
    }

    
}
