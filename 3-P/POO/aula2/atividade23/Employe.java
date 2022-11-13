import java.util.Date;

public class Employe extends Person{
    private double paymentMoutly = 1200;
    public Employe(String name, String id, Date BirthDate) {
        super(name, id, BirthDate);
    }

    @Override
    public String toString() {
        return "PaymentMoutly: " + this.paymentMoutly +"," + super.toString();
    }
    public double getPaymentMoutly() {
        return paymentMoutly;
    }

    public void setPaymentMoutly(double paymentMoutly) {
        this.paymentMoutly = paymentMoutly;
    }
}