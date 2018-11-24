#ifndef PORTASLOGICA_H
#define PORTASLOGICA_H

class PortasLogica{
    protected:
        int qtdEntradas;

        PortasLogica* entrada1;
        PortasLogica* entrada2;

    public:
        virtual bool Operacao(){
            return 0;
        }
};

class E: public PortasLogica{
    public:
        E();

        bool Operacao();
};

class Ou: public PortasLogica{
    public:
        Ou();

        bool Operacao();
};

class OuExclusivo: public PortasLogica{
    public:
        OuExclusivo();

        bool Operacao();
};

class Nao: public PortasLogica{
    public:
        Nao();

        bool Operacao();
};

class Botao: public PortasLogica{
    bool estado;

    public:
        Botao();

        bool Operacao();
};

class LED: public PortasLogica{
    public:
        LED();

        bool Operacao();
};


#endif
