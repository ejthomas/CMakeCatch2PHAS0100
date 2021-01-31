#include "catch.hpp"
#include "mpCatchMain.h"
#include "mpAdding.h"

TEST_CASE("AddTwoNumbers1 correct return value", "Group 1") {
    REQUIRE( mp::AddTwoNumbers1(3,5) == 8 );
}

TEST_CASE("AddTwoNumbers2 correct return value", "Group 1") {
    int a = 6;
    int b = 14;
    REQUIRE( mp::AddTwoNumbers2(a,b) == 20 );
}

TEST_CASE("AddTwoNumbers3 correctly modifies output", "Group 1") {
    int a = 45;
    int b = 72;
    int output = 0;
    int *ap = &a;
    int *bp = &b;
    int *op = &output;
    mp::AddTwoNumbers3(ap,bp,op);
    REQUIRE( *ap == 45 );
    REQUIRE( *bp == 72 );
    REQUIRE( *op == 117 );
}

TEST_CASE("AddTwoNumbers4 returns pointer to correct value", "Group 1") {
    const int a = 512;
    const int b = 128;
    const int *ap = &a;
    const int *bp = &b;
    int output = 0;
    int* const op = &output;
    mp::AddTwoNumbers4(ap,bp,op);
    REQUIRE( *ap == 512 );
    REQUIRE( *bp == 128 );
    REQUIRE( *op == 640 );
}