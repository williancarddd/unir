import java.util.Date;

public class Discent extends Person {
    private String class_module = "POO";
    public Discent(String name, String id, Date birthDate) {
        super(name, id, birthDate);
    }

    @Override
    public String toString() {
        return "Class module: " + this.class_module + ", " + super.toString();
    }

    public String getClass_module() {
        return this.class_module;
    }

    public void setClass_module(String class_module) {
        this.class_module = class_module;
    }

}
