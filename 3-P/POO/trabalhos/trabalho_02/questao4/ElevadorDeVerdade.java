public class ElevadorDeVerdade  extends Elevador {
      
    public ElevadorDeVerdade(int pesoAtual, int pessoasAtual, int andarAtual) {
        super(pesoAtual, pessoasAtual, andarAtual);
    }
    
    public boolean verificaPeso() {
        return this.getPesoAtual() <= this.getPESO_MAXIMO();
    }

    public boolean verificaPessoas() {
        return this.getPessoasAtual() <= this.getPESSOAS_MAXIMO();
    }

    public void sobe(int andarDestino) {
        if (this.verificaPeso() && this.verificaPessoas()) {
            if (this.getAndarAtual() < this.getANDARES_MAXIMO()) {
                this.setAndarAtual(andarDestino);
            } else {
                this.exibeMsgErroSubir();
            }
        } else {
            if (!this.verificaPeso()) {
                this.exibeMsgErroPeso();
            } else {
                this.exibeMsgErroPessoas();
            }
        }
    }

    public void desce(int andarDestino) {
        if (this.verificaPeso() && this.verificaPessoas()) {
            if (this.getAndarAtual() > 0) {
                this.setAndarAtual(andarDestino);
            } else {
                this.exibeMsgErroDescer();
            }
        } else {
            if (!this.verificaPeso()) {
                this.exibeMsgErroPeso();
            } else {
                this.exibeMsgErroPessoas();
            }
        }
    }

    public void adicionaPeso(int peso) {
        if (this.getPesoAtual() + peso > this.getPESO_MAXIMO()) {
            this.exibeMsgErroPeso();
        } else {
            this.setPesoAtual(this.getPesoAtual() + peso);
        }
    } 

    public void removePeso(int peso) {
        if (this.getPesoAtual() - peso < 0) {
            this.exibeMsgErroPeso();
        } else {
            this.setPesoAtual(this.getPesoAtual() - peso);
        }
    }

    public void adicionaPessoa(int pessoa) {
        if (this.getPessoasAtual() + pessoa > this.getPESSOAS_MAXIMO()) {
            this.exibeMsgErroPessoas();
        } else {
            this.setPessoasAtual(this.getPessoasAtual() + pessoa);
        }
    }

    public void removePessoa(int pessoa) {
        if (this.getPessoasAtual() - pessoa < 0) {
            this.exibeMsgErroPessoas();
        } else {
            this.setPessoasAtual(this.getPessoasAtual() - pessoa);
        }
    }
}
