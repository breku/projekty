//
// Created by brekol on 03.03.16.
//

#ifndef FILE_IO_FILEREADER_H
#define FILE_IO_FILEREADER_H

#include "iostream"
#include "list"
#include <fstream>
#include "PROJECT.h"

using namespace std;

class FileReader {
public:
    list<string> readFile(string fileName);
};

#endif //FILE_IO_FILEREADER_H
