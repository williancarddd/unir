public class Product {
    //mock dat a
    private String description = "Product description teste";
    private Double price = 10.0;
    private Boolean worranty = true;

    public Product() {

    }

    public Product (String description, Double price, Boolean worranty) {
        this.description = description;
        this.price = price;
        this.worranty = worranty;
    }

    /*
     * exibe informações apenas do produto
     */

    public String toString() {
        return "Description: " + this.description + " Price: " + this.price + " Warranty: " + this.worranty + "\n";
    }
    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public Double getPrice() {
        return price;
    }

    public void setPrice(Double price) {
        this.price = price;
    }

    public Boolean getWorranty() {
        return worranty;
    }

    public void setWorranty(Boolean worranty) {
        this.worranty = worranty;
    }
}
