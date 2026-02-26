#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector, std::ofstream;

void ChairModelGen(){

  for(int i = 0; i < wood.size(); i++){
    string blockname = wood[i];
    cout << blockname << '\n';
  }

  cout << '\n';

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[0];

    cout << blockname << '\n';
    }
    cout << '\n';
  }
}

int main() {

  ChairModelGen();

return 0;
}