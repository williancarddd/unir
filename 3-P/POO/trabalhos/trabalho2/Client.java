import java.util.Date;

public class Client extends Address {
    //mock data
    private String name = "João";
    private String wirelesPhone = "11 99999-9999";
    private Date birthDatee = new Date();
    private String email = "wiilliancard123.com";
    private String country = "Brasil";
    private String city = "São Paulo";
    private String state = "São Paulo";
    private String zipCode = "12345-678";
    private String number = "123";
    private String more = "apto 123";
    private String document = "123.456.789-00";
    
    public Client() {
    }

    public Client(String name, String document, String wirelesPhone ,Date birthDate, String email, String country, String city, String state, String zipCode) {
        super(country, city, state, zipCode);
        this.name = name;
        this.document = document;
        this.wirelesPhone = wirelesPhone;
        this.email = email;
        this.birthDatee = birthDate;
    }
    /*
     * exbie informações do cliente e do endereço
     */
    public String toString() {
        return  "Name: "  + this.name +  " Document: "  +
         this.document +  " WirelesPhone: "  + this.wirelesPhone + 
          " Email: "  + this.email +  " BirthDate: "  + this.birthDatee + "\n" + super.toString();
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDocument() {
        return document;
    }

    public void setDocument(String document) {
        this.document = document;
    }

    public String getWirelesPhone() {
        return wirelesPhone;
    }

    public void setWirelesPhone(String wirelesPhone) {
        this.wirelesPhone = wirelesPhone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public Date getBirthDatee() {
        return birthDatee;
    }

    public void setBirthDatee(Date birthDatee) {
        this.birthDatee = birthDatee;
    }
    
}
