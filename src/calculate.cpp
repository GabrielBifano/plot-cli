#include "../include/calculate.hpp"
#include <iostream> // apagar posteriormente

int calculateExpression(std::string expression){

    int firstStop = 0, secondStop = 0;
    expression.c_str();

    for(int i = 0; expression[i] != '\0'; i++){

        if(expression[i] == '(') firstStop = i;
        if(expression[i] == ')') secondStop = i;
    }

    if(firstStop >= secondStop) {

        std::cout<<"Expressao invalida, atente-se ao parenteses\n";
        return NULL;
    }
    if(firstStop + 1 == secondStop){

        std::cout<<"Expressao invalida, parenteses vazios\n";
        return NULL;
    }

    

    return 0;
}


// int main(){

//     calculateExpression("(1 + 1) * ( (3 + 4) * 2)");

//     return 0;
// }