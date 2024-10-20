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
    std::vector<std::string> splitUpVocaFile = this->dataReader.readVocaFile(inPath);
    for(uint16_t i = 0; i < splitUpVocaFile.size(); i++) {
        this->dataSeperator.seperate(splitUpVocaFile.at(i)).print();
    }
}