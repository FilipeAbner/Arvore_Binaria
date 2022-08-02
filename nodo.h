#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo      //cria a classe Nodo
{public:        //o public especifica que os membros da classe sao acessiveis de qualquer funcao
    Nodo() {}
    Nodo(const Cliente & novoCliente)        //contrutor que e chamado sempre que e criado um Nodo
                                                            
    {
        clientes = novoCliente;
    }
    ~Nodo() {}      //destrutor que e chamado ao apagar um Nodo
    
    void preOrdem()     //funçao para ordenaçao dos nodos dentro da arvore
    {
        clientes.mostraclient();        //utiliza o metodo mostraclient da classe Cliente que irá fazer a impressao dos clientes no terminal
        if (filhoEsq)           //se for um filho a esquerda, o mesmo irá apontar para a funçao novamente
            filhoEsq -> preOrdem();
        if (filhoDir)            //se for um filho a direita, o mesmo irá apontar para a funçao novamente
            filhoDir -> preOrdem();     //irá ocorrer até todos os nodos estarem organizados na árvore
    }
    Nodo *filhoEsq= NULL;       //decalaraçao de um ponteiro do Nodo que irá apontar para o filho a esquerda do nó
    Nodo *filhoDir= NULL;        //decalaraçao de um ponteiro do Nodo que irá apontar para o filho a direita do nó
    Nodo *pai=NULL;              //decalaraçao de um ponteiro do Nodo que irá apontar para o pai do nó
    Cliente clientes;           //decalaraçao de uma nova classe Cliente
};
#endif