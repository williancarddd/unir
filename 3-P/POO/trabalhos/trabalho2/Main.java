import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // mock data
        Client client = new Client();
        Product produto = new Product();
        Address adress1 = new Address();
        List<Product> products = new ArrayList<Product>();
        products.add(produto);
        products.add(produto);
        products.add(produto);
        products.add(produto);
        products.add(produto);

        Sale sales = new Sale(new Date(), "cc", products);
        System.out.println(adress1.toString());
        System.out.println(produto.toString());
        System.out.println(client.toString());
        System.out.println(sales.toString());

        double sum = 0;
        for (Product product : products) {
            sum += product.getPrice();
        }

        System.out.println("Total: " + sum);

    }
}