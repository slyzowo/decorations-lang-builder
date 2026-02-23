#include <iostream>
#include <fstream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector, std::ofstream;

int main() {

  ofstream out("lang_en_us.json");

  out << "{\n  \"itemgroup.decorations.decorations_group\" : \"Decorations\"," << "\n\n";

// chairs -> attoman
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < wood.size(); j++){
        out << "  \"block.decorations." << wood[j] << "_" << furniture[i] << "\" : \"" << wood[j] << " " << furniture[i] << "\"," << '\n';
    }
    out << '\n';
  }

// cushioned chairs -> attoman
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < wood.size(); j++){
      for(int k = 0; k < colour.size(); k++){
        out << "  \"block.decorations." << colour[k] << "_cushioned_" << wood[j] << "_" << furniture[i] << "\" : \"" << colour[k] << " Cushioned "<< wood[j] <<" "<< furniture[i] << "\"," << '\n';
      }
    out << '\n';
    }
    out << '\n';
  }

// egg chair and folding chair
  for(int i = 3; i < furniture.size(); i++){
        out << "  \"block.decorations." << furniture[i] << "\" : \"" << furniture[i] << "\"," << '\n';
    out << '\n';
  }

// cushioned egg chair and folding chair
  for(int i = 3; i < furniture.size(); i++){
      for(int j = 0; j < colour.size(); j++){
        out << "  \"block.decorations." << colour[j] << "_cushioned_" << furniture[i] << "\" : \"" << colour[j] << " Cushioned " << furniture[i] << "\"," << '\n';
      }
    out << '\n';
  }
  out << "}";

  out.close();

return 0;
}