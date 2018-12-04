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
        PortaLogica();

        virtual bool taCheia();
        virtual bool Operacao();

        virtual int verEstado();
        virtual void mudarEstado();

        virtual bool entradaValida();

        virtual void adicionarEntrada(PortaLogica* pl){}
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
        bool entradaValida();
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
        bool entradaValida();
        void adicionarEntrada(PortaLogica*);
};
#endif
