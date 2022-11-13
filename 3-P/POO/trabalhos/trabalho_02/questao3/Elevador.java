package questao3;

public abstract class Elevador {
    
    private final int PESO_MAXIMO = 450;
    private final int PESSOAS_MAXIMO = 8;
    private final int ANDARES_MAXIMO = 11;
    
    private int pesoAtual;
    private int pessoasAtual;
    private int andarAtual;
    
    public Elevador(int pesoAtual, int pessoasAtual, int andarAtual) {
        this.setAndarAtual(andarAtual);
        this.setPessoasAtual(pessoasAtual);
        this.setPesoAtual(pesoAtual);
    }
    
    public abstract void sobe(int andarDestino);
    public abstract void desce(int andarDestino);
    public abstract boolean verificaPeso(); // verdadeiro se peso OK
    public abstract boolean verificaPessoas(); // 
    
    public void exibeMsgErroPessoas() {
      System.out.println("O elevador está cheio!");
    }
    
    public void exibeMsgErroPeso() {
      System.out.println("O elevador está pesado!");
    }
    
    public void exibeMsgErroDescer() {
      System.out.println("O elevador já está no térreo!");
    }
    
    public void exibeMsgErroSubir() {
      System.out.println("O elevador já está no último andar!");
    }
    
    public String toString() {
      Double pesoAtualPorcentagem = (pesoAtual * 100.0) / PESO_MAXIMO;
      Double pessoasAtualPorcentagem = (pessoasAtual * 100.0) / PESSOAS_MAXIMO;
      Double andarAtualPorcentagem = (andarAtual * 100.0) / ANDARES_MAXIMO;
  
      return "Capacidade máxima do elevador: " + PESSOAS_MAXIMO + " pessoas, " + PESO_MAXIMO + " kg e " + ANDARES_MAXIMO + " andares."
          + " Andar atual: " + andarAtual + " Pessoas atual: " + pessoasAtual + " Peso atual: " + pesoAtual 
          + " Pesoa em % alcançado: " + pesoAtualPorcentagem + " Total preenchido em % : " + pessoasAtualPorcentagem + " Andares percorridos em %: " + andarAtualPorcentagem;
    }

    public int getPesoAtual() {
      return this.pesoAtual;
    }

    public void setPesoAtual(int pesoAtual) {
      this.pesoAtual = pesoAtual;
    }

    public int getPessoasAtual() {
      return this.pessoasAtual;
    }

    public void setPessoasAtual(int pessoasAtual) {
      this.pessoasAtual = pessoasAtual;
    }

    public int getAndarAtual() {
      return this.andarAtual;
    }

    public void setAndarAtual(int andarAtual) {
      this.andarAtual = andarAtual;
    }

    public int getPESO_MAXIMO() {
      return this.PESO_MAXIMO;
    }

    public int getPESSOAS_MAXIMO() {
      return this.PESSOAS_MAXIMO;
    }

    public int getANDARES_MAXIMO() {
      return this.ANDARES_MAXIMO;
    }

}
