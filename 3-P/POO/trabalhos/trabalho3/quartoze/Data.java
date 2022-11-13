public class Data {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
    
  private int dia;
  private int mes;
  private int ano;

  public Data(int dia, int mes, int ano) {
    if (dia > 0 && dia <= 31 && mes > 0 && mes <= 12 && ano > 0) {
      this.dia = dia;
      this.mes = mes;
      this.ano = ano;
    } else {
      this.dia = 1;
      this.mes = 1;
      this.ano = 1;
    }
  }

  public int compara(Data data) {
    if (this.ano > data.getAno()) {
      return 1;
    } else if (this.ano < data.getAno()) {
      return -1;
    } else {
      if (this.mes > data.getMes()) {
        return 1;
      } else if (this.mes < data.getMes()) {
        return -1;
      } else {
        if (this.dia > data.getDia()) {
          return 1;
        } else if (this.dia < data.getDia()) {
          return -1;
        } else {
          return 0;
        }
      }
    }
  }

  public int getDia() {
    return dia;
  }
  
  public int getMes() {
    return mes;
  }

  public int getAno() {
    return ano;
  }

  public boolean isBissexto() {
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
      return true;
    } else {
      return false;
    }
  }

  public String getMesExtenso() {
    String mesExtenso = "";
    switch (mes) {
      case 1:
        mesExtenso = "Janeiro";
        break;
      case 2:
        mesExtenso = "Fevereiro";
        break;
      case 3:
        mesExtenso = "Março";
        break;
      case 4:
        mesExtenso = "Abril";
        break;
      case 5:
        mesExtenso = "Maio";
        break;
      case 6:
        mesExtenso = "Junho";
        break;
      case 7:
        mesExtenso = "Julho";
        break;
      case 8:
        mesExtenso = "Agosto";
        break;
      case 9:
        mesExtenso = "Setembro";
        break;
      case 10:
        mesExtenso = "Outubro";
        break;
      case 11:
        mesExtenso = "Novembro";
        break;
      case 12:
        mesExtenso = "Dezembro";
        break;
    }
    return mesExtenso;
  }
  
  public Data clone() {
    return new Data(this.dia, this.mes, this.ano);
  }

}
