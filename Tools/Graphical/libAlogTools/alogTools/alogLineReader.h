#ifndef _alogLineReader_h_
#define _alogLineReader_h_

#include <cstdio>
#include <cstring>
#include <cstdlib>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

#include "recordTypes.h"

// This class uses index records to find lines in the alog
class alogLineReader
{
    public:
        alogLineReader();
        ~alogLineReader();

        std::ifstream  m_alogFileStream;

        bool Open( std::string alogFilename );
        void Read( aloglib::idxRec alogRec, std::string & line );
};

#endif // _alogLineReader_h_

