#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
#include <string>
#include <array>
#include <stdexcept>
#include <stdio.h>
#include "snowman.hpp"
using namespace std;
using namespace ariel;

int main(){
    cout << "Snowman #1:\nWith Fez hat, dot mouth, two bigger dot eyes, two downwards arms, button torso and a flat base:\n" <<  ariel::snowman(32223313) << endl;
    cout << "Snowman #2:\nWith Straw hat, line mouth, dot and biggest dot eyes, one upwards and one downwards arm, vest torso and feet base:\n" <<  ariel::snowman(13132322) << endl;

    return 0;
}