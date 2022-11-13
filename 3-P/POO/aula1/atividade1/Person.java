public class Person {
  private String name;
  private int age;
  private double payMonthly;
  private double payAnually;
  
  public Person() {}
  public Person(int age) {
    this.age = age;
    this.validateAge();
  }
  public Person(String name){
    this.name = name;
  }
  public Person(String name, int age) {
  	this.name = name;
    this.age = age;
  }
  
  public void showPerson() {
  	System.out.print(String.format("Name: %s\n", this.name));
    System.out.println(String.format("Age: %d", this.age));
    System.out.println("\n");
  }


  private void validateAge() {
    if(this.age >= 18) {
      System.out.println(String.format("%s é maior de idade", this.name));
    } else {
      System.out.println("menor de idade");
    }
  }

  public String getName() {
    return this.name;
  }
  
  public void setName(String name) {
    this.name = name;
  }

  public int getAge() {
    return this.age;
  }

  public void setAge(int age) {
    this.age = age;
  }

  public void setPayMonthly(double pay) {
    this.payMonthly = pay;
    this.setPayAnually(pay);
  }

  public double getPayMonthly() {
    return this.payMonthly;
  }
  private void setPayAnually(double pay) {
    this.payAnually = pay*12;
  }

  public double getPayAnually() {
    return this.payAnually;
  }
}
