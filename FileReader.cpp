//
// Created by brekol on 03.03.16.
//

#include "FileReader.h"






list<string> FileReader::readFile(string fileName) {
    list<string> result;
    ifstream file(fileName);
    for(string line; getline(file, line ); )
    {
        result.push_back(line);
    }
    return result;

}
