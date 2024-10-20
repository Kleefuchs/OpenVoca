#include "include/Data.hpp"
#include <cstdint>
#include <iostream>

void Data::print() {
    std::cout << "learnWord: " << this->learnWord << "\n";
    for(uint16_t currentStringIndex = 0; currentStringIndex < this->solutions.size(); currentStringIndex++) {
        std::cout << "solution " << (currentStringIndex + 1) << ": " << this->solutions.at(currentStringIndex) << "\n";
    }
    std::cout << "extraInfo: " << this->extraInfo << "\n";
}