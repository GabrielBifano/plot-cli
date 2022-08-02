#include "../include/expression.hpp"

#include <iostream>

// Constructor
Expression::Expression(std::string expression){

    this -> expression = expression;
    this -> expression.c_str();
    this -> value = 0;
    this -> isTrue = false;
}

// Getters
double Expression::getValue(){

    return this -> value;
}

bool Expression::getState(){

    return this -> isTrue;
}

double Expression::getNumberFromExpression(int pos, char orientation){

    double number = 0;
    std::vector<int> numbers;

    if(orientation = 'r'){

        for(int i = pos; expression[i] != '\0'; i++){
            
        }

    } else {


    }
}

// Calculus Functions
void Expression::calcEquals(int quantity){

    bool eqFull = true;
    double firstNumber, secondNumber;

    for(int i = 0; i < expressionOperators['='].size(); i++){

        firstNumber = getNumberFromExpression(expressionOperators['='].at(i), 'r');
        secondNumber = getNumberFromExpression(expressionOperators['='].at(i), 'l');
    }
}

// Calculus Selector
void Expression::parseCalcOrder(control panel){

    switch(panel.priorityLevel){

        case 3:
            std::cout<<"3\n";
        case 2:
            std::cout<<"2\n";
        case 1:
            std::cout<<"1\n";
        case 0:
            calcEquals(panel.equalOperators);
    }
}

// User Interface
void Expression::calculateMe(){
    
    // Variáveis de controle dos operadores
    control panel;

    // ----------------------------------- *
    // Esse loop alimenta o map expressionOperators
    // E adiciona as informações correspondentes na struct panel

    for(int i = 0; expression[i] != '\0'; i++){

        if(expression[i] != ' '){

            if(expression[i] == '=' ||
               expression[i] == '!'){
                
                panel.equalOperators++;
                expressionOperators[expression[i]].push_back(i);
            }
            else if(expression[i] == '+' ||
                    expression[i] == '-'){
                    
                    if(panel.priorityLevel < 1) panel.priorityLevel = 1;
                    panel.sumOperators++;
                    expressionOperators[expression[i]].push_back(i);
            }
            else if(expression[i] == '*' ||
                    expression[i] == '/' ||
                    expression[i] == '%'){
                    
                    if(panel.priorityLevel < 2) panel.priorityLevel = 2;
                    panel.productOperators++;
                    expressionOperators[expression[i]].push_back(i);
            }
            else if(expression[i] == '^'){

                    if(panel.priorityLevel < 3) panel.priorityLevel = 3;
                    panel.powerOperators++;
                    expressionOperators[expression[i]].push_back(i);
            }
        }
    }

    // ----------------------------------- *
    parseCalcOrder(panel); 
}

// Apaga essa joça depois
int main(){

    Expression exp("1 = 1 = = 1");
    exp.calculateMe();
    std::cout<<exp.getState()<<"\n";
    
    return 0;
}