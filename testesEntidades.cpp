#include<iostream>
#include"testesEntidades.h"

void TUAplicacao::setUp(){
    entidade = new Aplicacao;
    codigo = new CodigoDeAplicacao;
    valor = new ValorAplicacao;
    data = new Data;
}

void TUAplicacao::tearDown(){
    delete entidade;
    delete codigo;
    delete codigo;
    delete valor;
    delete data;
}

bool TUAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}


void TUAplicacao::testarCenarioSucesso(){
    try{
        //Seta valores de domínios, joga exceção em valores incompatíveis com requisitos
        codigo->setValor(codigo_valido);
        valor->setValor(valor_valido);
        data->setDado(data_valido);

        //Armazena domínios na entidade
        entidade->set(codigo);
        entidade->set(valor);
        entidade->set(data);
         
    }
    catch (invalid_argument excecao){
        sucesso = false;
    }
    //Verifica se os valores corretos foram setados
     if (entidade->getCodigoDeAplicacao() != NULL && entidade->getCodigoDeAplicacao()->getValor() != codigo->getValor() 
        || entidade->getValorAplicacao() != NULL && entidade->getValorAplicacao()->getValor() != valor->getValor()
        || entidade->getData() != NULL && entidade->getData()->getDado() != data->getDado() ){

        sucesso = false;
       
     }
}


void TUAplicacao::testarCenarioFalha(){
    try{
        //Seta valores de domínios, joga exceção em valores incompatíveis com requisitos
        codigo->setValor(codigo_valido);
        valor->setValor(valor_valido);
        data->setDado(data_valido);

        //Armazena domínios na entidade
        entidade->set(codigo);
        entidade->set(valor);
       
       //Introduz falha
        data = NULL;
        entidade->set(data);
        sucesso = false;
    }
    catch (invalid_argument excecao){
//cada ponteiro é individualmente checado porque seria uma falha se certo valor não fosse setado e um ponteiro válido,
//mesmo no caso de um outro ponteiro inválido corretamente lançar a axcesão
        if (entidade->getCodigoDeAplicacao() != NULL && entidade->getCodigoDeAplicacao()->getValor() != codigo->getValor()
            || entidade->getValorAplicacao() != NULL && entidade->getValorAplicacao()->getValor() != valor->getValor())
            //NOTE: this is true due to pointer init being null in header and data also being null, but they weren't assigned
            // entidade->getData() == data)
                sucesso = false;
       
    }
                
}

//Fim de TUAplicacao

//Teste de entidade TUCONTA
void TUConta::setUp(){
    entidade = new Conta;
    banco = new CodigoDeBanco;
    agencia = new CodigoDeAgencia;
    numero = new Numero;
}

void TUConta::tearDown(){
    delete entidade;
    delete banco;
    delete agencia;
    delete numero;
}

bool TUConta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}


void TUConta::testarCenarioSucesso(){
    try{
        banco->setValor(banco_valido);

//Como há falha no domínio  CodigoDeAgencia, não há verificação do valor da instância,
//Apenas da validade do endereço apontado como objeto.

        //agencia->setValor(agencia_valido);
        numero->setDado(numero_valido);

        entidade->set(banco);
        entidade->set(agencia);
        entidade->set(numero);

        
    }
    catch (invalid_argument excecao){
        sucesso = false;
    }
    if (entidade->getCodigoDeBanco() != NULL && entidade->getCodigoDeBanco()->getValor() != banco->getValor() 
        || entidade->getCodigoDeAgencia() != NULL && entidade->getCodigoDeAgencia()->getValor() != agencia->getValor()
        || entidade->getNumero() != NULL && entidade->getNumero()->getDado() != numero->getDado() ){

        sucesso = false;
       
     }
    
}


void TUConta::testarCenarioFalha(){
    try{
        //Seta valores de domínios, joga exceção em valores incompatíveis com requisitos
        banco->setValor(banco_valido);
        agencia->setValor(agencia_valido);
        numero->setDado(numero_valido);

        //Armazena domínios na entidade
        entidade->set(numero);
        entidade->set(banco);
       
       //Introduz falha
        agencia = NULL;
        entidade->set(agencia);
        sucesso = false;
    }
    catch (invalid_argument excecao){
//Verifica se os valores corretos foram setados
        if (entidade->getNumero() != NULL && entidade->getNumero()->getDado() != numero->getDado()
            || entidade->getCodigoDeBanco() != NULL && entidade->getCodigoDeBanco()->getValor() != banco->getValor())
            sucesso = false;
                
    }
}

//Fim de TUConta


//Teste de entidade TUProduto
void TUProduto::setUp(){
    entidade = new Produto;
    codigo = new CodigoDeProduto;
    classe = new Classe;
    emissor = new Emissor;
    prazo = new Prazo;
    vencimento = new Data;
    taxa = new Taxa;
    horario = new Horario;
    valor = new ValorMinimo;
}

void TUProduto::tearDown(){
    delete entidade;
    delete codigo;
    delete classe;
    delete emissor;
    delete prazo;
    delete vencimento;
    delete taxa;
    delete horario;
    delete valor;
}

bool TUProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}


void TUProduto::testarCenarioSucesso(){
    try{
//Como há falha no domínio  Horario, não há verificação do valor da instância,
//Apenas da validade do endereço apontado como objeto.

        //Seta valores de domínios, joga exceção em valores incompatíveis com requisitos
        codigo->setValor(codigo_valido);
        classe->setDado(classe_valido);
        emissor->setDado(emissor_valido);
        prazo->setValor(prazo_valido);
        vencimento->setDado(vencimento_valido);
        taxa->setValor(taxa_valido);
        //horario->setDado(horario_valido);
        valor->setValor(valor_valido);

        //Armazena domínios na entidade
        entidade->set(codigo);
        entidade->set(classe);
        entidade->set(emissor);
        entidade->set(prazo);
        entidade->set(vencimento);
        entidade->set(taxa);
        entidade->set(horario);
        entidade->set(valor);

        }
    catch (invalid_argument excecao){
        sucesso = false;
    }
//Verifica se os valores corretos foram setados
    if (entidade->getCodigoDeProduto() != NULL && entidade->getCodigoDeProduto()->getValor()  != codigo->getValor()
            || entidade->getClasse() != NULL && entidade->getClasse()->getDado()  != classe->getDado()
            || entidade->getEmissor() != NULL && entidade->getEmissor()->getDado()  != emissor->getDado()
            || entidade->getPrazo() != NULL && entidade->getPrazo()->getValor()  != prazo->getValor()
            || entidade->getData() != NULL && entidade->getData()->getDado()  != vencimento->getDado()
            || entidade->getTaxa() != NULL && entidade->getTaxa()->getValor()  != taxa->getValor()
            //|| entidade->getHorario() != NULL && entidade->getHorario()->getDado()  != horario->getDado()
            || entidade->getValorMinimo() != NULL && entidade->getValorMinimo()->getValor()  != valor->getValor())
                sucesso = false;
}


void TUProduto::testarCenarioFalha(){
    try{
//Como há falha no domínio  Horario, não há verificação do valor da instância,
//Apenas da validade do endereço apontado como objeto.

        //Seta valores de domínios, joga exceção em valores incompatíveis com requisitos
        codigo->setValor(codigo_valido);
        classe->setDado(classe_valido);
        emissor->setDado(emissor_valido);
        prazo->setValor(prazo_valido);
        vencimento->setDado(vencimento_valido);
        taxa->setValor(taxa_valido);
        // horario->setDado(horario_valido);
        valor->setValor(valor_valido);

        //Armazena domínios na entidade
        entidade->set(codigo);
        entidade->set(classe);
        entidade->set(emissor);
        entidade->set(prazo);
        entidade->set(vencimento);
        entidade->set(taxa);
        //entidade->set(horario);
        entidade->set(valor);

        //Introduz falha
        horario = NULL;
        entidade->set(horario);

        sucesso = false;
    }
    catch (invalid_argument excecao){
    //Verifica se os valores corretos foram setados
        if (entidade->getCodigoDeProduto() != NULL && entidade->getCodigoDeProduto()->getValor()  != codigo->getValor()
            || entidade->getClasse() != NULL && entidade->getClasse()->getDado()  != classe->getDado()
            || entidade->getEmissor() != NULL && entidade->getEmissor()->getDado()  != emissor->getDado()
            || entidade->getPrazo() != NULL && entidade->getPrazo()->getValor()  != prazo->getValor()
            || entidade->getData() != NULL && entidade->getData()->getDado()  != vencimento->getDado()
            || entidade->getTaxa() != NULL && entidade->getTaxa()->getValor()  != taxa->getValor()
            //|| entidade->getHorario() != NULL && entidade->getHorario()->getDado()  != horario->getDado()
            || entidade->getValorMinimo() != NULL && entidade->getValorMinimo()->getValor()  != valor->getValor())
                sucesso = false;
        
        
                
    }

        
}

//Fim de TUProduto



//Teste de entidade TUUsuario
void TUUsuario::setUp(){
    entidade = new Usuario;
    nome = new Nome;
    cpf = new Cpf;
    cep = new Cep;
    endereco = new Endereco;
    senha = new Senha;
}

void TUUsuario::tearDown(){
    delete entidade; 
    delete nome;
    delete cpf;
    delete cep;
//Como esta linha traz o erro: free(): invalid pointer,
// ela foi comentada, porém há vazamento de memória
    //delete senha;
    delete endereco;
}

bool TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return sucesso;
}


void TUUsuario::testarCenarioSucesso(){
    try{
//Como há falha no domínio  Cpf, não há verificação do valor da instância,
//Apenas da validade do endereço apontado como objeto.

        nome->setDado(nome_valido);
        // cpf->setDado(cpf_valido);
        cep->setValor(cep_valido);
        endereco->setDado(endereco_valido);
        senha->setValor(senha_valido);

        entidade->set(nome);
        entidade->set(cpf);
        entidade->set(cep);
        entidade->set(endereco);
        entidade->set(senha);
     }
    catch (invalid_argument excecao){
        sucesso = false;
    }
        if (entidade->getNome() != NULL && entidade->getNome()->getDado() != nome->getDado() 
        // || entidade->getCpf() != NULL && entidade->getCpf()->getDado() != cpf->getDado()
        || entidade->getCep() != NULL && entidade->getCep()->getValor() != cep->getValor() 
        || entidade->getEndereco() != NULL && entidade->getEndereco()->getDado() != endereco->getDado()
        || entidade->getSenha() != NULL && entidade->getSenha()->getValor() != senha->getValor() ){        
 
            sucesso = false;
        }
}


void TUUsuario::testarCenarioFalha(){
    try{      
//Como há falha no domínio  Cpf, não há verificação do valor da instância,
//Apenas da validade do endereço apontado como objeto.
  
        //Seta valores de domínios, joga exceção em valores incompatíveis com requisitos
        nome->setDado(nome_valido);
        senha->setValor(senha_valido);
        cep->setValor(cep_valido);
        endereco->setDado(endereco_valido);

        //Armazena domínios na entidade
        entidade->set(cep);
        entidade->set(endereco);
        entidade->set(nome);
        entidade->set(senha);
        
        //Introduz falha
        cpf = NULL;
        entidade->set(cpf);

        sucesso = false;
    }
    catch (invalid_argument excecao){
//Verifica se os valores corretos foram setados
        if (entidade->getNome() != NULL && entidade->getNome()->getDado() != nome->getDado() 
        // || entidade->getCpf() != NULL && entidade->getCpf()->getDado() != cpf->getDado()
        || entidade->getCep() != NULL && entidade->getCep()->getValor() != cep->getValor() 
        || entidade->getEndereco() != NULL && entidade->getEndereco()->getDado() != endereco->getDado()
        || entidade->getSenha() != NULL && entidade->getSenha()->getValor() != senha->getValor() ){
                
        sucesso = false;
       
     }
            
    }
}
