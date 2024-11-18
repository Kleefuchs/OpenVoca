#ifndef VOCA_INTERREGATOR_HPP
#define VOCA_INTERREGATOR_HPP

#include "Data.hpp"

class InterRogator {
    private:
    public:
        /*You should not actually use this version on its own. Just exists as a Base for the InterRogator classes*/
        virtual bool askForSolution(Data data);
};

#endif