/// \headerfile Declaração de domínios
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include<string>

using namespace std;

/// \class Cep 
/// \brief Código identificador CEP utilizado no cadastramento e autenticação de usuário. Restrito às cidades de SP,RJ,BSB,Salvador e Fortaleza 
/// \details Aceita apenas os seguintes valores e nenhum valor é armazenado fora dessas restrições:
/// - 1000000 a 5999999 e 8000000 a 8499999 (São Paulo)
/// - 0000000 a 26600999 (Rio de Janeiro)
/// - 70000000 a 70999999 (Brasília)
/// - 40000000 a 41999999 (Salvador)
/// - 60000000 a 60999999 (Fortaleza)
///
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class Cep{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

/// \class  Classe 
/// \brief  Código identificador de classe utilizado para o usuário selecionar específica do produto de investimento. Possui 5 opções.
/// \details Classes aceitas:
/// - CDB
/// - LCA
/// - LCI
/// - LF
/// - LC
///
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class Classe {

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};

/// \class CodigoDeAgencia
/// \brief  Código identificador de agência utilizado no cadastramento e autenticação de usuário.
/// \details Contém um código formato XXXX onde:
/// - cada X é dígito (0 – 9)
/// - código não pode ser 0000
///
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 

class CodigoDeAgencia{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

/// \class CodigoDeAplicacao
/// \brief  Código identificador de aplicação utilizado para o usuário selecionar aplicação específica do produto de investimento
/// \details Contém um código formato XXXXX onde: 
/// - cada X é dígito (0 – 9)
/// - o código não pode 00000
///
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class CodigoDeAplicacao{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

/// \class CodigoDeBanco
/// \brief Código identificador de um dos cinco maiores bancos o brasil. Utilizado na conta corrente para cadastramento e autenticação de usuário
/// \details Aceita apenas os seguintes valores:
/// - 341(Banco Itaú Unibanco)
/// - 001(Banco do Brasil)
/// - 237(Banco Bradesco)
/// - 104(Caixa Econômica Federal)
/// - 033(Banco Santander Brasil):
///
/// Lança exceção em caso de argumentos inválidos
/// Referências: https://pt.wikipedia.org/wiki/Lista_dos_maiores_bancos_do_Brasil https://www.creditooudebito.com.br/codigos-dos-bancos-brasileiros/
/// \throw invalid_argument 
class CodigoDeBanco{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

/// \class CodigoDeProduto
/// \brief  Código identificador de Produto utilizado para o usuário selecionar produto de investimento,
/// \details Contém um código no formato XXX onde:
/// - cada X é dígito (0 – 9) 
/// - código não pode ser 000
///
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class CodigoDeProduto{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

/// \class Cpf  
/// \brief Contém código identificador de CPF utilizado no cadastramento e autenticação de usuário. Possui algorítmo de checagem
/// \details Formato XXX.XXX.XXX-XX onde:
/// - cada X é dígito (0 – 9) e
/// - cada CPF inclui dígitos verificadores após o traço
///
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
/// \sa referência do algorítmo de checagem: http://www.macoratti.net/alg_cpf.htm
 class Cpf{
private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};



/// \class Data
/// \brief Código de informação de data vencimento utilizado na formação de um produto. Possui algorítmo de checagem.
/// \details Entende anos bissextos. Data no formato DD/MM/AAAA onde:
/// - DD é número de 1 e 31
/// - MM é número de 1 e 12
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class Data{

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};

/// \class Horario
/// \brief Contém código de informação quanto ao Horiario horário limite para aplicação no produto de investimento utilizado na formação de um produto.
/// \details Formato XY:ZW para representar horário entre:
/// - 13:00 e
/// - 17:00 horas
///
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
class Horario{

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};


/// \class Senha
/// \brief Contém código identificador de senha utilizada para cadastramento e autenticação de usuário.
/// \details Formato XXXXXX onde:
/// - cada X é dígito (0 – 9)
/// - não há dígito repetido
///
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
class Senha{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

/// \class Emissor
/// \brief Contém código de informação quanto à emissora do produto de investimento, utilizado na formação de um produto. 
/// \details Texto composto por 5 a 30 caracteres onde:
/// - cada caracter pode ser letra (A-Z ou a-z) ou
/// - dígito (0 – 9) ou
/// - caracter -, ou
/// - ponto ou espaço ou
/// - Apenas letras e dígitos podem estar em sequência.
/// - Em termo cujo primeiro caracter é letra, a mesma é maiúscula.
///        
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
class Emissor{

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};

/// \class Endereco
/// \brief Contém código de informação quanto ao endereço físico utilizado para cadastramento e autenticação de usuário.
/// \details Texto composto por 5 a 20 caracteres onde:
/// - cada caracter pode ser letra (A-Z ou a-z) ou
/// - dígito (0 – 9) ou
/// - ponto ou espaço ou
/// - Apenas letras e dígitos podem estar em sequência.
/// - Em termo cujo primeiro caracter é letra, a mesma é maiúscula.
///        
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
class Endereco{

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};



/// \class Nome
/// \brief Contém código de informação quanto à duração mensal do prazo de aplicação do produto utilizado na formação de um produto
/// \details Texto composto por 5 a 30 caracteres onde:
/// - cada caracter pode ser letra (A-Z ou a-z) ouespaço
/// - há pelo menos 5 letras
/// - não há espaços em sequência
/// - primeira letra de cada termo é letra maiúscula
///        
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
class Nome{

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};

/// \class Numero
/// \brief Contém código de informação quanto à duração mensal do prazo de aplicação do produto utilizado na formação de um produto. 
/// \details Contém um código formato XXXXXX-Y onde:
/// - X é dígito (0 – 9) 
/// - Y é dígito verificador 
///        
/// Lança exceção em caso de argumentos inválidos
///
/// \throw invalid_argument 
/// \sa Um algorítmo análogo ao do banco Bradesco foi utilizado:
/// http://177.153.6.25/ercompany.com.br/boleto/laravel-boleto-master/manuais/Regras%20Validacao%20Conta%20Corrente%20VI_EPS.pdf      

class Numero{

private:

    string dado;
    void validar(string );

public:

    void setDado(string );

    string getDado() const {
        return dado;
    }
};

/// \class Prazo
/// \brief Contém código de informação quanto à duração mensal do prazo de aplicação do produto utilizado na formação de um produto. 
/// \details Aceita apenas os valores:
/// - 6:         
/// - 12: 
/// - 18
/// - 24:  
/// - 30:     
/// - 36:    
/// - 42:      
/// - 48:      
/// - 54:        
/// - 60:         
/// - 66:        
/// - 72:
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class Prazo{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};


/// \class  Declaração da classe Taxa
/// \brief Referenta à taxa de remuneração (% ao ano) do produto de investimento, utilizado na formação de um produto. 
/// \details Aceita apenas os valores:
/// - de 0       
/// - a 200 
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument
class Taxa{

private:

    int valor;
    void validar(float );

public:

    void setValor(float );

    int getValor() const {
        return valor;
    }
};

/// \class ValorAplicacao 
/// \brief O valor do investimento em R$ do usuário, utilizado na formação de um produto personalizado. 
/// \details Aceita apenas os valores:
/// - de 0       
/// - a 1000000 
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument
class ValorAplicacao{

private:

    float valor;
    void validar(float );

public:

    void setValor(float );

    float getValor() const {
        return valor;
    }
};

/// \class ValorMinimo
/// \brief Valor mínimo de investimento em R$, utilizado nos produtos padróes disponíveis. Possui 4 opções.
/// \details Valores aceitos:
/// - 1.000,00
/// - 5.000,00
/// - 10.000
/// - 50.000,00
///
/// Lança exceção em caso de argumentos inválidos
/// \throw invalid_argument 
class ValorMinimo{

private:

    int valor;
    void validar(int );

public:

    void setValor(int );

    int getValor() const {
        return valor;
    }
};

#endif // DOMINIOS_H_INCLUDED
