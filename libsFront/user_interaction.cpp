#include "user_Interaction.h"
#include <iostream>
#include <limits>

void FirstDate::InteractionOptionCrud(){
    do {
        std::cout << "\n1- Criar Produto\n2-Listar Produto\n3-Editar Produto\n4-Remover Produto" << std::endl;
        std::cin >> opcao;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Digite um número válido de 1 a 4.\n";
            exit = false;
        } else if (opcao >= 1 && opcao <= 4){
            CrudOption(opcao);
        } else {
            std::cout << "Escolha um número de 1 a 4.\n";
            exit = false;
        }
    }while (!exit);
};

void FirstDate::CrudOption(int opcao){
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

                InteractionOptionCrud();

                break;
            }
            case 2:{
                std::cin.ignore();
                readeList.ListItens();
                std::cin.ignore();
                InteractionOptionCrud();
                break;
            }
            case 3:{
                int sherchID;
                std::cout << "Editar ID: ";
                std::cin >> sherchID;
                upDateItens.Update(id);
                std::cin.ignore();
                InteractionOptionCrud();
                break;
            }
            case 4:{
                int sherchID;
                std::cout << "Deletar ID: ";
                std::cin >> sherchID;
                //deletItrem.Verification();
                deletItrem.DelItrem(sherchID);
                std::cin.ignore();
                InteractionOptionCrud();
                break;
            }
        };
    }while (!exit == 0);
};