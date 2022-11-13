public class JurosComposto {
    private double capital;
    private double taxa;
    private int tempo;

    public JurosComposto(double capital, double taxa, int tempo) {
        this.capital = capital;
        this.taxa = taxa;
        this.tempo = tempo;
    }

    public double calcularJuros() {
        return capital * Math.pow(1 + taxa, tempo);
    }

    public double calcularMontante() {
        return calcularJuros() - capital;
    }

    public double calcularRendimento() {
        return calcularMontante() / capital;
    }

    public double getCapital() {
        return capital;
    }

    public void setCapital(double capital) {
        this.capital = capital;
    }

    public double getTaxa() {
        return taxa;
    }

    public void setTaxa(double taxa) {
        this.taxa = taxa;
    }


    public int getTempo() {
        return tempo;
    }

    public void setTempo(int tempo) {
        this.tempo = tempo;
    }

    @Override
    public String toString() {
        return "JurosComposto{" +
                "capital=" + capital +
                ", taxa=" + taxa +
                ", tempo=" + tempo +
                '}';
    }
}