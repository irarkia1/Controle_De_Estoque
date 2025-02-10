#include "read.h"

void ReadeList::ListItens(){
    std::string linha;
    std::ifstream readeItens("Estoque.txt");

    if(!readeItens.is_open()){
        std::cerr << "Erro ao abrir o arquivo";
    }else{
        while (getline(readeItens,linha)) {
            std::stringstream ss(linha);
            std::string temp;
            int id;
            std::string nome;
            double quantidade;
            //ID
            std::getline(ss,temp,',');
            if (!temp.empty()) {
                id = std::stoi(temp);
            }else {
                std::cerr << "Erro ao ler ID\n";
                continue;
            }
            //nome
            std::getline(ss,nome,',');

            //quantidade
            std::getline(ss,temp,',');
            if (!temp.empty()) {
                quantidade = std::stod(temp);
            } else {
                std::cerr << "Erro ao ler ID\n";
                continue;
            }

             std::cout << "ID: " << id << ", \tNome: " << nome << ", \tQuantidade: "
                  << std::fixed << std::setprecision( (quantidade == (int)quantidade) ? 0 : 2 )
                  << quantidade << std::endl;
        }
    }
    readeItens.close(); 
};