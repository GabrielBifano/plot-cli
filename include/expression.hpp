#ifndef EXPRESS_H
#define EXPRESS_H

#include <map>
#include <vector>
#include <string>

struct control {

    // The highest operator level of priority int he expression
    int priorityLevel = 0;

    // The ammount of each operator in the expression
    int equalOperators = 0;
    int sumOperators = 0;
    int productOperators = 0;
    int powerOperators = 0;
};

class Expression {

    public:
        
        Expression(std::string);
        
        void calculateMe();

        double getValue();
        bool getState();

    private:
        
        void parseCalcOrder(control panel);

        void calcEquals(int quantity);
        void calcSums(int quantity);
        void calcProducts(int quantity);
        void calcPowers(int quantity);

        double getNumberFromExpression(int pos, char orientation);

        double value;
        bool isTrue;

        std::string expression; // É transformada numa string C assim que construída
        std::map<char, std::vector<int>> expressionOperators;
};

#endif