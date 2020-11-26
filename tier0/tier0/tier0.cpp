#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <iostream>
#include <limits.h>
#include <tchar.h>
#include <conio.h>
#include "tier0.h"
//pausne kdyz pouzito
int Pause() {
    std::cout << "Press any key to continue...";
    _getch();
    return 0;
}
//classa pro void
class delX {
public:
    std::string delA;
    std::string delB = "";
};
//kdyz pouzito tak by to mnelo fungovat jako void a resetovat to co se tam napise
int Void() {
    delX del;
    if (del.delA == del.delB) {
        del.delA = "";
    }
    return 0;
}












/*
// Produce the next value in the sequence.
// Returns true on success, false on overflow.
bool fibonacci_next()
{
    // check to see if we'd overflow result or position
    if ((ULLONG_MAX - previous_ < current_) ||
        (UINT_MAX == index_))
    {
        return false;
    }

    // Special case when index == 0, just return b value
    if (index_ > 0)
    {
        // otherwise, calculate next sequence value
        previous_ += current_;
    }
    std::swap(current_, previous_);
    ++index_;
    return true;
}

// Get the current value in the sequence.
unsigned long long fibonacci_current()
{
    return current_;
}

// Get the current index position in the sequence.
unsigned fibonacci_index()
{
    return index_;
}
*/