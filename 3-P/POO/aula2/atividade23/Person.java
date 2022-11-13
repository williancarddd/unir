import java.util.Date;

public class Person {
   private String name, id;
   private Date birthDate;

   public  Person() {}

   public Person(String name, String id, Date birthDate) {
    this.name = name;
      this.id = id;
      this.birthDate = birthDate;

   }

   @Override
   public String toString() {
    return "Name: " + name + ", Id: " + id + ", BirthDate: " + birthDate;
   }

   public String getName() {
      return name;
   }

   public void setName(String name) {
      this.name = name;
   }

   public String getId() {
      return id;
   }

   public void setId(String id) {
      this.id = id;
   }

   public Date getBirthDate() {
      return birthDate;
   }

   public void setBirthDate(Date birthDate) {
    this.birthDate = birthDate;
   }

  }