//libs standard
#include <locale>
//libs create
#include "libsFront/user_Interaction.h"

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    FirstDate firstDate;

    
    firstDate.InteractionOptionCrud();
    return 0;
}

//c++ conEst.cpp libsFront/user_interaction.cpp libsBack/add.cpp libsBack/del.cpp libsBack/read.cpp  libsBack/up.cpp -o Estocom.exe