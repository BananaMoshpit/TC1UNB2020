#include"testes.h"

/// Teste de unidade CEP SUCESSO

void TUCep::setUp(){
  
    classe = new Cep;
}

void TUCep::tearDown(){
  
    delete classe;
}

void TUCep::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUCep::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Classe SUCESSO

void TUClasse::setUp(){
  
    classe = new Classe;
}

void TUClasse::tearDown(){
  
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUClasse::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

///Teste de unidade Código de Agência FALHA


void TUCodigoDeAgencia::setUp(){
  
    classe = new CodigoDeAgencia;
}

void TUCodigoDeAgencia::tearDown(){
  
    delete classe;
}

void TUCodigoDeAgencia::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUCodigoDeAgencia::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUCodigoDeAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}


/// Teste de unidade Emissor FALHA


void TUEmissor::setUp(){
  
    classe = new Emissor;
}

void TUEmissor::tearDown(){
  
    delete classe;
}

void TUEmissor::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUEmissor::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUEmissor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Endereco SUCESSO


void TUEndereco::setUp(){
  
    classe = new Endereco;
}

void TUEndereco::tearDown(){
  
    delete classe;
}

void TUEndereco::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUEndereco::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Nome SUCESSO


void TUNome::setUp(){
  
    classe = new Nome;
}

void TUNome::tearDown(){
  
    delete classe;
}

void TUNome::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUNome::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Cpf SUCESSO


void TUCpf::setUp(){
  
    classe = new Cpf;
}

void TUCpf::tearDown(){
  
    delete classe;
}

void TUCpf::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUCpf::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUCpf::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Numero SUCESSO


void TUNumero::setUp(){
  
    classe = new Numero;
}

void TUNumero::tearDown(){
  
    delete classe;
}

void TUNumero::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUNumero::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Data SUCESSO


void TUData::setUp(){
  
    classe = new Data;
}

void TUData::tearDown(){
  
    delete classe;
}

void TUData::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUData::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Horario SUCESSO


void TUHorario::setUp(){
  
    classe = new Horario;
}

void TUHorario::tearDown(){
  
    delete classe;
}

void TUHorario::testarCenarioSucesso(){
    
    try{
        classe->setDado(VALOR_VALIDO);
        if (classe->getDado() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUHorario::testarCenarioFalha(){
    
    try{
        classe->setDado(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getDado() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Código de Aplicação SUCESSO

void TUCodigoDeAplicacao::setUp(){
  
    classe = new CodigoDeAplicacao;
}

void TUCodigoDeAplicacao::tearDown(){
  
    delete classe;
}

void TUCodigoDeAplicacao::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUCodigoDeAplicacao::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUCodigoDeAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Código de Aplicação SUCESSO

void TUSenha::setUp(){
  
    classe = new Senha;
}

void TUSenha::tearDown(){
  
    delete classe;
}

void TUSenha::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUSenha::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Código de Banco SUCESSO

void TUCodigoDeBanco::setUp(){
  
    classe = new CodigoDeBanco;
}

void TUCodigoDeBanco::tearDown(){
  
    delete classe;
}

void TUCodigoDeBanco::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUCodigoDeBanco::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUCodigoDeBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Código de Produto SUCESSO

void TUCodigoDeProduto::setUp(){
  
    classe = new CodigoDeProduto;
}

void TUCodigoDeProduto::tearDown(){
  
    delete classe;
}

void TUCodigoDeProduto::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUCodigoDeProduto::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUCodigoDeProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}


/// Teste de unidade Código de Prazo SUCESSO

void TUPrazo::setUp(){
  
    classe = new Prazo;
}

void TUPrazo::tearDown(){
  
    delete classe;
}

void TUPrazo::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUPrazo::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUPrazo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade Código de Taxa SUCESSO

void TUTaxa::setUp(){
  
    classe = new Taxa;
}

void TUTaxa::tearDown(){
  
    delete classe;
}

void TUTaxa::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUTaxa::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUTaxa::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade  Valor de Aplicação SUCESSO

void TUValorAplicacao::setUp(){
  
    classe = new ValorAplicacao;
}

void TUValorAplicacao::tearDown(){
  
    delete classe;
}

void TUValorAplicacao::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUValorAplicacao::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUValorAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}

/// Teste de unidade  Valor Mínimo de Aplicação SUCESSO

void TUValorMinimo::setUp(){
  
    classe = new ValorMinimo;
}

void TUValorMinimo::tearDown(){
  
    delete classe;
}

void TUValorMinimo::testarCenarioSucesso(){
    
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            sucesso = false;
    }
    catch(invalid_argument excecao){
        sucesso = false;
    }


}

void TUValorMinimo::testarCenarioFalha(){
    
    try{
        classe->setValor(VALOR_INVALIDO);
            sucesso = false;
    }
    catch(invalid_argument excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            sucesso = false;
    }


}

bool TUValorMinimo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}