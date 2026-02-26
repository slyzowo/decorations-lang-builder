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

string execushioner(string colour, string furniture){
  string getcushioned = colour + "_cushioned_" +  furniture;
  return getcushioned;
}

string underscoreToSpace(string word){
  for (char& word : word) {
    if (word == '_') {
      word = ' ';
    }
  }
return word;
}

void ChairLangGen(){
  ofstream out("generated/en_us.txt", std::ios::app);

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < woods.size(); j++){
      out << "\"block.decorations." << woods[j] << "_" << furniture[i] << "\" : \"" << underscoreToSpace(woods[j]) << " " << underscoreToSpace(furniture[i]) << "\"," << '\n';

      for(int k = 0; k < colours.size(); k++){        // colours
        out << "\"block.decorations." << execushioner(colours[k], woods[j], furniture[i]) << "\" : \"" 
        << underscoreToSpace(execushioner(colours[k], woods[j], furniture[i])) << "\"," << '\n';
      }

    out << '\n';
    }
  }

    for(int j = 0; j < woods.size(); j++){
      for(int k = 0; k < colours.size(); k++){
        out << "\"block.decorations." << colours[k] << "_" << woods[j] << "_" << furniture[3] << "\" : \""
        << underscoreToSpace(colours[k]) << " " << underscoreToSpace(woods[j]) << " " << underscoreToSpace(furniture[3]) << "\"," << '\n';
      }
    out << '\n';
    }

      for(int k = 0; k < colours.size(); k++){
        out << "\"block.decorations." << colours[k] << "_" << furniture[4] << "\" : \""
        << underscoreToSpace(colours[k]) << " " << underscoreToSpace(furniture[4]) << "\"," << '\n';
      }
    out << '\n';

      out << "\"block.decorations." << furniture[5] << "\" : \"" << " " << underscoreToSpace(furniture[5]) << "\"," << '\n';

      for(int k = 0; k < colours.size(); k++){        // colours
        out << "\"block.decorations." << execushioner(colours[k], furniture[5]) << "\" : \"" 
        << underscoreToSpace(execushioner(colours[k], furniture[5])) << "\"," << '\n';
      }

      out << "\"block.decorations." << furniture[5] << "\" : \"" << " " << underscoreToSpace(furniture[5]) << "\"," << '\n';
      out << '\n';

      for(int k = 0; k < colours.size(); k++){        // colours
        string blockname = colours[k] + "_" + furniture[6];
        out << "\"block.decorations." << blockname << "\" : \"" << underscoreToSpace(blockname) << "\"," << '\n';
      }

    out << '\n';


    for(int i = 7; i < 9; i++){
      for(int j = 0; j < woods.size(); j++){
        out << "\"block.decorations." << woods[j] << "_" << furniture[i] << "\" : \"" << underscoreToSpace(woods[j]) << " " << underscoreToSpace(furniture[i]) << "\"," << '\n';

        for(int k = 0; k < colours.size(); k++){        // colours
          out << "\"block.decorations." << execushioner(colours[k], woods[j], furniture[i]) << "\" : \"" 
          << underscoreToSpace(execushioner(colours[k], woods[j], furniture[i])) << "\"," << '\n';
        }

      out << '\n';
      }
  }

  out.close();
}

void TableLangGen(){
  ofstream out("generated/en_us.txt", std::ios::app);

  for(int i = 10; i < furniture.size(); i++){
    for(int j = 0; j < stones.size(); j++){
      for(int k = 0; k < woods.size(); k++){
        string blockname = stones[j] + "_" + woods[k] + "_" + furniture[i];
        out << "\"block.decorations." << blockname << "\" : \""
        << underscoreToSpace(blockname) << "\"," << '\n';
      }

    out << '\n';
    }
  }
}

int main() {

  ChairLangGen();
  TableLangGen();

return 0;
}