class Main {
    public static void main(String[] args) {
      CalcularJurps cj = new CalcularJurps();
      System.out.println("Juros Simples: " + cj.calcularJurosSimples(1000));
      System.out.println("Juros Simples: " + cj.calcularJurosSimples(1000, 10));
      System.out.println("Juros Composto: " + cj.calcularJurosComposto(1000, 10));

    }
}