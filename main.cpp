/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tiffany Thani
 */

/*
    Can we declare a non-reference function argument const (e.g., voidf(const int);)? What might that mean? Why might we want to do that? Why don't people do that often? Try it; write out a couple of small programs to see what works.

    Answer to Question:
    Yes, this is allowed but there's really no point.  It would make sense to declare the argument const if it was a reference, because then we would be protecting the variable in the calling function from being corrupted.  However, since the variable in question is not a reference, but rather is a copy of the variable in the calling function, not changing it (i.e. declaring it a const parameter) has no benefits.  It just gives us unnecesary restrictions.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int add_one(const int x){
    int new_x = x + 1;

    // might want to do this but can't 
    //x = x + 1; 
    return new_x;
}

string concat(const string s1, const string s2){
    // might want to do this but cant
    //s1 += s2;

    string s3 = s1 + s2;
    return s3;
}

double square(const int x){
    // might want to do this then return x but can't 
    //x = x*x;
    return x*x;
}
