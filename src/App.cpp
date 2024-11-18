#include "include/App.hpp"
#include <cstdint>
#include <iostream>
#include <vector>

void App::printIntroText() {
    std::cout << "This is Kleefuchs's OpenVoca Learning Software!\n Version: 0.0.1\n";
}

void App::run() {
    this->printIntroText();
    std::string inPath = "";
    std::cin >> inPath;
    std::cin.get();
    std::vector<std::string> splitUpVocaFile = this->dataReader.readVocaFile(inPath);
    for(uint16_t i = 0; i < splitUpVocaFile.size(); i++) {
        this->dataList.push_back(this->dataSeperator.seperate(splitUpVocaFile.at(i)));
    }
    while(dataList.size() > 0) {
        for(uint16_t currentDataIndex = 0; currentDataIndex < dataList.size(); currentDataIndex++) {
            if(this->cliInterrogator.askForSolution(this->dataList.at(currentDataIndex))==true) {     
                dataList.at(currentDataIndex).print();
                dataList.erase(dataList.begin() + currentDataIndex);
            } else {
                dataList.at(currentDataIndex).print();
            }
        }
    }
}