#include <string>
#include <fstream>
#include <iostream>

#include "../testin/t1.txt"

void parseArgs(int argc, char ** argv, std::string* inputName, std::string* outputName){

    *inputName = "input";
    std::string aux;
    int opt = 0;

    for(int i = 1; i < argc; i++){

        // Comandos referentes a opção escolhida
        if(opt == 1){
            *inputName = argv[i];
            opt = 0;
            continue;
        }
        if(opt == 2){
            *outputName = argv[i];
            opt = 0;
            continue;
        }
        //-----------------------------------*

        aux = argv[i];

        // Altera a opção para permitir a captura pelos ifs acima
        if(aux == "-i" || aux == "-I") opt = 1;
        if(aux == "-o" || aux == "-O") opt = 2;
    }
}

int main(int argc, char ** argv){

    std::ifstream in;
    std::string inputName, outputName;

    parseArgs(argc, argv, &inputName, &outputName);
    
    in.open(inputName);
    if(!in.is_open()){std::cout<<"Arquivo de entrada nao encontrado\n"; return;}



    return 0;
}