#ifndef PortasLogica_H
#define PortasLogica_H

class PortaLogica{
    protected:
        int qtdEntradas;

        PortaLogica* entrada1;
        PortaLogica* entrada2;

    public:
        virtual bool Operacao(){
            return 0;
        }
};

class E: public PortaLogica{
    public:
        E();

        bool Operacao();
};

class Ou: public PortaLogica{
    public:
        Ou();

        bool Operacao();
};

class OuExclusivo: public PortaLogica{
    public:
        OuExclusivo();

        bool Operacao();
};

class Nao: public PortaLogica{
    public:
        Nao();

        bool Operacao();
};

class Botao: public PortaLogica{
    bool estado;

    public:
        Botao();

        bool Operacao();
};

class LED: public PortaLogica{
    public:
        LED();

        bool Operacao();
};
#endif
