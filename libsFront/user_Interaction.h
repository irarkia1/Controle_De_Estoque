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
                std::cin >> opcao;
                CrudOption(opcao);
            };

            void CrudOption(int opcao){
                int exit = 0;
                do {
                switch (opcao){
                    case 1:{
                        std::cout << "ID:";
                        std::cin >> id;
                        std::cout << "Nome do produto:";
                        std::cin.ignore();
                        std::getline(std::cin, nome);
                        std::cout << "Quantidade:";
                        std::cin >> quantidade;
                        addProduct.CrudAddProduct(id, nome, quantidade);
                        break;
                    };
                };
                }while (!exit == 1);
            };

} FirstDate;
#endif //#define USER_INTERACTION_H