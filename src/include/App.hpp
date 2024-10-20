#ifndef VOCA_APP_HPP
#define VOCA_APP_HPP

#include "CLIInteregator.hpp"
#include "DataReader.hpp"
#include "DataSeperator.hpp"
#include <vector>

class App {
    private:
        DataReader dataReader;
        std::vector<Data> dataList;
        DataSeperator dataSeperator;
        CLIInteregator cliInteregator;
        void printIntroText();
    public:
        void run();
};

#endif