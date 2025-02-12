#include "up.h"


void UpDateItens::Update(int id){
    std::ifstream updateFiler("Estoque.txt");

    if(!updateFiler.is_open()){
        std::cerr << "Erro ao abrir o arquivo" << std::endl;
    };
    std::vector<std::string> linhas;
    std::string linha;
    bool encontrado = false;

    while (getline(updateFiler, linha)) {
        int idSersh;
        std::string temp;
        std::stringstream ss(linha);

        getline(ss, temp, ',');
        idSersh =  stoi(temp);

        if(idSersh == id){
            encontrado = true;
            std::string novoNome;
            int novaQuantidade;
            int escolha;

            std::cout << "O que deseja editar?\n";
            std::cout << "1 - Nome\n";
            std::cout << "2 - Quantidade\n";
            std::cin >> escolha;

            std::stringstream novaLinha;
            novaLinha << idSersh << ",";

            std::string nomeAtual;
            int quantidadeAtual;

            getline(ss, nomeAtual, ',');
            ss >> quantidadeAtual;

            if (escolha == 1) {
                std::cout << "Novo nome: ";
                std::cin.ignore();
                std::getline(std::cin, novoNome);
                novaLinha << novoNome << "," << quantidadeAtual;
            } else if (escolha == 2) {
                std::cout << "Nova quantidade: ";
                std::cin >> novaQuantidade;
                novaLinha << nomeAtual << "," << novaQuantidade;
            } else {
                std::cout << "Opção inválida." << std::endl;
                return;
            }
            linhas.push_back(novaLinha.str());
        }else{
            linhas.push_back(linha);
        }
    }

    updateFiler.close();

    if (!encontrado) {
        std::cout << "ID não encontrado!" << std::endl;
        return;
    }

     // Sobrescrevendo o arquivo com as atualizações
     std::ofstream outFile("Estoque.txt");
    if (!outFile) {
         std::cerr << "Erro ao abrir o arquivo para escrita" << std::endl;
         return;
    }

    for (const auto& l : linhas) {
        outFile << l << "\n";
    }

    outFile.close();
    std::cout << "Item atualizado com sucesso!" << std::endl;

}

