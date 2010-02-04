//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// Class-FastaReader
// Class definition for FASTA file reader object
// Copyright 2009 Gabor T. Marth, Boston College
// All rights reserved
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#ifndef CLASS_FASTAREADER_H
#define CLASS_FASTAREADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <iterator>
#include <algorithm>

using std::ios;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::istream;
using std::fstream;
using std::cin;
using std::cout;
using std::clog;
using std::endl;
using std::string;

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// utility routines
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// type definitions
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Bed data item structure
//------------------------------------------------------------------------------
struct FastaData {
  string name;
  string header;
  string sequence;
};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


class FastaReader {

public:

  //----------------------------------------------------------------------------
  // public functions
  //----------------------------------------------------------------------------

  // constructor
  FastaReader(
	    string fn = ""
	   );
  
  // open
  bool open(string fn);

  // close
  bool close();

  // initialize
  bool initialize();

  // isOpen
  bool isOpen();

  // getNextEntry
  bool getNextEntry(FastaData &);

  //----------------------------------------------------------------------------
  // public variables
  //----------------------------------------------------------------------------

private:

  //----------------------------------------------------------------------------
  // private variables
  //----------------------------------------------------------------------------
  
  // file name
  string fileName;

  // file handle
  ifstream fasta;

  // entry name
  string name;
  
  // entry header
  string header;
};

#endif
