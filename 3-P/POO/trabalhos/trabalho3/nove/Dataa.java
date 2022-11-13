

public class Dataa {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  private int dia = 20;
  private int mes = 10;
  private int ano = 2020;
  public Dataa(){}
  /*
   * a classe faz verificações em cascata a partir do ano, depois do mês e por fim do dia.
   * Verifica se minha data vem antes da data passada por parâmetro.
   */
  public boolean vemAntes(int dia, int mes, int ano) {
    if (this.ano < ano) {
      return true;
    } else if (this.ano == ano) {
      if (this.mes < mes) {
        return true;
      } else if (this.mes == mes) {
        if (this.dia < dia) {
          return true;
        }
      }
    }
    return false;
  }

  int getDia() {
    return dia;
  }
  void setDia(int dia) {
    // validate dia
    if (dia < 1 || dia > 31) {
      System.out.println("Dia inválido");
      return;
    }
    this.dia = dia;
  }
  int getMes() {
    return mes;
  }
  void setMes(int mes) {
    // validate mes
    if (mes < 1 || mes > 12) {
      System.out.println("Mês inválido");
      return;
    }
    this.mes = mes;
  }
  int getAno() {
    return ano;
  }
  void setAno(int ano) {
    // validate ano
    if (ano < 1) {
      System.out.println("Ano inválido");
      return;
    }
    this.ano = ano;
  }
}
