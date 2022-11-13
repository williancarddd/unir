
/**
 * Classe com as informações básicas do Produto
 * @author Jonathan Ramos
 *	@see jonathan@unir.br
 */
public class Produto {
	private String descricao = "Notebook";
	private double valor = 4000.00;
	private int garantia = 12;


	/**
	 * Construtor vazio
	 */
	public Produto() {

	}

	/**
	 * Construtor com params da classe
	 * @param descricao
	 * @param valor
	 * @param garantia
	 */
	public Produto(String descricao, double valor, int garantia) {
		this.descricao = descricao;
		this.valor = valor;
		this.garantia = garantia;
	}
	
	@Override
	public String toString() {
		return "\ndescricao=" + descricao + ",\nvalor=" 
	+ valor + "\ngarantia=" + garantia;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public int getGarantia() {
		return garantia;
	}

	public void setGarantia(int garantia) {
		this.garantia = garantia;
	}

}
