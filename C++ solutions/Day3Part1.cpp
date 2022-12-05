#include <iostream> 
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
  string s;
  ifstream dataFile("aoc22day3.txt");
  int prioritySum = 0;
  
  while (getline(dataFile, s)) {
    string cont1 = s.substr(0, s.length()/2);
    string cont2 = s.substr(s.length()/2,s.length());

    for (int item = 0; item < cont1.length(); item ++){
      //as of now wrong (only gets first not common letter)
      char c = cont1[item];
      if (find(cont2.begin(), cont2.end(), c) != cont2.end()){
        //found same item
        int ascii = c; 
        if (ascii>96){
          ascii -= 96;
        }
        else{
          ascii -= 38;
        }
        prioritySum += ascii;
        break;
      }
    }
  }
  cout << prioritySum << endl;
}
