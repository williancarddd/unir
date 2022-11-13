import java.util.Date;

public class Student extends Person {
    private String id_school = "123421324123";
    
    public Student(String name, String id, Date birthDate) {
        super(name, id, birthDate);
    }
    
    @Override
    public String toString() {
        return "Id School: " + this.id_school + " " + super.toString();
    }
     
    public String getId_school() {
        return this.id_school;
    }

    public void setId_school(String id_school) {
        this.id_school = id_school;
    }
}
