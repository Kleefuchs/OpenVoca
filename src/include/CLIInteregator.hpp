#ifndef VOCA_CLI_INTERREGATOR_HPP
#define VOCA_CLI_INTERREGATOR_HPP

#include "Data.hpp"
#include "InterRogator.hpp"

class CLIInterRogator : public InterRogator {
    private:
    public:
        bool askForSolution(Data data);
};

#endif