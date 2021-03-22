#pragma once
#include <string>
#include "Direction.hpp"
#include <vector>
using ariel::Direction;
using namespace std;

namespace ariel
{
    class Board
    {
        vector<vector<char>> theBoard;
        
        public:
        Board(); // double check how to make constuctor list
        void post(unsigned int row, unsigned int col, Direction direction, string message);
        std::string read(unsigned int row, unsigned int col, Direction direction, unsigned int numOfChars);
        void show();
        // deconstructor? / clean up function?
    };

}
