#include <iostream>
#include "entidades.h"

using namespace std;
//TODO turn all setters into overloaders(Aplicação is notably flawed)
//TODO  unify throw mssg pattern
//Entidade Aplicacao

//construtor
Aplicacao::Aplicacao(
    CodigoDeAplicacao* codigoDeAplicacao, 
    ValorAplicacao* valorAplicacao,
    Data* data)
    :
    codigo (codigoDeAplicacao),
    valor (valorAplicacao),
    data (data){}

//métodos de validação e setters
void Aplicacao::validar(CodigoDeAplicacao* codigo){
    if (codigo == NULL)
        throw invalid_argument("Erro: classe CodigoDeAplicacao não existe.");
}

void Aplicacao::set( CodigoDeAplicacao* codigo)
{
    validar(codigo);
    this->codigo = codigo;
}


void Aplicacao::validar(ValorAplicacao* valor){
    if (valor == NULL)
        throw invalid_argument("Erro: classe ValorAplicacao não existe.");
}

void Aplicacao::set( ValorAplicacao* valor)
{
    validar(valor);
    this->valor = valor;
}

void Aplicacao::validar(Data* data){
    if (data == NULL)
        throw invalid_argument("Erro: classe Data não existe.");
}

void Aplicacao::set( Data* data)
{
    validar(data);
    this->data = data;
}

//Entidade Conta

Conta::Conta(
    CodigoDeBanco* banco,
    CodigoDeAgencia* agencia,
    Numero* numero)
    :
    banco (banco),
    agencia (agencia),
    numero (numero){}

//setters
void Conta::set(CodigoDeBanco* banco){
    validar(banco);
    this->banco = banco;
}
void Conta::set(CodigoDeAgencia* agencia){
    validar(agencia);
    this->agencia = agencia;
}
void Conta::set(Numero* numero){
    validar(numero);
    this->numero = numero;
}

//métodos de validação
void Conta::validar(CodigoDeBanco* banco){
    if (banco == NULL)
        throw invalid_argument("Erro: CodigoDeBanco* banco == NULL");
}
void Conta::validar(CodigoDeAgencia* agencia){
    if (agencia == NULL)
        throw invalid_argument("Erro: CodigoDeAgencia* agencia == NULL");
}
void Conta::validar(Numero* numero){
    if (numero == NULL)
        throw invalid_argument("Erro: Numero* numero == NULL");
}

//Entidade Produto

//construtor
Produto::Produto(
    CodigoDeProduto* codigo,
    Classe* classe,
    Emissor* emissor,
    Prazo* prazo,
    Data* vencimento,
    Taxa* taxa,
    Horario* horario,
    ValorMinimo* valor)
    : 
    codigo (codigo),
    classe (classe),
    emissor (emissor),
    prazo (prazo),
    vencimento (vencimento),
    taxa (taxa),
    horario (horario),
    valor (valor){}

//métodos de validação e setters
void Produto::validar(CodigoDeProduto* codigo){
    if (codigo == NULL)
        throw invalid_argument ("Erro: CodigoDeProduto* == NULL");
}
void Produto::set(CodigoDeProduto* codigo){
    validar(codigo);
    this->codigo = codigo;
}

void Produto::validar(Classe* classe){
    if (classe == NULL)
        throw invalid_argument ("Erro: Classe* == NULL");
}
void Produto::set(Classe* classe){
    validar(classe);
    this->classe = classe;
}

void Produto::validar(Emissor* emissor){
    if (emissor == NULL)
        throw invalid_argument ("Erro: Emissor* == NULL");
}
void Produto::set(Emissor* emissor){
    validar(emissor);
    this->emissor = emissor;
}

void Produto::validar(Prazo* prazo){
    if (prazo == NULL)
        throw invalid_argument ("Erro: Prazo* == NULL");
}
void Produto::set(Prazo* prazo){
    validar(prazo);
    this->prazo = prazo;
}

void Produto::validar(Data* vencimento){
    if (vencimento == NULL)
        throw invalid_argument ("Erro: Data* == NULL");
}
void Produto::set(Data* vencimento){
    validar(vencimento);
    this->vencimento = vencimento;
}

void Produto::validar(Taxa* taxa){
    if (taxa == NULL)
        throw invalid_argument ("Erro: Taxa* == NULL");
}
void Produto::set(Taxa* taxa){
    validar(taxa);
    this->taxa = taxa;
}

void Produto::validar(Horario* horario){
    if (horario == NULL)
        throw invalid_argument ("Erro: Horario* == NULL");
}
void Produto::set(Horario* horario){
    validar(horario);
    this->horario = horario;
}

void Produto::validar(ValorMinimo* valor){
    if (valor == NULL)
        throw invalid_argument ("Erro: ValorMinimo* == NULL");
}
void Produto::set(ValorMinimo* valor){
    validar(valor);
    this->valor = valor;
}

//Entidade Usuario

Usuario::Usuario(
    Nome* nome,
    Cpf* cpf,
    Cep* cep,
    Endereco* endereco,
    Senha* senha)
:
    nome (nome),
    cpf (cpf),
    cep (cep),
    endereco (endereco),
    senha (senha){}

//métodos de validação e setters
void Usuario::validar(Nome* nome){
    if ( nome == NULL)
        throw invalid_argument ("Erro: Nome == NULL");
}
void Usuario::set(Nome* nome){
    validar (nome);
    this->nome = nome;

}
void Usuario::validar(Cpf* cpf){
    if ( cpf == NULL)
        throw invalid_argument ("Erro: Cpf == NULL");
}
void Usuario::set(Cpf* cpf){
    validar (cpf);
    this->cpf = cpf;

}
void Usuario::validar(Cep* cep){
    if ( cep == NULL)
        throw invalid_argument ("Erro: Cep == NULL");
}
void Usuario::set(Cep* cep){
    validar (cep);
    this->cep = cep;

}
void Usuario::validar(Endereco* endereco){
    if ( endereco == NULL)
        throw invalid_argument ("Erro: Endereco == NULL");
}
void Usuario::set(Endereco* endereco){
    validar (endereco);
    this->endereco = endereco;

}
void Usuario::validar(Senha* senha){
    if ( senha == NULL)
        throw invalid_argument ("Erro: Senha == NULL");
}
void Usuario::set(Senha* senha){
    validar(senha);
    this->senha = senha;

}



