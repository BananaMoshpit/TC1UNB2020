/// \headerfile Declaração de entidades
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <stdexcept>
#include <string>
#include "dominios.h"

using namespace std;

/**
    @brief Construtor da classe, recebe múltiplos argumentos.
    @note Esta classe só aceitará instâncias de domínios não nulas e com valores válidos segundo método validar() do domínio.
    @throw invalid_argument No caso de parâmetros nulos ou valores inaceitáveis.
    @param[in] [CodigoDeAplicacao] Ponteiro para instância de domínio CodigoDeAplicacao
    @param[in] [ValorAplicacao] Ponteiro para instância de domínio ValorAplicacao
    @param[in] [Data] Ponteiro para instância de domínio Data
*/
class Aplicacao{
    private:
        CodigoDeAplicacao* codigo = NULL;
        ValorAplicacao* valor = NULL;
        Data* data = NULL;

    public:
 //construtores
    Aplicacao(){}
    Aplicacao(CodigoDeAplicacao*, ValorAplicacao*, Data*);

//getters    
    CodigoDeAplicacao* getCodigoDeAplicacao() const {return codigo;} ;
    ValorAplicacao* getValorAplicacao() const {return valor;} ;
    Data* getData() const {return data;} ;  

//setters
    void set(CodigoDeAplicacao*);
    void set(ValorAplicacao*);
    void set(Data*);

//métodos de validação
    void validar(CodigoDeAplicacao*);
    void validar(ValorAplicacao*);
    void validar(Data*);
//TODO add destructor

   // ~Aplicacao(){
   //     delete codigo;
   //     delete valor;
   //     delete data;
   // }

};
//TODO fix unmatching setter overloading patterns

//Entidade usuário

/**
    @brief Construtor da classe, recebe múltiplos argumentos.
    @note Esta classe só aceitará instâncias de domínios não nulas e com valores válidos segundo método validar() do domínio.
    @throw invalid_argument No caso de parâmetros nulos ou valores inaceitáveis.
    @param[in] [CodigoDeBanco] Ponteiro para instância de domínio CodigoDeBanco
    @param[in] [CodigoDeAgencia] Ponteiro para instância de domínio CodigoDeAgencia
    @param[in] [Numero] Ponteiro para instância de domínio Numero
*/
class Conta{
    private:
        CodigoDeBanco* banco = NULL;
        CodigoDeAgencia* agencia = NULL;
        Numero* numero = NULL;

    public:
//construtores
        Conta(){};
        Conta(CodigoDeBanco*, CodigoDeAgencia*, Numero*);

//getters
        CodigoDeBanco* getCodigoDeBanco() const { return banco;}
        CodigoDeAgencia* getCodigoDeAgencia() const { return agencia;}
        Numero* getNumero() const { return numero;}

//setters
        void set(CodigoDeBanco*);
        void set(CodigoDeAgencia*);
        void set(Numero*);

//métodos de validação
        void validar(CodigoDeBanco*);
        void validar(CodigoDeAgencia*);
        void validar(Numero*);


};


/**
    @brief Construtor da classe, recebe múltiplos argumentos.
    @note Esta classe só aceitará instâncias de domínios não nulas e com valores válidos segundo método validar() do domínio.
    @throw invalid_argument No caso de parâmetros nulos ou valores inaceitáveis.
    @param[in] [CodigoDeProduto] Ponteiro para instância de domínio CodigoDeProduto
    @param[in] [Classe] Ponteiro para instância de domínio Classe
    @param[in] [Emissor] Ponteiro para instância de domínio Emissor
    @param[in] [Prazo] Ponteiro para instância de domínio Prazo
    @param[in] [Data] Ponteiro para instância de domínio Data
    @param[in] [Taxa] Ponteiro para instância de domínio Taxa
    @param[in] [Horario] Ponteiro para instância de domínio Horario
    @param[in] [ValorMinimo] Ponteiro para instância de domínio ValorMinimo
*/
class Produto{
    private:
        CodigoDeProduto* codigo = NULL;
        Classe* classe = NULL;
        Emissor* emissor = NULL;
        Prazo* prazo = NULL;
        Data* vencimento = NULL;
        Taxa* taxa = NULL;
        Horario* horario = NULL;
        ValorMinimo* valor = NULL;

    public:
 //construtores
        Produto(){}
        Produto(CodigoDeProduto*, Classe*, Emissor*, Prazo*, Data*, Taxa*, Horario*, ValorMinimo*);

//getters 
        CodigoDeProduto* getCodigoDeProduto() const { return codigo;}
        Classe* getClasse() const { return classe;}
        Emissor* getEmissor() const { return emissor;}
        Prazo* getPrazo() const { return prazo;}
        Data* getData() const { return vencimento;}
        Taxa* getTaxa() const { return taxa;}
        Horario* getHorario() const { return horario;}
        ValorMinimo* getValorMinimo() const { return valor;}

//setters
        void set(CodigoDeProduto*);
        void set(Classe*);
        void set(Emissor*);
        void set(Prazo*);
        void set(Data*);
        void set(Taxa*);
        void set(Horario*);
        void set(ValorMinimo*);

//métodos de validação
        void validar(CodigoDeProduto*);
        void validar(Classe*);
        void validar(Emissor*);
        void validar(Prazo*);
        void validar(Data*);
        void validar(Taxa*);
        void validar(Horario*);
        void validar(ValorMinimo*);
//TODO add destructor
        
};

//Entidade usuário

/**
    @brief Construtor da classe, recebe múltiplos argumentos.
    @note Esta classe só aceitará instâncias de domínios não nulas e com valores válidos segundo método validar() do domínio.
    @throw invalid_argument No caso de parâmetros nulos ou valores inaceitáveis.
    @param[in] [Nome] Ponteiro para instância de domínio Nome
    @param[in] [Cpf] Ponteiro para instância de domínio Cpf
    @param[in] [Cep] Ponteiro para instância de domínio Cep
    @param[in] [Senha] Ponteiro para instância de domínio Senha
*/
class Usuario{
    private:
        Nome* nome = NULL;
        Cpf* cpf = NULL;
        Cep* cep = NULL;
        Endereco* endereco = NULL;
        Senha* senha = NULL;

    public:
//construtores
        Usuario(){};
        Usuario(Nome*, Cpf*, Cep*, Endereco*, Senha*);

        Nome* getNome() { return nome;}
        Cpf* getCpf() { return cpf;}
        Cep* getCep() { return cep;}
        Endereco* getEndereco() { return endereco;}
        Senha* getSenha() { return senha;}
        
        void set(Nome*); 
        void set(Cpf*); 
        void set(Cep*); 
        void set(Endereco*); 
        void set(Senha*); 

        void validar(Nome*);
        void validar(Cpf*);
        void validar(Cep*);
        void validar(Endereco*);
        void validar(Senha*);
};





#endif // ENTIDADES_H_INCLUDED