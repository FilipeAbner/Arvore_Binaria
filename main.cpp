#include <iostream>
#include "cliente.h"
#include "nodo.h"
#include "arvore.h"

using namespace std;

int main()
{
Cliente a1(1,"a1");         //declarando um cliente a1
Cliente a2(2,"a2");         //declarando um cliente a2
Cliente a3(3,"a3");         //declarando um cliente a3
Cliente a4(4,"a4");         //declarando um cliente a4
Cliente a5(5,"a5");         //declarando um cliente a5
Cliente a6(6,"a6");         //declarando um cliente a6
Cliente a7(7,"a7");         //declarando um cliente a7
Cliente a8(8,"a8");         //declarando um cliente a8
Cliente a9(9,"a9");         //declarando um cliente a9
Cliente a10(10,"a10");      //declarando um cliente a10
Cliente a11(11,"a11");      //declarando um cliente a11
Cliente a12(12,"a12");      //declarando um cliente a12

Arvore arvorebinaria;       //Aloca uma lista chamada arvorebinaria

arvorebinaria.insere(a8);       //usa o metodo insere para incluir o cliente a8 dentro da lista arvorebinaria
arvorebinaria.insere(a5);       //usa o metodo insere para incluir o cliente a5 dentro da lista arvorebinaria
arvorebinaria.insere(a3);       //usa o metodo insere para incluir o cliente a3 dentro da lista arvorebinaria
arvorebinaria.insere(a12);      //usa o metodo insere para incluir o cliente a12 dentro da lista arvorebinaria
arvorebinaria.insere(a9);       //usa o metodo insere para incluir o cliente a9 dentro da lista arvorebinaria
arvorebinaria.insere(a4);       //usa o metodo insere para incluir o cliente a4 dentro da lista arvorebinaria
arvorebinaria.insere(a11);      //usa o metodo insere para incluir o cliente a11 dentro da lista arvorebinaria
arvorebinaria.insere(a2);       //usa o metodo insere para incluir o cliente a2 dentro da lista arvorebinaria
arvorebinaria.insere(a6);       //usa o metodo insere para incluir o cliente a6 dentro da lista arvorebinaria
arvorebinaria.insere(a10);      //usa o metodo insere para incluir o cliente a10 dentro da lista arvorebinaria
arvorebinaria.insere(a1);       //usa o metodo insere para incluir o cliente a1 dentro da lista arvorebinaria
arvorebinaria.insere(a7);       //usa o metodo insere para incluir o cliente a7 dentro da lista arvorebinaria

arvorebinaria.preOrdemArvore();     //usa o metodo preordem para exibir e ordenar os clientes dentro da arvorebinaria

arvorebinaria.imprimeAncestrais(arvorebinaria.busca(10));       //usa o metodo imprimeAncestrais que recebe como parametro a arvorebinaria
cout << endl;                                           //e o metodo busca para encontrar o nodo 10 e imprimir seus ancestrais                                
arvorebinaria.imprimeAncestrais(arvorebinaria.busca(1));        //usa o metodo imprimeAncestrais que recebe como parametro a arvorebinaria
                                                                //e o metodo busca para encontrar o nodo 1 e imprimir seus ancestrais 
cout<< "\n" <<"XXXXXXXXXXXXXXXXXXXXXXXXXX"<< "\n" <<endl;       //divisao para melhor visualizaçao do codigo 

arvorebinaria.rodadireita();        //usa o metodo rodadireita para aplicar uma rotaçao à arvore para a direita
arvorebinaria.preOrdemArvore();     //usa o metodo preOrdemArvore para chamar o metodo preordem, organizar a arvore imprimir valores
arvorebinaria.imprimeAncestrais(arvorebinaria.busca(10));        //usa o metodo imprimeAncestrais que recebe como parametro a arvorebinaria
cout << endl;                                            //e o metodo busca para encontrar o nodo 10 e imprimir seus ancestrais 
arvorebinaria.imprimeAncestrais(arvorebinaria.busca(1));         //usa o metodo imprimeAncestrais que recebe como parametro a arvorebinaria
                                                                 //e o metodo busca para encontrar o nodo 1 e imprimir seus ancestrais 
cout<< "\n" << "XXXXXXXXXXXXXXXXXXXXXXXXXX"<< "\n" <<endl;      //divisao para melhor visualizaçao do codigo

arvorebinaria.rodaesquerda();          //usa o metodo rodaesquerda para aplicar uma rotaçao à arvore a esquerda
arvorebinaria.rodaesquerda();          //usa o metodo rodaesquerda para aplicar uma rotaçao à arvore a esquerda
arvorebinaria.preOrdemArvore();        //usa o metodo preOrdemArvore para chamar o metodo preordem, organizar a arvore imprimir valores

arvorebinaria.imprimeAncestrais(arvorebinaria.busca(10));       //usa o metodo imprimeAncestrais que recebe como parametro a arvorebinaria
cout << endl;                                           //e o metodo busca para encontrar o nodo 10 e imprimir seus ancestrais
arvorebinaria.imprimeAncestrais(arvorebinaria.busca(1));        //usa o metodo imprimeAncestrais que recebe como parametro a arvorebinaria
                                                                //e o metodo busca para encontrar o nodo 1 e imprimir seus ancestrais
return 0;
}