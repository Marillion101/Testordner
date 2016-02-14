//
//  main.cpp
//  MaticeReader
//
//  Created by Simon Walter on 30.09.15.
//  Copyright © 2015 Simon Walter. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
//#include <Eigen/Dense>
//#include "/Users/simonwalter/Desktop/Eigen/Eigen/Dense"

using namespace std;

std::string getcwd_string( void ) {
    char buff[PATH_MAX];
    getcwd( buff, PATH_MAX );
    std::string cwd( buff );
    return cwd;
}

int main(int argc, const char * argv[]) {
    
    string line;
    ifstream myfile;
    
    myfile.open("matrizen.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    
    else cout << "Unable to open file \n";
    
    std::cout << getcwd_string();
    
    
    return 0;
}
