#ifndef USER_INTERACTION_H
#define USER_INTERACTION_H

//libs standard
#include <iostream>
#include <sstream>
#include <locale>

//libs create
#include "../libsBack/add.h"


struct FirstDate{
AddProduct addProduct;
    //public:
       // setlocale(LC_ALL, "")
        //var
            int id, embalagem, opcao;
            double quantidade;
            std::string nome;

        
        //Method
            void InteractionOptionCrud();
            void CrudOption(int opcao);

};
#endif //#define USER_INTERACTION_H