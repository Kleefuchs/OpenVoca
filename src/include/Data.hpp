#ifndef VOCA_DATA_HPP
#define VOCA_DATA_HPP

#include <string>
#include <vector>

class Data {
    private:
    public:
        std::string learnWord;
        std::vector<std::string> solutions;
        std::string extraInfo;
        void print();
};

#endif