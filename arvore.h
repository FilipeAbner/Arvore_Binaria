#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

class Arvore{
    public:
    Arvore(){}
    ~Arvore(){          //destrutor que e chamado ao apagar uma raiz
        if(raiz)        //se tiver uma raiz ira chamar a funçao apaga
        apaga(raiz);
    }
    void insere(const Cliente & clientes){      //irá adicionar um nodo à arvore do tipo Cliente(lista)
    Nodo *novoNodo = new Nodo(clientes);     //alocaçao dinamica para criaçao dos nodos
    Nodo *NodoAtual = raiz;                 //criaçao de uma ponteiro para a classe Nodo, que irá receber a raiz
        if(raiz == NULL){           //(primeira passagem)raiz recebe o primeiro Nodo adicionado
            
            raiz= novoNodo;
            return;
        }
            while(true){ //loop ira rodar até parar em um return
                //se a chave do cliente a ser inserido for maior que a chave do cliente no nodo atual 
               if ( NodoAtual ->clientes.chave < clientes.chave ){      //se for maior indica que deve ser colocado a direita da arvore                        
                    
                    if( NodoAtual -> filhoDir){              //ainda nao chegamos

                        NodoAtual = NodoAtual -> filhoDir;  //mantem a sequencia da arvore
                    }else{                                   //chegamos na folha

                        NodoAtual -> filhoDir= novoNodo;        //adiciona o novonovo a direita
                        novoNodo -> pai = NodoAtual;            //o pai do novo nodo será o nodo anterior
                        return;
                    }
               }else{    //se a chave do cliente a ser inserido for menor que a chave do cliente no nodo atual indica  
                        //que deve ser colocado a esquerda da arvore
                        if(NodoAtual -> filhoEsq){     //ainda nao chegamos
                                                        
                            NodoAtual = NodoAtual -> filhoEsq;  //mantem a sequencia da arvore
                        }else{      //chegamosnafolha

                            NodoAtual -> filhoEsq = novoNodo;   //adiciona o novonovo a esquerda
                            novoNodo -> pai = NodoAtual;        //o pai do novo nodo será o nodo anterior
                            return;
                        }
                }
            }
    }
    Nodo *busca(int chave){     //recebe uma chave como parametro para realizar a busca da mesma
        Nodo *NodoAtual=raiz;       //decalaraçao de um ponteiro da classe nodo que receberá a raiz
            //funcionamento semelhante a uma funçao recursiva 
        while(NodoAtual){       //enquanto tiver um nodoAtual
            if(NodoAtual -> clientes.chave == chave)        //condicao de parada, se o nodo que a ponta para a chave do cliente
                                                            //for igual a chave do cliente buscada, retorna o Nodo
                return NodoAtual;
            else if(NodoAtual -> clientes.chave < chave)    //caso o nodo que aponta para a chave do cliente for menor que a chave 
                                                            //buscada, indica que o Nodo buscado esta mais a direita
                NodoAtual = NodoAtual-> filhoDir;
            else                                        //caso o nodo que aponta para a chave do cliente for maior que a chave 
                                                        //buscada, indica que o Nodo buscado esta mais a esquerda
                NodoAtual = NodoAtual -> filhoEsq;
        }                                               //ira repetir o loop ate encontrar a chave buscada
    return NULL;        //caso nao encontre a chave retorna NULL
    }

    void preOrdemArvore()const{     // a funçao preordem da arvore chama a funçao pre ordem do nodo se ja tiver sido passsado uma raiz 
                                    //para a arvore, para fazer a ordenaçao dos nodos
        if(raiz)
        {
            raiz->preOrdem();
        }
        cout << endl;
    }
     
    void imprimeAncestrais(Nodo *nodo){     //funcao para imprimir os ancestrais de cada nodo
        
         
        while(nodo){        //loop para percorrer todos o nodos
        
            nodo-> clientes.mostrachave();      //nodo vai apontar para a funcao que imprime a chave de cada Cliente
            nodo= nodo -> pai;          //o nodo vai apontar para seu pai
       
        }
    }

    void rodadireita(){         //funcao para rotacionar a arvore para a direita
       
        Nodo *no;       //declaraçao de um ponteiro para o no
        no = raiz -> filhoEsq;//no=a5

        raiz -> filhoEsq = no -> filhoDir; //a8->a6 
        no -> filhoDir ->pai = raiz;  //pai a6 é a8
        no -> filhoDir = raiz; //a6->a8
        raiz ->pai = no; //pai a8 é a5
        raiz = no; //raiz=a5
        raiz-> pai= NULL; //pai da raiz e NULLO
    }
    void rodaesquerda(){        //funcao para rotacionar a arvore para a esquerda
       
        Nodo *no;   //declaraçao de um ponteiro para o no
        no = raiz -> filhoDir;//no=a12

        raiz -> filhoDir = no -> filhoEsq;//a8->a9
        raiz->filhoDir -> pai= raiz; //pais
        no -> filhoEsq = raiz;//a9->a8
        raiz -> pai = no; //pais
        raiz = no; //raiz= a12
        raiz->pai=NULL; //pais
    }

    void apaga(Nodo *node){     //recebe a raiz como referencia
        if(node->filhoEsq)      //se a raiz tiver a esquerda
            apaga(node->filhoEsq);      //ira chamar a funçao apontando para a esquerda da raiz
        if(node->filhoDir)      //se a raiz tiver a direita
            apaga(node->filhoDir);      //ira chamar a funçao apontando para a direita da raiz
        delete node;        //de forma que irá percorrer toda a arvore e apagar todos os nodos
    }
    
    Nodo *raiz = NULL;      //declaraçao de um ponteiro para a raiz da arvore
};
#endif