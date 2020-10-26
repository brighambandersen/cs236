#ifndef DATABASE_H
#define DATABASE_H

#include <map>

#include "Relation.h"

class Database {
   private:
    // contains a map from name (string) to Relation
    std::map<std::string, Relation*> relationMap;

   public:
    // Database(string paramVal) {
    //     value = paramVal;
    // }
    // ONLY USE FOR Database in Project 3 -- Look up a relation when you are given the relation's name
    Relation* getRelation(std::string name) {  // FIXME - Should this be *pointer?  Should this be const?
        Relation* relPtr = relationMap[name];
        return relPtr;
    }

    // //iterate through map
    // for(const auto& pair : mymap){
    // string name = pair.first; //gets key
    // Relation* rel = pair.second; //gets value
    // }
};

#endif