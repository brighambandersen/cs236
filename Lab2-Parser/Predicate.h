#ifndef PREDICATE_H
#define PREDICATE_H

#include <string>
#include <vector>

#include "Parameter.h"
using namespace std;

class Predicate {
   private:
    string name;
    vector<Parameter> paramList;

   public:
    Predicate() {}
    Predicate(string predicateName, vector<Parameter> listOfParameters) {
        name = predicateName;
        paramList = listOfParameters;
    }
    string toString() const {
        string predStr = "";
        predStr += name + "(";
        for (unsigned int i = 0; i < paramList.size(); i++) {
            if (i > 0) {
                predStr += ",";
            }
            predStr += paramList.at(i).toString();
        };
        predStr += ")";
        return predStr;
    }
};

#endif