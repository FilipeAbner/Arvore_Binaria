#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

//metodos utilizados para inclusao dos arquivos

using namespace std;

class Cliente{      //cria a classe cliente
    public:         //o public especifica que os membros da classe sao acessiveis de qualquer funcao
        Cliente(unsigned nchave, const string &nnome){     /*contrutor que e chamado sempre que e criado um 
                                                            cliente*/
            chave = nchave;
            nome = nnome;
        }
        Cliente(){                                         /*construtor que gera um cliente com chave 0 e nome
                                                           Dummy como padrao, caso exista cliente n cadastrado*/
            chave = 0;
            nome = "Dummy";
        }
        ~Cliente() {}                                       //destrutor que e chamado ao apagar um cliente
        

        void mostraclient(){        //funcao para imprimir os clientes no terminal

            cout << chave << " , '" << nome << "'" << endl;     /*funcao imprime  a chave e nome da 
                                                                classe chamada*/
        }
        void mostrachave(){        //funcao para imprimir as chaves no terminal

            cout << "chave: " << chave << endl;     /*funcao imprime  a chave classe chamada*/
        }
        string nome;        //declaraçao da variavel nome
        unsigned chave;     //declaraçao da variavel chave
};
#endif