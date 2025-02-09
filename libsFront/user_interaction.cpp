#include "user_Interaction.h"

void FirstDate::InteractionOptionCrud(){
    std::cout << "\n1- Criar Produto\n2-Listar Produto\n3-Editar Produto\n4-Remover Produto" << std::endl;
     std::cin >> opcao;
    CrudOption(opcao);
};

void FirstDate::CrudOption(int opcao){
    int exit = 1;
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
                exit = 0;
                break;
            };
        };
    }while (!exit == 0);
};