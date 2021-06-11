// Extraclase_4.cpp : Defines the entry point for the application.
//

#include "Extraclase_4.h"
#include <iostream>
#include "src/Md5.h"
#include "src/SHA1.h"
using namespace std;



int main() {

    std::string data = "Hello World";

    cout << "Palabra para procesar: 'Hello World'" << endl;
    cout << "-----------------------------" << endl;

    cout << "Hash MD5" << endl;

    std::string data_hex_digest;
    md5 hash;
    hash.update(data.begin(), data.end());
    hash.hex_digest(data_hex_digest);
    std::cout << data_hex_digest << std::endl;

    cout << "-----------------------------" << endl;
    cout << "Hash SHA-1" << endl;
    sha1(data);
    cout << "-----------------------------" << endl;
        

    return 0;

}