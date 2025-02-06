//libs create
#include "add.h"
bool AddProduct::AddExist(int id){
    std::ifstream consultIdFiler("Estoque.txt");
    
    std::string linha, lixo;
    int idList;

    if(consultIdFiler.is_open()){ 
        while (getline(consultIdFiler, linha)) {
            std::stringstream ss(linha);
            std::string tempString;

            try{
                getline(ss, tempString, ',');
                idList = stoi(tempString);

                if(idList == id){
                return true;

                }
            }catch(const std::exception &e){
                std::cerr << "Erro ao processar linha" << linha << std::endl;
                continue;
            }
        };
    }else{
         std::cerr << "Erro ao consultar o ID" << std::endl;
    }
    consultIdFiler.close();
    return false;
}

void AddProduct::CrudAddProduct(int id, std::string nome, double quantidade){
    std::ofstream addFiler("Estoque.txt", std::ios::app);
    std::string linha;
    
    if(AddExist(id)){
        if(addFiler.is_open()){
            std::cerr <<"Adicionado com sucesso\n"<< std::endl;
            
            addFiler << id << "," << nome << "," << quantidade;
        }else{
            std::cerr << "Erro ao tentar adicionar novo" << std::endl;
        };
        addFiler.close();
    }
    
}
