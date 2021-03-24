#include "Board.hpp"
#include <iostream>
using namespace ariel;

Board::Board(){}

void Board::post(unsigned int row, unsigned int col, Direction direction, string message)
{
    
}

std::string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int numOfChars)
{
   /* if(numOfChars == 0)
        return "";
    string result;
    for (size_t i = 0; i < numOfChars; i++)
    {
        if(direction == Direction::Vertical)
        {
            result += theBoard.at(row+i).at(col);
        }
        else
        {
            result += theBoard.at(row).at(col+i);
        }
    }*/
    // add cases in which the char is \n or \t.
    return "not yet";
}

void Board::show()
{
}
