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
    return entrada1->Operacao() || entrada2->Operacao();
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
    return entrada1->Operacao() ^ entrada2->Operacao();
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
    qtdEntradas = 1;
}
bool Nao::Operacao(){

    return !(entrada1->Operacao());
}
void Nao::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
}

Botao::Botao(){
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
    qtdEntradas = 1;
}
bool LED::Operacao(){
    return entrada1->Operacao();
}
void LED::adicionarEntrada(PortaLogica* pL){
    if(contador==0){
        entrada1 = pL;

        contador++;
    }
}
