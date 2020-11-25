#include <iostream>
#include "dominios.h"

using namespace std;

void Cep::validar(int valor ){

    if ( (valor >= 1000000 && valor <= 5999999) || (valor >= 8000000 && valor <= 8499999) )
        return;                     //CEP de SP

    if ( valor >= 20000000 && valor <= 26600999)
        return;                     //CEP de RJ

    if ( valor >= 70000000 && valor <= 70999999)
        return;                     //CEP de BSB

    if ( valor >= 40000000 && valor <= 41999999)
        return;                     //CEP de Salvador

    if ( valor >= 60000000 && valor <= 60999999)
        return;                     //CEP de Fortaleza

    else
      throw invalid_argument("Argumento invalido.");

}



void Cep::setValor(int valor ){

    validar(valor);
    this->valor = valor;
 }

//   Impementação da classe Classe

void Classe::validar(string dado ){

    if(dado != "CDB" && dado != "LCA" && dado != "LCI" && dado != "LF" && dado != "LC")
        throw invalid_argument("Argumento inválido.");
}

void Classe::setDado(string dado ){

    validar(dado);
    this->dado = dado;
}

//   Impementação da classe Código de Agência

void CodigoDeAgencia::validar(int valor ){

    if (valor <= 0 || valor >= 10000)
        throw invalid_argument("Argumento invalido.");
}

void CodigoDeAgencia::setValor(int ){

    validar(valor);
    this->valor = valor;
}

//   Impementação da classe Código de Aplicação

void CodigoDeAplicacao::validar(int valor ){

    if (valor >= 10000 && valor < 100000)
        return;

    else
        throw invalid_argument("Argumento invalido.");
}

void CodigoDeAplicacao::setValor(int valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe Código de Banco
void CodigoDeBanco::validar(int valor ){

    switch (valor){

    case 341:                       //	Banco Itaú Unibanco
        return;

    case 001:                       //	Banco do Brasil
        return;

    case 237:                       //	Banco Bradesco
        return;

    case 104:                       //  Caixa Econômica Federal
        return;

    case 033:                       //  Banco Santander Brasil
        return;

    default:
        throw invalid_argument("Argumento invalido.");
        return;

    }
}

void CodigoDeBanco::setValor(int valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe Código de Produto

void CodigoDeProduto::validar(int valor ){

    if (valor < 1000 && valor != 0)
        return;

    else
        throw invalid_argument("Argumento invalido.");
}

void CodigoDeProduto::setValor(int valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe CPF
void Cpf::validar(string dado ){
    int index, peso, soma, aux;
    int digitos[11], produtos[10], cpf[14];
    long int valor;
    string dv, auxi;
    /* Verificando formato da string*/                     // VERIFY FOR ALLL



// Primeiro, para lidar com a input recebida como dígitos:

    //  extrai os dígitos da string dado para o int valor
    valor = 0;

    valor += stoi(dado.substr(0,3));
    valor *= 1000;
    valor += stoi(dado.substr(4,3));
    valor *= 1000;
    valor += stoi(dado.substr(8,3));
    valor *= 100;
    valor += stoi(dado.substr(12,2));

    // converte intvalor para array de digitos, para manipular cada dígito individualmente
    for (index = 0;index < 11;index++){

        digitos[ 10 -index] = valor % 10;
        valor /= 10;
    }
    
// // Segundo, para calcular o dv propiamente dito:

    // para o primeiro dv, considera-se o número do cpf (dígitos antes do traço)

    // a verificação necessita dos produtos entre dígitos e pesos crescentes da direta para esquerda (2-10) para serem somados
    peso = 2;
    index = 9;
    
    for( index-- ; index >= 0; index--){

        produtos[index] = digitos[index] * peso;
        peso++;
        
    }

    // o resto da divisão da soma dos produtos por 11 determina o primeiro dv:
    for ( index = 0; index < 9; index++){
        soma += produtos[index];
    }
    
    if ( soma % 11 < 2)
        aux = 0;
    else
        aux = 11 - (soma % 11);
    
    dv = to_string(aux);

    // para o segundo dv: considera-se o número do cpf e o primeiro dv e repete-se o algarismo 

    // novamente, o dv é definido segundo o resto da soma dos produtos(pesos 2-11) por 11
    if ( dv[0] == dado[12]){

        peso = 2;
        index = 10;
        for( index-- ; index >= 0; index--){

            produtos[index] = digitos[index] * peso;
            peso++;
            
        }    

        for ( soma = 0, index = 0; index < 10; index++){
            soma += produtos[index];
        }
        
        if ( soma % 11 < 2)
            aux = 0;
        else
            aux = 11 - (soma % 11);
        
        dv = to_string(aux);
    
        if ( dv[0] == dado[13])
            return;
    }
    
    throw invalid_argument("Argumento invalido.");
}

void    Cpf::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}

//   Impementação da classe Data
void Data::validar(string dado ){
    int dia = stoi(dado.substr(0,2));
    int mes = stoi(dado.substr(3,2));
    int ano = stoi(dado.substr(6,7));

// anos bissextos são equivalentes aos divisíveis por quatro
   if (ano >= 2020 && ano <= 2099 && mes <= 12 && dia <= 31){

        if (mes <= 7){

//se o mês é antes de julho, então meses pares tem < 31 dias
            if ( (mes % 2 == 0 && dia < 31) || (mes % 2 != 1) ){

//          se for 29/02, ano deve ser bissexto
                if ( (mes == 2 && dia == 29 && ano % 4 == 0) || (mes != 2) || (dia < 29) )
                    return;
            }
        }

        else{
//a partir de julho, meses pares de 31 dias        e ímpares; 30
            if ( (mes % 2 == 0 && dia <= 31) ||  (mes % 2 != 0 && dia < 31) )
                return;
        }
        

        

    }
   
    throw invalid_argument("Argumento invalido.");
}

void Data::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}

//   Impementação da classe Horario

void Horario::validar(string dado ){
    int horas = stoi(dado.substr(0,2));
    int minutos = stoi(dado.substr(3,2));

   if (horas >= 13 && horas <= 17 && minutos >= 0 && minutos <= 60) 
    return;
   
    throw invalid_argument("Argumento invalido.");
}


void Horario::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}

//   Impementação da classe Senha
void Senha::validar(int valor ){
    int i, j, arr[6];

// converte int para array
    for ( i = 0; i < 6; i++){

        arr[ 5 - i] = valor % 10;
        valor /= 10;
    }
    

// então checa se há digitos repetidos
   for ( i = 0; i < 6; i++){

       for ( j = 0; j < 6; j++){

           if (i != j &&  arr[i] == arr[j] )
            throw invalid_argument("Argumento invalido.");

       }
       
   }
   
}

void Senha::setValor(int valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe Emissor

void Emissor::validar(string dado ){
    int i;

    if (dado.length() >= 5  && dado.length() <= 20 ){

        //Indiretamente invalida caso primeiro caractere não seja maiúsculo
        if ( isupper(dado[0])  ){

            for (i = 0; i < dado.length(); i++){
    
                // Filtra os formatos aceitos de caracteres
                if ( dado[i] != ' ' && dado[i] != '.' &&  dado[i] != ',' && dado[i] != '-' && !isalnum(dado[i]) ) 
                    throw invalid_argument("Argumento invalido.");

                // invalido caso caractere após espaço não for maiúsculo(se houver maiúsculo)
                // invalida caso dois caracteres se seguirem
                else{
                    if (!isalnum(dado[i]) && (i + 1 < dado.length() - 1) ){
                        if (!isalnum(dado[i + 1]) || ( isspace(dado[i] ) && !isupper(dado[i + 1]) ) ) 
                            throw invalid_argument("Argumento invalido.");
                    }
                }
            }
        
          return;       
        }

    }

    throw invalid_argument("Argumento invalido.");
}

void Emissor::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}


//   Impementação da classe Endereço
// entende-se que termos são alafanuméricos dividos por espaço 
// caracteres alfabéticos especias como "à,ç" não são aceitos
void Endereco::validar(string dado ){
    int i;

    if (dado.length() >= 5  && dado.length() <= 20 ){

        //Indiretamente invalida caso primeiro caractere não seja maiúsculo
        if ( isupper(dado[0]) ){

            for (i = 0; i < dado.length(); i++){
    
                // Filtra os formatos aceitos de caracteres
                if ( dado[i] != ' ' && dado[i] != '.' && !isalnum(dado[i]) ) 
                    throw invalid_argument("Argumento invalido.");

                // invalido caso caractere após espaço não for maiúsculo(se houver maiúsculo)
                // invalida caso dois caracteres se seguirem
                if ( ( isspace(dado[i]) || dado[i - 1] == '.' ) && (i + 1 < dado.length() - 1) )
                    if (!isalnum(dado[i + 1]) || (isspace(dado[i]) && !isupper(dado[i + 1])) )
                      throw invalid_argument("Argumento invalido.");
        
            }
        
          return;       
        }

    }

    throw invalid_argument("Argumento invalido.");
}

void Endereco::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}


//   Impementação da classe Horário







//   Impementação da classe Nome

void Nome::validar(string dado ){
    int alphas = 0;
    int i;

    if (dado.length() >= 5  && dado.length() <= 30 ){

        if ( isalpha(dado[0]) && toupper(dado[0]) == dado[0] ){

            for (i = 0; i < dado.length(); i++){
            
                if (isalpha(dado[i]))
                    alphas++;
                

                else{
                    // invalido caso caractere não-alpha não é espaço, e 
                    // invalida caso caractere anterior for espaço, porque
                    // ocorreria erro de acesso inválido caso caractere posterior fosse verificado.
                    // ocorreria erro de acesso inválido caso i == 0, mas já houve verificação que i é alphabético
                    // invalida caso os caracteres deopis do espaço não são maiúsculos
                    if ( !isspace(dado[i]) || ( ( i + 1 < dado.length() - 1) && !isupper(dado[ i + 1]) ) )   
                        throw invalid_argument("Argumento invalido.");
                    
                   
                }
                
            }

            // faz última checagem de criteria  e retorna caso todos critérias forem satisfeitas 
            if ( alphas >= 5){
                return;
            }
                
        }
    }

        throw invalid_argument("Argumento invalido.");
}

void Nome::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}
//   Impementação da classe Número
// algoritmo de validação análogo ao do banco Bradesco utilizado, referência: http://177.153.6.25/ercompany.com.br/boleto/laravel-boleto-master/manuais/Regras%20Validacao%20Conta%20Corrente%20VI_EPS.pdf
// para criar o dv são 
void    Numero::validar(string dado ){
    int index, peso, menor_peso, maior_peso, soma, aux;
    int digitos[7], produtos[7], conta[8];
    string dv;
/* Utilizando algorítmo análogo ao do Bradesco: */

// Primeiro, para lidar com a input recebida como dígitos:

    //  extrai os dígitos da string (referente ao número da conta) para um int
    int valor = stoi(dado);
    //  valor = valor * 10;
    //  valor = valor + stoi(dado.substr(9,1));

    // converte int para array de ints
    for (index = 0;index < 7;index++){

        digitos[ 6 -index] = valor % 10;
        valor /= 10;
    }

// Segundo, para calcular o dv propiamente dito:

    //  distribui da direita para esquerda pesos de 2-7 e multiplica pelos correspondentes algarismos
    
    menor_peso = 2;
    maior_peso = 7;
    peso = menor_peso;
    index = sizeof(digitos) / sizeof(digitos[0]);
    
    for( index-- ; index >= 0; index--){

        produtos[index] = digitos[index] * peso;
        peso++;

        if ( peso == maior_peso + 1)
            peso = menor_peso;
        
    }

    // soma todos produtos
    soma = 0;
    for ( index = 0; index < sizeof(produtos) / sizeof(digitos[0]); index++){
        soma += produtos[index];
    }
    
    // define dv segundo mod(11) da soma:

    aux = (soma % 11);

    switch (aux){
    case 0:
        dv = "0";
        break;
      
    case 1:
        dv = "P";
        break;

    default:

        aux = 11 - aux;
        dv = to_string(aux);
        break;
    }


    if ( dv[0] != dado[ dado.length() - 1])
    throw invalid_argument("Argumento invalido.");
}


void    Numero::setDado(string dado ){

    validar(dado);
    this->dado = dado;

}


//   Impementação da classe Prazo

void Prazo::validar(int valor ){

    switch (valor){

    case 6:                       //
        return;

    case 12:                       //
        return;

    case 18:                       //
        return;

    case 24:                       //
        return;

    case 30:                       //
        return;

    case 36:                       //
        return;

    case 42:                       //
        return;

    case 48:                       //
        return;

    case 54:                       //
        return;

    case 60:                       //
        return;

    case 66:                       //
        return;

    case 72:                       //
        return;

    default:
        throw invalid_argument("Argumento invalido.");
        return;

    }
}

void Prazo::setValor(int valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe Taxa

void Taxa::validar(float valor ){

    if (valor >= 0 && valor <= 200)
        return;

    else
        throw invalid_argument("Argumento invalido.");
}

void Taxa::setValor(float valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe Valor de Aplicação

void ValorAplicacao::validar(float valor ){

    if (valor >= 0 && valor < 1000001)
        return;

    else
        throw invalid_argument("Argumento invalido.");
}

void ValorAplicacao::setValor(float valor ){

    validar(valor);
    this->valor = valor;

}

//   Impementação da classe Valor Mínimo

void ValorMinimo::validar(int valor ){

    switch (valor){

    case 1000:                       //
        return;

    case 5000:                       //
        return;

    case 10000:                      //
        return;

    case 50000:
        return;

    default:
        throw invalid_argument("Argumento invalido.");
        return;

    }
}

void ValorMinimo::setValor(int valor ){

    validar(valor);
    this->valor = valor;

}