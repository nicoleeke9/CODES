#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int MAXFILES = 10;
const int MAXROWS = 1000;
string files[MAXFILES];
int main(){
   int num;
   int total=0;
   int i=0;
   string filename;
   getline(cin,filename);
   ofstream outputFile;
outputFile.open("output.txt");
    ifstream inputFile;
   while(inputFile>>num)
   
  {
   inputFile.open(files[i]);
   total+=num;

   i++;
}


 return 0;  
}
//There are 2 distinct approaches for this problem:
//1. Sequential processing - one file at a time. You need total[MAXROWS] array 
//2. Row-wise processing - open all input files. Read one value from each, total them and output.
//                         need an array of ifstream objects open for reading files in parallel.
/*#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int MAXFILES = 10;
const int MAXROWS = 1000;

//There are 2 distinct approaches for this problem:
//1. Sequential processing - one file at a time. You need total[MAXROWS] array 
//2. Row-wise processing - open all input files. Read one value from each, total them and output.
//                         need an array of ifstream objects open for reading files in parallel.