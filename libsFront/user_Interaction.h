#ifndef USER_INTERACTION_H
#define USER_INTERACTION_H

//libs standard
#include <iostream>
#include <sstream>
#include <locale>

//

typedef struct{
    public:
       // setlocale(LC_ALL, "")
        //var
            int id, embalagem, opcao;
            double quantidade;
            std::string Nome;
        
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
                        
                    }
                }
                }while (!exit == 1)
            }

} FirstDate;
#endif //#define USER_INTERACTION_H