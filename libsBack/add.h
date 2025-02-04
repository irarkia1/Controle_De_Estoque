#ifndef ADD_H
#define ADD_H

//libs standard
#include <iostream>
#include <fstream>
#include <sstream>

class AddProduct{
    private:
        //var 
            int idProduto;
            std::string nomeProduto;
            double quantidade
            int embalagemUnidade;
            double embalagemMetro, embalagemlitros, embalagemMetroCubico, EmbalagemMetroQuadrado;

    protected:
        bool AddExist(int id);

    public:
        //var 
        
        //Method
           void CrudAddProduct(int id, std::string nome, double quantidade);
    

};

#endif //ADD_H