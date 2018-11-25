#ifndef PortasLogica_H
#define PortasLogica_H
#include <map>
#include <QPushButton>
#include <iostream>

class PortaLogica{
    protected:
        int qtdEntradas, contador;

        PortaLogica* entrada1;
        PortaLogica* entrada2;

    public:
        PortaLogica(){
            contador = 0;
        }

        virtual bool Operacao(){
            return 0;
        }
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
        void adicionarEntrada(PortaLogica*);
};

class Botao: public PortaLogica{
    bool estado;

    public:
        Botao();
        Botao(bool);

        bool Operacao();
};

class LED: public PortaLogica{
    public:
        LED();

        bool Operacao();
        void adicionarEntrada(PortaLogica*);
};
#endif
