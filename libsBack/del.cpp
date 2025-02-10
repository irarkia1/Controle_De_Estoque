//libs create
#include "del.h"

void DeletItrem::DelItrem(int id){
    std::ifstream deletProduct("Estoque.txt");
    std::ofstream tempFile("TempEstoque.txt");

    if(!deletProduct.is_open() || !tempFile.is_open()){
        std::cerr << "Erro ao abrir arquivo" << std::endl;
        return;
        
    }
    std::string linha;
    bool encontrado = false;
    
    while (getline(deletProduct, linha)) {
        std::stringstream ss(linha);
        std::string temp;
        int idShersh;
            
        getline(ss, temp, ',');
        idShersh = stoi(temp);

        if (idShersh == id) {
            encontrado = true;
            continue;
        }
        tempFile << linha << std::endl;
    }

    deletProduct.close();
    tempFile.close();

    if(encontrado){
        remove("Estoque.txt");
        rename("TempEstoque.txt","Estoque.txt" );
        std::cout << "Produto removido com sucesso!" << std::endl;
    }else{
        remove("TempEstoque.txt");
        std::cout << "ID não encontrado." << std::endl;
    }

}