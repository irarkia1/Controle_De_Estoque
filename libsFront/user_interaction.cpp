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
            }
            case 4:{
                int sherchID;
                std::cout << "Deletar ID: ";
                std::cin >> sherchID;
                //deletItrem.Verification();
                deletItrem.DelItrem(sherchID);
                std::cin.ignore();
                InteractionOptionCrud();
            }
        };
    }while (!exit == 0);
};