#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <map>
// #include <set>

#include "Database.h"
#include "DatalogProgram.h"

class Interpreter {
   private:
    DatalogProgram datalog;
    Database database;

   public:
    // Interpreter() {}
    Interpreter(DatalogProgram d) {
        datalog = d;
        // database = makeDatabase();
    }
    // DELETE NEW RELATIONS MADE
    // Database makeDatabase() {
    //     std::string key;
    //     std::map<std::string, Relation*> newDb;

    //     for (size_t i = 0; i < datalog.getNumSchemes(); i++) {
    //         key = datalog.getSchemeName(i);
    //         Relation* newRelation = new Relation(key);
    //         // std::set<Tuple> relationBody;

    //         // std::cout << datalog.getSchemeName(i);

    //         for (size_t j = 0; j < datalog.getNumFacts(); j++) {
    //             // std::cout << datalog.getFactsName(j);
    //             // std::cout datalog.getFacts();
    //             std::vector<std::string> vec;
    //             if (datalog.getFactName(j) == key) {
    //                 newRelation->addTuple(Tuple(datalog.get));
    //             }
    //             // std::cout << i << " " << datalog.getFact(i) << " ";
    //         }
    //         std::cout << std::endl;
    //         newDb.insert({key, newRelation});
    //         // newDb.insert({key, new Relation(key, )});
    //     }

    //     return newDb;
    // }
    // Relation* evaluatePredicate() {}
    // void evaluateQueries() {}
    // Algorithm

    // for each scheme ‘s’
    //      create a relation using name and parameter values from ‘s’
    // for each fact ‘f’
    //      make a tuple ‘t’ using the values from ‘f’
    //      add ‘t’ to relation with the same name as ‘f’
    // for each query ‘q’
    //      get the relation ‘r’ with the same name as the query ‘q’
    //      select for each constant in the query ‘q’
    //      select for each pair of matching variables in ‘q’
    //      project using the positions of the variables in ‘q’
    //      rename to match the names of variables in ‘q’
    //      print the resulting relation
};

#endif