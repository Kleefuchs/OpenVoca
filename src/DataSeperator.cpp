#include "include/DataSeperator.hpp"
#include <cstdint>
#include <string>
#include <vector>

Data DataSeperator::seperate(std::string input) {
    Data data;
    std::string tmpString = "";
    uint16_t iterator = 0;
    //figuring out the learnword:
    while(true) {
        if(input.at(iterator)=='=') {
            iterator++;
            break;
        } else {
            tmpString.push_back(input.at(iterator));
        }
        iterator++;
    }
    data.learnWord = tmpString;
    //Figuring out the solutions:
    std::vector<std::string> tmpVector;
    while(true) {
        tmpString = "";
        if(input.at(iterator)=='\n') {
            iterator++;
            break;
        } else {
            while(true) {
                if(input.at(iterator)==',') {
                    tmpVector.push_back(tmpString);
                    break;
                } else if (input.at(iterator)=='\n') {
                    tmpVector.push_back(tmpString);
                    iterator--;
                    break;
                } else {
                    tmpString.push_back(input.at(iterator));
                }
                iterator++;
            }
            iterator++;
        }
    }
    data.solutions = tmpVector;
    return data;
}