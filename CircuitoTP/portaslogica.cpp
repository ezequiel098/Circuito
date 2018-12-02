#include "portaslogica.h"

E::E(){
    qtdEntradas = 2;
}
bool E::Operacao(){
    return entrada1->Operacao() && entrada2->Operacao();
}
void E::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
    else
        if(contador==1){
            entrada2 = pL;

            contador++;
        }
}

Ou::Ou(){
    qtdEntradas = 2;
}
bool Ou::Operacao(){
    if(entradaValida())
        return entrada1->Operacao() || entrada2->Operacao();

    return 0;
}
void Ou::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
    else
        if(contador==1){
            entrada2 = pL;

            contador++;
        }
}

OuExclusivo::OuExclusivo(){
    qtdEntradas = 2;
}
bool OuExclusivo::Operacao(){
    if(entradaValida())
        return entrada1->Operacao() ^ entrada2->Operacao();

    return 0;
}
void OuExclusivo::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
    else
        if(contador==1){
            entrada2 = pL;

            contador++;
        }
}

Nao::Nao(){
    entrada2 = NULL;
    qtdEntradas = 1;
}
bool Nao::Operacao(){
    if(entradaValida())
        return !(entrada1->Operacao());

    return 0;
}
void Nao::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
}

Botao::Botao(){
    entrada1 = NULL;
    entrada2 = NULL;

    estado = false;

    qtdEntradas = 0;
}

Botao::Botao(bool e){
    estado = e;

    qtdEntradas = 0;
}

bool Botao::Operacao(){
    return estado;
}


LED::LED(){
    entrada2 = NULL;
    qtdEntradas = 1;
}
bool LED::Operacao(){
    if(entradaValida())
        return entrada1->Operacao();

    return 0;
}
void LED::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
}
