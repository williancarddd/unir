import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Venda extends Cliente {

	/*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */

	private List<Integer> assentos = new ArrayList<Integer>();
	private List<Passagem> passagens = new ArrayList<Passagem>();
	private Date data;
	private double valor = 0;
	private double valorPassagemFix = 1000;
	private List<Integer> assentosDisponiveis = new ArrayList<Integer>();

	
	public Venda(Date data, Cliente cliente) {
		super(cliente.getNome(), cliente.getTelefone(), cliente.getEmail(), cliente.getDocumento(), cliente.getDtNascimento());
		this.data = data;
	}

	public List<Passagem> getPassagens() {
		return passagens;
	}

	public void setPassagens(List<Passagem> passagens) {
		this.passagens = passagens;
	}

	public Date getData() {
		return data;
	}

	public void setData(Date data) {
		this.data = data;
	}

	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}


	public List<Integer> getAssentosDisponiveis() {
		return assentosDisponiveis;
	}

	public void setAssentosDisponiveis(List<Integer> assentosDisponiveis) {
		this.assentosDisponiveis = assentosDisponiveis;
	}

	public  List<Integer> getAssentos() {
		return assentos;
	}

	public void setAssentos(List<Integer> assentos) {
		this.assentos = assentos;
	}

	public void addPassagem(Passagem passagem) {
		this.passagens.add(passagem);
		this.valor += passagem.getValor();
	}
	
	public void addAssento(int assento) {
		this.assentos.add(assento);
	}

	public void addAssentoDisponivel(int assento) {
		this.assentosDisponiveis.add(assento);
	}

	public void removeAssentoDisponivel(int assento) {
		this.assentosDisponiveis.remove(assento);
	}

	public void removeAssento(int assento) {
		this.assentos.remove(assento);
	}

	public void removePassagem(Passagem passagem) {
		this.passagens.remove(passagem);
		this.valor -= passagem.getValor();
	}

	public double getValorPassagemFix() {
		return valorPassagemFix;
	}

	public void setValorPassagemFix(double valorPassagemFix) {
		this.valorPassagemFix = valorPassagemFix;
	}

	public void calcValorPassagem() {
		double valorTotal = 0;
		double taxa = 500;

		for (Passagem passagem : passagens) {
			@SuppressWarnings("deprecation")
			int hora = passagem.getData().getHours();
			if (hora>= 8 && hora <= 18) {
				valorTotal += valorPassagemFix + taxa;
			} else {
				valorTotal += valorPassagemFix;
			}
		}

		double valorWithRandom = valorTotal + (valorTotal * (Math.random() * 10));

		this.valor = valorWithRandom;
	}

	@Override
	public String toString() {
		return "Venda [assentos=" + assentos + ", passagens=" + passagens + ", data=" + data + ", valor=" + valor
				+ ", valorPassagemFix=" + valorPassagemFix + ", assentosDisponiveis=" + assentosDisponiveis + "]";
	}


}
