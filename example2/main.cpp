#include "version.h"

#include <iostream>

int main (int, char **){

    std:: cout <<  " Hello world form cmake!!! " 
       << std::endl;

    std:: cout <<  " Version =  " << examples:: getVersion() 
       << std::endl;

}
           
