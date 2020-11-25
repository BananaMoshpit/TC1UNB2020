// Declaração de classes de testes de unidade do domínio
// assumidamente verdadeiras-- valor sucesso mudado apenas em falhas

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include"dominios.h"

// Teste da unidade Cep: valor deve ser um cep e pertencer às cidades listadas no guia de trabalho

class TUCep {

private:

    Cep* classe;

    const static int VALOR_VALIDO   = 70000000 ;
    const static int VALOR_INVALIDO = 1 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUClasse {

private:

    Classe* classe;

    const  string VALOR_VALIDO   = "CDB" ;
    const  string VALOR_INVALIDO = "cdb" ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUData {

private:

    Data* classe;

     string VALOR_VALIDO   = "29/02/2020" ;
     string VALOR_INVALIDO = "29/02/2021" ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    string get_valido() {return VALOR_VALIDO; }

public:
    bool run();
};

class TUEmissor {

private:

    Emissor* classe;

     string VALOR_VALIDO   = "Emissor-VALIDO " ;
     string VALOR_INVALIDO = "Emissor- INVALIDO " ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUEndereco {

private:

    Endereco* classe;

     string VALOR_VALIDO   = "Enderecodo " ;
     string VALOR_INVALIDO = "Endereço  nvalido " ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};


class TUHorario {

private:

    Horario* classe;

     string VALOR_VALIDO   = "1a:45" ;
     string VALOR_INVALIDO = "18:45" ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUNome {

private:

    Nome* classe;

     string VALOR_VALIDO   = "Va Li Do " ;
     string VALOR_INVALIDO = "I N V" ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUCpf {

private:

    Cpf* classe;

     string VALOR_VALIDO   = "1-1.444.777-35" ;
     string VALOR_INVALIDO = "111.444.777-05" ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};
class TUNumero {

private:

    Numero* classe;

     string VALOR_VALIDO   = "0238069-2" ;
     string VALOR_INVALIDO = "1234567-2" ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};
class TUSenha {

private:

    Senha* classe;

     int VALOR_VALIDO   = 123456 ;
     int VALOR_INVALIDO = 123455 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUCodigoDeAgencia {

private:

    CodigoDeAgencia* classe;

     int VALOR_VALIDO   = 1000 ;
     int VALOR_INVALIDO = 0000 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};


class TUCodigoDeAplicacao {

private:

    CodigoDeAplicacao* classe;

     int VALOR_VALIDO   = 1000 ;
     int VALOR_INVALIDO = 0000 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    int get_valido() { return VALOR_VALIDO; }

public:
    bool run();
};

class TUCodigoDeBanco {

private:

    CodigoDeBanco* classe;

     int VALOR_VALIDO   = 001 ;
     int VALOR_INVALIDO = 0000 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUCodigoDeProduto {

private:

    CodigoDeProduto* classe;

     int VALOR_VALIDO   = 001 ;
     int VALOR_INVALIDO = 0000 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUPrazo {

private:

    Prazo* classe;

     int VALOR_VALIDO   = 6 ;
     int VALOR_INVALIDO = 5 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUTaxa {

private:

    Taxa* classe;

     int VALOR_VALIDO   = 100 ;
     int VALOR_INVALIDO = 300 ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

// Teste de unidade ValorAplicacao
class TUValorAplicacao {

private:

    ValorAplicacao* classe;

     float VALOR_VALIDO   = 100.2 ;
     float VALOR_INVALIDO = 1000001  ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    int get_valido() { return VALOR_VALIDO; }

public:
    bool run();
};

// Teste de unidade ValorMinimo

class TUValorMinimo {

private:

    ValorMinimo* classe;

     int VALOR_VALIDO   = 1000.00 ;
     int VALOR_INVALIDO = 1000001  ;

    bool sucesso = true;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

#endif // TESTES_H_INCLUDED
