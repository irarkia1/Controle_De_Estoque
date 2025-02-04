#ifndef USER_INTERACTION_H
#define USER_INTERACTION_H

//libs standard
#include <iostream>
#include <sstream>
#include <locale>

//libs create
#include "../libsBack/add.h"

AddProduct addProduct;

typedef struct{
    public:
       // setlocale(LC_ALL, "")
        //var
            int id, embalagem, opcao;
            double quantidade;
            std::string nome;

        
        //Method
            void InteractionOptionCrud(){
                std::cout << "\n1- Criar Produto\n2-Listar Produto\n3-Editar Produto\n4-Remover Produto" << std::endl;
                cin >> opcao;
            }

            void CrudOption(int opcao){
                int exit = 0;
                do {
                switch (opcao) {
                    case opcao == 1:{
                        addProduct.CrudAddProduct(id, nome, quantidade);
                    }
                }
                }while (!exit == 1)
            }

} FirstDate;
#endif //#define USER_INTERACTION_H