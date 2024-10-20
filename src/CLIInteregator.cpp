#include "include/CLIInteregator.hpp"
#include "include/Data.hpp"
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

bool CLIInteregator::aksForSolution(Data data) {
    std::cout << "What is " << data.learnWord << " in target language?";
    std::vector<std::string> answers;
    std::string answerString = "";
    std::cin.get();
    std::getline(std::cin, answerString);
    std::string tmpString = "";
    for(uint16_t currentCharIndex = 0; currentCharIndex < answerString.size(); currentCharIndex++) {
        if(answerString.at(currentCharIndex)==',') {
            answers.push_back(tmpString);
            tmpString = "";
        } else {
            tmpString.push_back(answerString.at(currentCharIndex));
        }
    }
    answers.push_back(tmpString);
    bool atLeastOneIsRight = false;
    for(uint16_t answerIndex = 0; answerIndex < answers.size(); answerIndex++) {
        for(uint16_t solutionIndex = 0; solutionIndex < data.solutions.size(); solutionIndex++) {
            if(answers.at(answerIndex)==data.solutions.at(solutionIndex)) {
                atLeastOneIsRight = true;
            }
        }
    }
    return atLeastOneIsRight;
}