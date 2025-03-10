#ifndef USER_INTERACTION_H
#define USER_INTERACTION_H

//libs standard
#include <iostream>
#include <sstream>
#include <locale>

//libs create
#include "../libsBack/add.h"
#include "../libsBack/read.h"
#include "../libsBack/del.h"
#include "../libsBack/up.h"

struct FirstDate{
AddProduct addProduct;
ReadeList readeList;
DeletItrem deletItrem;
UpDateItens upDateItens;
    public:
        //var
            int id, embalagem, opcao;
            double quantidade;
            std::string nome;

        
        //Method
            void InteractionOptionCrud();
            void CrudOption(int opcao);
    private:
        //var
            bool exit = true;

};
#endif //#define USER_INTERACTION_H