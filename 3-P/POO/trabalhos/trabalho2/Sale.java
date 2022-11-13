import java.util.ArrayList;
import java.util.Date;
import java.util.List;

//intermediary class


public class Sale extends Client {
    private Date saleDate;
    private String paymentType;
    private List<Product> products = new ArrayList<Product>();
    /*
     * A partir das tetativas de herança multipla, a qual o Java não tem suporte nativo
     * tendo em vista que ele não permite usar super() mais de uma vez e , também, pelo método 
     * da definição na mão , usando o this. , o qual ele não identifica como uma propriedade que
     * é da outra classe. Eu optei por fazer a classe receber um objeto Produto. 
     */
    public Sale(Date saleDate, String paymentType, List<Product> products) {
        this.saleDate = saleDate;
        this.paymentType = paymentType;
        this.products = products;
    }
    public Sale(Date saleDate, String paymentType,
    String name, String document, String wirelesPhone ,Date birthDate, String email, String country, String city, String state, String zipCode,
            List<Product> productss) {
        super(name, document, wirelesPhone, birthDate, email, country, city, state, zipCode);
        this.products = productss;
        this.saleDate = saleDate;
        this.paymentType = paymentType;
    }

    /**
     * Exibe informações apenas das vendas
     * exemplo
        * Sale Date: 2020-10-10 Payment Type: Credit Card
        * Name: João Document: 123.456.789-10 WirelesPhone: 11 99999-9999 Email:
    */
    public String toString() {
        return "Sale Date: " + this.saleDate + " Payment Type: " + this.paymentType + "\n" + this.toStringList() + super.toString();
    }
    public String toStringList() {
        String list = "";
        if(this.products.size() > 0 ) {
            for (Product product : products) {
                list += product.toString();
            }
        }
        return list;
    }
    public Date getSaleDate() {
        return saleDate;
    }

    public void setSaleDate(Date saleDate) {
        this.saleDate = saleDate;
    }

    public String getPaymentType() {
        return paymentType;
    }

    public void setPaymentType(String paymentType) {
        this.paymentType = paymentType;
    }

    public List<Product> getProduct() {
        return products;
    }

    public void setProduct(List<Product> product) {
        this.products = product;
    }   
}   

