#include "../include/consume.hpp"

void consumeInput(std::ifstream& in, std::ofstream& out){

    int value;
    std::string command, expression;

    while(in >> command){

        if(command == "CALC"){
            
            std::getline(in, expression);
            value = calculateExpression(expression);
        }
    }
}