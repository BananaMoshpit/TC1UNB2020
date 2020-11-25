#include <iostream>
#include "dominios.h"
#include "testes.h"
#include "testesEntidades.h"
#include "entidades.h"

using namespace std;

///  \mainpage Trabalho 1 TP1: Domínios e testes
///  \section Documentação
/// Apenas declarações de domínios foram documentadas para o DoxyGen.
/// - Domínios foram descritos de maneira pouco técnica visando encapsulamento e abstração
/// - Todos domínios possuem uma variável com métodos de validação, acesso e atribuição.
/// - Todos métodos de validação e atribuição jogam exceção de argumento inválido.

int main(){
    TUCep teste_cep;
    TUClasse teste_classe;
    TUCodigoDeAgencia teste_codigo_agencia;
    TUCodigoDeBanco teste_codigo_banco;
    TUCodigoDeProduto teste_codigo_produto;
    TUCpf teste_cpf;
    TUData teste_data;
    TUEmissor teste_emissor;
    TUEndereco teste_endereco;
    TUHorario teste_horario;
    TUNome teste_nome;
    TUNumero teste_numero;
    TUPrazo teste_prazo;
    TUSenha teste_senha;
    TUTaxa teste_taxa;
    TUCodigoDeAplicacao teste_codigo_aplicacao;
    TUValorAplicacao teste_valor_aplicacao;
    TUValorMinimo teste_valor_minimo;

    //entidades:
    TUAplicacao teste_aplicacao;
    TUConta teste_conta;
    TUProduto teste_produto;
    TUUsuario teste_usuario;
// como true é definido como não-falso e 0 é falso, caso default(!= 0) equivale a sucesso.

    cout << "ENTIDADES" << endl;
    switch (teste_aplicacao.run()){
         case 0:
             cout << "  Aplicação: FALHA" << endl;
             break;

         default:
             cout << "  Aplicação: SUCESSO" << endl;
             break;
    }

    switch (teste_conta.run()){
         case 0:
             cout << "  Conta: FALHA" << endl;
             break;

         default:
             cout << "  Conta: SUCESSO" << endl;
             break;
    }

    switch (teste_produto.run()){
         case 0:
             cout << "  Produto: FALHA" << endl;
             break;

         default:
             cout << "  Produto: SUCESSO" << endl;
             break;
    }
    
    switch (teste_usuario.run()){
         case 0:
             cout << "  Usuario: FALHA" << endl;
             break;

         default:
             cout << "  Usuario: SUCESSO" << endl;
             break;
    }
    
    
    cout << endl << "DOMÍNIOS" << endl;
    switch (teste_cep.run()){
         case 0:
             cout << "  CEP: FALHA" << endl;
             break;

         default:
             cout << "  CEP: SUCESSO" << endl;
             break;
    }

    switch (teste_classe.run()){
         case 0:
             cout << "  Classe: FALHA" << endl;
             break;

         default:
             cout << "  Classe: SUCESSO" << endl;
             break;
    }
    
    switch (teste_codigo_agencia.run()){

        case 0:
            cout << "  CodigoDeAgencia: FALHA" << endl;
            break;

        default:
            cout << "  CodigoDeAgencia: SUCESSO" << endl;
            break;
    }
         
    switch (teste_codigo_aplicacao.run()){

        case 0:
            cout << "  Código de Aplicação: FALHA" << endl;
            break;

        default:
            cout << "  Código de Aplicação: SUCESSO" << endl;
            break;
    }
 
    switch (teste_codigo_banco.run()){

        case 0:
            cout << "  Código de Banco: FALHA" << endl;
            break;
        
        default:
            cout << "  Código de Banco: SUCESSO" << endl;
            break;
    }
        
    switch (teste_codigo_produto.run()){

        case 0:
            cout << "  Código de Produto: FALHA" << endl;
            break;
        
        default:
            cout << "  Código de Produto: SUCESSO" << endl;
            break;
    }

    switch (teste_cpf.run()){

        case 0:
            cout << "  Código de CPF: FALHA" << endl;
            break;
        
        default:
            cout << "  Código de CPF: SUCESSO" << endl;
            break;
    }                 


    switch (teste_data.run()){
         case 0:
             cout << "  Data: FALHA" << endl;
             break;

         default:
             cout << "  Data: SUCESSO" << endl;
             break;
    }   

    switch (teste_emissor.run()){
    case 0:
        cout << "  Emissor: FALHA" << endl;
        break;

    default:
        cout << "  Emissor: SUCESSO" << endl;
        break;
    } 

    switch (teste_endereco.run()){
         case 0:
             cout << "  Endereço: FALHA" << endl;
             break;

         default:
             cout << "  Endereço: SUCESSO" << endl;
             break;
    } 
                 
    switch (teste_horario.run()){
         case 0:
             cout << "  Horario: FALHA" << endl;
             break;

         default:
             cout << "  Horario: SUCESSO" << endl;
             break;
    } 
        
    switch (teste_nome.run()){
         case 0:
             cout << "  Nome: FALHA" << endl;
             break;

         default:
             cout << "  Nome: SUCESSO" << endl;
             break;
    }
    
    
    switch (teste_numero.run()){
         case 0:
             cout << "  Nùmero: FALHA" << endl;
             break;

         default:
             cout << "  Nùmero: SUCESSO" << endl;
             break;
    }
    
    

    switch (teste_prazo.run()){

        case 0:
            cout << "  Prazo: FALHA" << endl;
            break;
        
        default:
            cout << "  Prazo: SUCESSO" << endl;
            break;
    }
    
    switch (teste_senha.run()){
         case 0:
             cout << "  Senha: FALHA" << endl;
             break;

         default:
             cout << "  Senha: SUCESSO" << endl;
             break;
    }

    switch (teste_taxa.run()){

        case 0:
            cout << "  Taxa: FALHA" << endl;
            break;
        
        default:
            cout << "  Taxa: SUCESSO" << endl;
            break;
    }     

    switch (teste_valor_aplicacao.run()){

        case 0:
            cout << "  Valor de Aplicação: FALHA" << endl;
            break;
        
        default:
            cout << "  Valor de Aplicação: SUCESSO" << endl;
            break;
    } 

    switch (teste_valor_minimo.run()){

        case 0:
            cout << "  Valor Mínimo : FALHA" << endl;
            break;
        
        default:
            cout << "  Valor Mínimo : SUCESSO" << endl;
            break;
    } 

    return 0;
}