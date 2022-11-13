public class Address {
    //mock data
    private String country = "Brasil";
    private String city = "São Paulo";
    private String state = "São Paulo";
    private String zipCode = "12345-678";
    private String number = "123";
    private String more = "apto 123";

    public Address() {
    }
    
    public Address(String country, String city, String state, String zipCode) {
        this.country = country;
        this.city = city;
        this.state = state;
        this.zipCode = zipCode;
    }

    /*
     * exibe informações do endereço
     */
    public String toString(){
        return  "Country: "  + this.country +  " City: "  + this.city +  " State: "  + this.state +  " ZipCode: "  + this.zipCode + "\n";
    }

    public String getCountry() {
        return country;
    }

    public void setCountry(String country) {
        this.country = country;
    }

    public String getCity() {
        return city;
    }

    public void setCity(String city) {
        this.city = city;
    }

    public String getState() {
        return state;
    }

    public void setState(String state) {
        this.state = state;
    }

    public String getZipCode() {
        return zipCode;
    }

    public void setZipCode(String zipCode) {
        this.zipCode = zipCode;
    }

    public String getNumber() {
        return number;
    }

    public void setNumber(String number) {
        this.number = number;
    }

    public String getMore() {
        return more;
    }

    public void setMore(String more) {
        this.more = more;
    }


}
