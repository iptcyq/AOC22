#include <iostream> 
#include <fstream>
#include <algorithm>
using namespace  std;

int main() {
  string s;
  
  char ref[] = {'X','A','Y','B','Z','C'};
  int points = 0;

  //int n = sizeof(ref)/sizeof(ref[0]);
  
  ifstream dataFile("aoc22day2.txt");
  while (getline(dataFile, s)) {
    //each round
    char opp, plyr = s[0], s[2];
    auto it = find(begin(ref),end(ref),opp);
    int o = it - begin(ref);
    it = find(begin(ref),end(ref),plyr);
    int p = it - begin(ref);

    //mild bruteforce
    if (o==5 && p==0){
      points += 6;
    }
    else if (p-o==1){
      points += 6;
    }
    else if (o-p==1){
      points += 3;
    }

    if (p==0){
      points += 1;
    }
    else if (p==2){
      points += 2;
    }
    else{
      points += 3;
    }
  }

  cout << points<<endl;
}

