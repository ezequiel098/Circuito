#ifndef PortasLogica_H
#define PortasLogica_H
#include <map>
#include <QPushButton>
#include <iostream>
#include <exception>

using namespace std;

class PortaLogica{
    protected:
        int estado;
        int qtdEntradas, contador;

        PortaLogica* entrada1;
        PortaLogica* entrada2;

    public:
        PortaLogica(){
            estado = 2;
            contador = 0;

            entrada1 = NULL;
            entrada2 = NULL;
        }

        virtual bool Operacao(){return 0;}

        virtual bool entradaValida(){
            if(entrada1==NULL || entrada2==NULL)
                return 0;

            return entrada1->entradaValida() && entrada2->entradaValida();
        }

        virtual void adicionarEntrada(PortaLogica* pl){}
        virtual void mudarEstado(){
            estado = !estado;
        }

        virtual int verEstado(){
            return estado;
        }

        virtual bool taCheia(){
            return contador>=qtdEntradas;
        }
};

class E: public PortaLogica{
    public:
        E();

        bool Operacao();
        void adicionarEntrada(PortaLogica*);
};

class Ou: public PortaLogica{
    public:
        Ou();

        bool Operacao();
        void adicionarEntrada(PortaLogica*);
};

class OuExclusivo: public PortaLogica{
    public:
        OuExclusivo();

        bool Operacao();
        void adicionarEntrada(PortaLogica*);
};

class Nao: public PortaLogica{
    public:
        Nao();

        bool Operacao();
        bool entradaValida(){
            if(entrada1==NULL)
                return 0;
            return entrada1->entradaValida();
        }
        void adicionarEntrada(PortaLogica*);
};

class Botao: public PortaLogica{
    public:
        Botao();
        Botao(bool);

        bool Operacao();
        bool entradaValida(){
            return 1;
        }
};

class LED: public PortaLogica{
    public:
        LED();

        bool Operacao();
        bool entradaValida(){
            if(entrada1==NULL)
                return 0;
            return entrada1->entradaValida();
        }
        void adicionarEntrada(PortaLogica*);
};
#endif
