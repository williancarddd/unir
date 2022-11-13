import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/**
 * Classe venda que herda informações de 
 * Cliente e de Produto
 * @author Jonathan Ramos
 * @see jonathan@unir.br
 */
public class Venda extends Cliente {
	private Date data = new Date();
	private String tpPagamento = "IN CASH";
	// 1 produto só
	//private Produto prod = new Produto();
	// Para vários produtos
	private List<Produto> listaProdutos = new ArrayList<Produto>();

	public Venda() {

	}

	public Venda(Date data, String tpPagamento, List<Produto> lProd) {

	}
	
	/**
	 * Calcula o valor total da compra de TODOS os produtos
	 * @return
	 */
//	public double valorCompra() {
//		
//	}
	
	public void imprimirList() {
		if (listaProdutos.size() <= 0) {
			System.out.println("\nLista vazia!");
		}
		
		for (int i=1; i < listaProdutos.size(); i++) {
			System.out.println(
					String.format("ID: %d\nDescrição: %s"
							+ "\nValor: %,.2f", i, 
							this.listaProdutos.get(i).getDescricao(),
							this.listaProdutos.get(i).getValor()));
		}
	}

	public Date getData() {
		return data;
	}

	@Override
	public String toString() {
		this.imprimirList();
		return "\nVenda [data=" + data + ",\n tpPagamento=" + tpPagamento 
				+ super.toString();
//		+ cliente.toSring();
	
	}

	public void setData(Date data) {
		this.data = data;
	}

	public String getTpPagamento() {
		return tpPagamento;
	}

	public void setTpPagamento(String tpPagamento) {
		this.tpPagamento = tpPagamento;
	}

	public List<Produto> getListaProdutos() {
		return listaProdutos;
	}

	public void setListaProdutos(List<Produto> listaProdutos) {
		this.listaProdutos = listaProdutos;
	}

}
