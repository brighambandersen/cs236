#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "Database.h"
#include "DatalogProgram.h"

class Interpreter {
   private:
    DatalogProgram datalog;

   public:
    Interpreter(DatalogProgram d) {
        datalog = d;
    }
    // Make an Interpreter class that
    //      Takes a DatalogProgram (the vectors of schemes, facts, rules, and queries)
    //      Stores the DatalogProgram as a data member
    //      Makes a Database using the schemes and the facts, and stores it as a data member
    //      Will evaluate the queries in Part B and the rules in project 4
};

#endif