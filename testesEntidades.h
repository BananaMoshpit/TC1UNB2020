/// \headerfile Declaração de entidades
#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include<stdexcept>
#include<string>
#include"entidades.h"
#include"testes.h"
#include"testesEntidades.h"
using namespace std;


class TUAplicacao{

    Aplicacao* entidade = NULL;

    CodigoDeAplicacao* codigo = NULL;
    ValorAplicacao* valor = NULL;
    Data* data = NULL;

    const static int codigo_valido = 10000;
    const static int valor_valido = 1000000;
    const  string data_valido = "12/10/2024";

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool sucesso = true;

    bool run();
};

class TUConta{

    Conta* entidade;

    CodigoDeBanco* banco;
    CodigoDeAgencia* agencia;
    Numero* numero;

    const static int banco_valido = 104;
    const static int agencia_valido = 99;
    const  string numero_valido = "0238069-2";

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool sucesso = true;

    bool run();
};

class TUProduto{

    Produto* entidade = NULL;

    CodigoDeProduto* codigo = NULL;
    Classe* classe = NULL;
    Emissor* emissor = NULL;
    Prazo* prazo = NULL;
    Data* vencimento = NULL;
    Taxa* taxa = NULL;
    Horario* horario = NULL;
    ValorMinimo* valor = NULL;

    const static int codigo_valido = 100;
    const  string classe_valido = "CDB";
    const  string emissor_valido = "Emissor-VALIDO ";
    const static int prazo_valido = 6;
    const  string vencimento_valido = "22/12/2023";
    const static int taxa_valido = 5;
    const  string horario_valido = "15:00";
    const static int valor_valido = 1000;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool sucesso = true;

    bool run();
};

class TUUsuario{

    Usuario* entidade = NULL;

    Nome* nome = NULL;
    Endereco* endereco = NULL;
    Cpf* cpf = NULL;
    Cep* cep = NULL;
    Senha* senha = NULL;

    const string nome_valido = "Nome Valido";
    const string cpf_valido = "1-1.444.777-35";
    const int cep_valido = 70000000;
    const  static int senha_valido = 123456;
    const string endereco_valido ="Endereco Valido" ;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool sucesso = true;

    bool run();
};


#endif // TESTES_ENTIDADES_H_INCLUDED