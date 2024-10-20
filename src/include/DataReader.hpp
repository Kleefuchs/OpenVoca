#ifndef VOCA_DATAREADER_HPP
#define VOCA_DATAREADER_HPP

#include <fstream>
#include <string>
#include <vector>

class DataReader {
    private:
    public:
        std::vector<std::string> readVocaFile(std::string path);
};

#endif