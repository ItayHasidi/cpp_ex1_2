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

// #define MAX 44444444
// #define MIN 11111111
// #define ZERO 0
// #define ONE 1
// #define TWO 2
// #define THREE 3
// #define FOUR 4
// #define FIVE 5
// #define SIX 6
// #define SEVEN 7
// #define EIGHT 8
// #define TEN 10

constexpr int MAX = 44444444, MIN = 11111111, ZERO = 0, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, TEN = 10;

// class ariel{
    // public:
        std::string printHat(int x) {
            std::string str;
            if(x == 1) {
                str += "     \n _===_\n";
            }
            else if(x == 2) {
                str += "  ___ \n .....\n";
            }
            else if(x == 3) {
                str += "   _  \n  /_\\ \n";
            }
            else if(x == 4) {
                str += "  ___ \n (_*_)\n";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printNose(int x) {
            std::string str;
            if(x == 1) {
                str += ",";
            }
            else if(x == 2) {
                str += ".";
            }
            else if(x == 3) {
                str += "_";
            }
            else if(x == 4) {
                str += " ";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printLeftEye(int x) {
            std::string str;
            if(x == 1) {
                str += "(.";
            }
            else if(x == 2) {
                str += "(o";
            }
            else if(x == 3) {
                str += "(O";
            }
            else if(x == 4) {
                str += "(-";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printRightEye(int x) {
            std::string str;
            if(x == 1) {
                str += ".)";
            }
            else if(x == 2) {
                str += "o)";
            }
            else if(x == 3) {
                str += "O)";
            }
            else if(x == 4) {
                str += "-)";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printLeftArm_1(int x) {
            std::string str;
            if(x == 1 || x == 3 || x == 4) {
                str += " ";
            }  
            else if(x == 2) {
                str += "\\";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printLeftArm_2(int x) {
            std::string str;
            if(x == 1) {
                str += "<";
            }
            else if(x == 2 || x==4) {
                str += " ";
            }
            else if(x == 3) {
                str += "/";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printRightArm_1(int x) {
            std::string str;
            if(x == 1|| x == 3 || x == 4) {
                str += " \n";
            }
            else if(x == 2) {
                str += "/\n";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printRightArm_2(int x) {
            std::string str;
            if(x == 1) {
                str += ">\n";
            }
            else if(x == 2 || x == 4) {
                str += " \n";
            }
            else if(x == 3) {
                str += "\\\n";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
        std::string printTorso(int x) {
            std::string str;
            if(x == 1) {
                str += "( : )";
            }
            else if(x == 2) {
                str += "(] [)";
            }
            else if(x == 3) {
                str += "(> <)";
            }
            else if(x == 4) {
                str += "(   )";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str; 
        }

        std::string printBase(int x) {
            std::string str;
            if(x == 1) {
                str += " ( : )\n" ;
            }
            else if(x == 2) {
                str += " (\" \")\n";
            }
            else if(x == 3) {
                str += " (___)\n";
            }
            else if(x == 4) {
                str += " (   )\n";
            }
            else {
                throw std::invalid_argument("Exception");
            }
            return str;
        }
    


        //  0  ,  1   ,     2    ,      3    ,     4    ,     5     ,   6   ,  7
        // hat , nose , left eye , right eye , left arm , right arm , torso , base

        std::string ariel::snowman(int x) {
            if(x < MIN || x > MAX) {
                // error!!
                throw std::invalid_argument("Exception");
                return "";
            }
            
            std::string str;
            std::array<int, EIGHT> arr = {};
            int temp = x;
            for(int i = ZERO; i < EIGHT; i++){ // puts the commands in an array
                const int index = SEVEN-i;
                arr.at(index) = temp % TEN;
                temp /= TEN;
            }

            str += printHat(arr[ZERO]);
            str += printLeftArm_1(arr[FOUR]);
            str += printLeftEye(arr[TWO]);
            str += printNose(arr[ONE]);
            str += printRightEye(arr[THREE]);
            str += printRightArm_1(arr[FIVE]);
            str += printLeftArm_2(arr[FOUR]);
            str += printTorso(arr[SIX]);
            str += printRightArm_2(arr[FIVE]);
            str += printBase(arr[SEVEN]);
            return str;
            
            
        }