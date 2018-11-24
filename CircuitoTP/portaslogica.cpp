#include "portaslogica.h"

E::E(){
    qtdEntradas = 2;
}

bool E::Operacao(){
    return entrada1->Operacao() & entrada2->Operacao();
}

Ou::Ou(){
    qtdEntradas = 2;
}

bool Ou::Operacao(){
    return entrada1->Operacao() | entrada2->Operacao();
}

OuExclusivo::OuExclusivo(){
    qtdEntradas = 2;
}

bool OuExclusivo::Operacao(){
    return entrada1->Operacao() ^ entrada2->Operacao();
}

Nao::Nao(){
    qtdEntradas = 1;
}

bool Nao::Operacao(){
    return !(entrada1->Operacao());
}

Botao::Botao(){
    estado = false;

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
