#include <iostream>
#include <fstream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector, std::ofstream;

// "block.decorations.oak_chair" : "Oak Chair",

string execushioner(string colour, string wood, string furniture){
  string getcushioned = colour + "_cushioned_" + wood + "_" + furniture;
  return getcushioned;
}

void ChairLangGen(){
  ofstream out("generated/en_us.txt", std::ios::app);

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < woods.size(); j++){
      out << "\"block.decorations." << woods[j] << "_" << furniture[i] << "\" : \"" << woods[j] << " " << furniture[i] << "\"," << '\n';

      for(int k = 0; k < colours.size(); k++){
        out << "\"block.decorations." << execushioner(colours[k], woods[j], furniture[i]) << "\" : \"" << execushioner(colours[k], woods[j], furniture[i]) << "\"," << '\n';
      }

    out << '\n';
    }
  }

  out.close();
}

int main() {

  ChairLangGen();

return 0;
}