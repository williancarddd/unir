import java.util.Date;
import java.util.Date.*;

public class Passagem {

  /*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
  
  private String assento;
  private Date data;
  private double valor;
  private String origem;
  private String destino;
  private  Cliente cliente;

  public Passagem(String assento, Date data, double valor, String origem, String destino, Cliente cliente) {
    this.assento = assento;
    this.data = data;
    this.valor = valor;
    this.origem = origem;
    this.destino = destino;
    this.cliente = cliente;
  }

  public String getAssento() {
    return assento;
  }
  
  public void setAssento(String assento) {
    this.assento = assento;
  }

  public Date getData() {
    return data;
  }

  public void setData(Date data) {
    this.data = data;
  }

  public double getValor() {
    return valor;
  }

  public void setValor(double valor) {
    this.valor = valor;
  }

  public String getOrigem() {
    return origem;
  }

  public void setOrigem(String origem) {
    this.origem = origem;
  }

  public String getDestino() {
    return destino;
  }

  public void setDestino(String destino) {
    this.destino = destino;
  }

  public Cliente getCliente() {
    return cliente;
  }

  public void setCliente(Cliente cliente) {
    this.cliente = cliente;
  }

  @Override
  public String toString() {
    return "Passagem [assento=" + assento + ", cliente=" + cliente + ", data=" + data + ", destino=" + destino
        + ", origem=" + origem + ", valor=" + valor + "]";
  }


  

}
