// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program can display the month of the year that represents that number

#include <iostream>
#include <string>


int main()  {
    // this function can convert integers into months

    std::string monthString;
    int monthNumber;

    std::cout << "This program can display the month of the year that"
                  " represents that number" << std::endl;

    // input
    std::cout << "Enter a number of a month: " << std::endl;
    std::cin >> monthString;
    std::cout << "" << std::endl;

    // process
    monthNumber = atoi(monthString.c_str());

    // process and output
    switch (monthNumber) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << monthNumber << " is not a month!" << std::endl;
    }
}
