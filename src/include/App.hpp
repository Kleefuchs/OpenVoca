#ifndef VOCA_APP_HPP
#define VOCA_APP_HPP

#include "DataReader.hpp"
#include "DataSeperator.hpp"
#include <vector>

class App {
    private:
        DataReader dataReader;
        std::vector<Data> dataList;
        DataSeperator dataSeperator;
        void printIntroText();
    public:
        void run();
};

#endif