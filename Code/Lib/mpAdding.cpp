#include "mpAdding.h"

namespace mp {

int AddTwoNumbers1(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int AddTwoNumbers2(const int& a, const int& b)
{
    int c;
    c = a + b;
    return c;
}

void AddTwoNumbers3(int* a, int* b, int* output)
{
    *output = *a + *b;
}

void AddTwoNumbers4(const int* const a, const int* const b, int* const output)
{
    *output = *a + *b;
}

}