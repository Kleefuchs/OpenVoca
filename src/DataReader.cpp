

#include "include/DataReader.hpp"
#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> DataReader::readVocaFile(std::string path) {
    std::cout << "Opening " << path << "\n";
    std::ifstream fileReader(path);
    std::cout << "Opened succesfully!\n";
    std::vector<std::string> splitUpVocaFile;
    std::string tmpString;
    while(std::getline(fileReader, tmpString)) {
        tmpString.append("\n");
        splitUpVocaFile.push_back(tmpString);
    }
    return splitUpVocaFile;
}