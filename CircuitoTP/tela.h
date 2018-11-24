#ifndef TELA_H
#define TELA_H

enum Escolhas {E, OU, OU_EXCLUSIVO, NAO, BOTAO, LED, DEFAULT};

class tela {
    Escolhas escolha;
public:
    tela();
};

#endif
