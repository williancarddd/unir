import java.util.Date;


public class Cliente extends Endereco {

	/*
    * @author William Cardoso Barbosa
    * @see williancard123@gmail.com
    */
	private String nome = "Jonathan Ramos";
	private String telefone = "9 9999 9999";
	private String email = "jonathan@unir.br";
	private String documento = "999-999-999-99";
	@SuppressWarnings("deprecation")
	private Date dtNascimento = new Date(1991,9,29);

	/**
	 * Construtor vazio
	 */
	public Cliente() {
		super();
	}

	/**
	 * Construtor com params da Classe
	 * 
	 * @return
	 */
	public Cliente(String nome, String telefone, String email, String documento, Date dtNascimento) {
		this.nome = nome;
		this.telefone = telefone;
		this.documento = documento;
		this.dtNascimento = dtNascimento;
		this.email = email;
	}

	@Override
	public String toString() {
		String fromSuper = super.toString();
		return "\nnome=" + nome + "\ntelefone=" + telefone + "\nemail=" + email + "\ndocumento=" + documento
				+ ", \ndtNascimento=" + dtNascimento + "]" + fromSuper;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getDocumento() {
		return documento;
	}

	public void setDocumento(String documento) {
		this.documento = documento;
	}

	public Date getDtNascimento() {
		return dtNascimento;
	}

	public void setDtNascimento(Date dtNascimento) {
		this.dtNascimento = dtNascimento;
	}

}
