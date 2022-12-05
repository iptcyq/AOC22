#include <iostream> 
#include <fstream>
#include <string.h>
using namespace  std;

int main() {
  int totalCal = 0;
  int mostCal = 0;
  string s;
  
  ifstream dataFile("aoc22day1.txt");
  while (getline(dataFile, s)) {
    // Unsure of what the empty line is so I have to check it this way
    if (s.empty() || !s.find_first_not_of("0123456789")){ //new elf
      if (totalCal>mostCal){
        mostCal = totalCal;
        totalCal = 0;
      }
    }
    else{
      int cal = stoi(s);
      totalCal += cal;
    }
  }

  cout << mostCal<<endl;
}

