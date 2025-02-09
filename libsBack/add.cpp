//libs create
#include "add.h"


//verfication if exist filer
bool AddProduct::fileExists(const std::string &filename) {
        struct stat buffer;
        return (stat(filename.c_str(), &buffer) == 0);
    };

// verification if exist id    
bool AddProduct::AddExist(int id){
    bool existFiler = fileExists("Estoque.txt");
    std::ifstream consultIdFiler("Estoque.txt");
    
    std::string linha;
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
                std::cerr << "Erro ao processar linha: " << linha << std::endl;
                continue;
            }
        }
    }else{
         std::cerr << "Erro ao consultar o ID" << std::endl;
         return false;
    }
    consultIdFiler.close();
    return false;
}

//criet new register
void AddProduct::CrudAddProduct(int id, std::string nome, double quantidade){
    std::ofstream addFiler("Estoque.txt", std::ios::app);

    bool existID = AddExist(id);
    //std::cout << "Retorno pesquisa ID:"<<existID <<"\n"; //DEBUG
    if(!existID){
        if(addFiler.is_open()){
            limparTela();
            std::cerr << "Adicionado com sucesso\n"<< std::endl;
            
            addFiler << id << "," << nome << "," << quantidade;
        };
        addFiler.close();
    }else{
        limparTela();
        std::cout << "ID ja existe" << std::endl;
    };
    
}

//clear windows

void AddProduct::limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

