//libs create
#include "add.h"

void crudAddProduct(int id, std::string nome, int quantidade){
    ofstream addFiler("Estoque.txt", ios::app);

}

bool AddExist(int id){
    std::ifstream consultIdFiler("Estoque.txt");
    if(!consultIdFiler){
        std::cerr << "Erro ao consultar o ID" << std::endl;
        return false;
    }

    std::string linha, lixo;
    int idList;

    while (getline(consultIDFiler, linha)) {
        std::stringstream ss(linha);
        std::string tempString;

        try{
            getline(ss, tempString, ",");
            idList = stoi(tempString);

            if(idList == id){
            return true;

            }
        }catch(const std::exception &e){
            std::cerr << "Erro ao processar linha" << linha << std::endl;
            continue;
        };
    }
    return false;
}

