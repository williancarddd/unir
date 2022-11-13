import java.util.ArrayList;
import java.util.List;

public class Main {
	public static void main(String [] args) {
		Venda venda = new Venda();
		venda.getListaProdutos().add(new Produto("Datashow", 1500.00, 24));
		venda.getListaProdutos().add(new Produto("Placa de Video RTX 3090", 10500.00, 12));
		venda.getListaProdutos().add(new Produto("Cafeteira", 2000.00, 6));
		venda.getListaProdutos().add(new Produto("Geladeira Dual Side", 9000.00 , 24));
		venda.getListaProdutos().add(new Produto("Quadro smart", 40000 , 24));
		venda.getListaProdutos().add(new Produto("Notebook Core i9 1TB SSD", 20000 , 24));
		venda.getListaProdutos().add(new Produto("Servidor Linux", 17000 , 24));
		
		System.out.println(venda.toString());
		
//		List<MeuFloat> lista = new ArrayList<MeuFloat>();
//		lista.add(new MeuFloat((float) 9.8));
//		lista.add(new MeuFloat((float) 8.0));
//		lista.add(new MeuFloat((float) 8.5));
//		lista.add(new MeuFloat((float) 4.0));
//		
//		System.out.println("O tamanho da lista e: " 
//		+ lista.size());
//		
//		// Inicializa variavel
//		float soma = 0;
//		
//		for (int i=0; i< lista.size(); i++) {
//			System.out.println("\nID: " + i);
//			System.out.println("String: " 
//			+ lista.get(i).getNota());
//			// Realiza a soma
////			media += lista.get(i).getNota();
//			soma = soma + lista.get(i).getNota();
//			System.out.println(soma);
//		}
//		
//		float mediaFinal = soma/lista.size();
//		System.out.println("\nMedia Final: " 
//		+ mediaFinal);


	}
}
