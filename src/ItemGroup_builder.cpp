#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector, std::ofstream;

string capitalize(string name){
  std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c){ return std::toupper(c); });
return name;
}

void ChairBlockGen(){

  ofstream out("generated/ItemGroupGen.txt", std::ios::app);

  for(int i = 0; i < wood.size(); i++){
    string blockname = wood[i] + "_" + furniture[0];
    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
  }

  out << '\n';

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[0];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
    }
    out << '\n';
  }

  out.close();
}

void StoolBlockGen(){
  ofstream out("generated/ItemGroupGen.txt", std::ios::app);

  for(int i = 0; i < wood.size(); i++){

    string blockname = wood[i] + "_" + furniture[1];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
  }

  out << '\n';

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[1];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
    }
  out << '\n';
  }

  out.close();
}

void AttomanBlockGen(){
  ofstream out("generated/ItemGroupGen.txt", std::ios::app);

  for(int i = 0; i < wood.size(); i++){

    string blockname = wood[i] + "_" + furniture[2];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
  }

  out << '\n';

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[2];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
    }
  out << '\n';
  }

  out.close();
}

void EggChairBlockGen(){
  ofstream out("generated/ItemGroupGen.txt", std::ios::app);

    string blockname = furniture[3];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n' << '\n';;

    for(int i = 0; i < colour.size(); i++){
      string blockname = colour[i] + "_cushioned_" + furniture[3];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
  }
  out << '\n';

  out.close();
}

void FoldingChairBlockGen(){
  ofstream out("generated/ItemGroupGen.txt", std::ios::app);

    string blockname = furniture[4];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n' << '\n';

      for(int i = 0; i < colour.size(); i++){

    string blockname = colour[i] + "_cushioned_" + furniture[4];

    out << "entries.add(ModBlocks." << capitalize(blockname) << ");" << '\n';
    }
  out << '\n';

  out.close();
}
int main() {

  ChairBlockGen();
  StoolBlockGen();
  AttomanBlockGen();
  FoldingChairBlockGen();
  EggChairBlockGen();

return 0;
}