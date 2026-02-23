#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector, std::ofstream;

string capitalize(string name){
  std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c){ return std::toupper(c); });
return name;
}

void ChairBlockGen(){

  ofstream out("generated/MobBlockGen.txt", std::ios::app);

  for(int i = 0; i < wood.size(); i++){

    string blockname = wood[i] + "_" + furniture[0];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
  }

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[0];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
    }
  }

  out.close();
}

void StoolBlockGen(){
  ofstream out("generated/MobBlockGen.txt", std::ios::app);

  for(int i = 0; i < wood.size(); i++){

    string blockname = wood[i] + "_" + furniture[1];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new Block(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
  }

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[1];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
    }
  }

  out.close();
}

void AttomanBlockGen(){
  ofstream out("generated/MobBlockGen.txt", std::ios::app);

  for(int i = 0; i < wood.size(); i++){

    string blockname = wood[i] + "_" + furniture[2];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new Block(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
  }

  for(int i = 0; i < wood.size(); i++){
      for(int j = 0; j < colour.size(); j++){

    string blockname = colour[j] + "_cushioned_" + wood[i] + "_" + furniture[2];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
    }
  }

  out.close();
}

void EggChairBlockGen(){
  ofstream out("generated/MobBlockGen.txt", std::ios::app);

    string blockname = furniture[3];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.METAL)));" << "\n\n";

    for(int i = 0; i < colour.size(); i++){
      string blockname = colour[i] + "_cushioned_" + furniture[3];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
  }

  out.close();
}

void FoldingChairBlockGen(){
  ofstream out("generated/MobBlockGen.txt", std::ios::app);

    string blockname = furniture[4];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.METAL)));" << "\n\n";

      for(int i = 0; i < colour.size(); i++){

    string blockname = colour[i] + "_cushioned_" + furniture[4];

    out  << "public static final Block " << capitalize(blockname) << " = registerBlock(\"" << blockname << "\", " << '\n'
    << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << "  .nonOpaque()" << '\n'
    << "  .mapColor(MapColor.OAK_TAN)" << '\n'
    << "  .strength(0.8F)" << '\n'
    << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
    << "  .burnable()));" << "\n\n";
    }

  out.close();
}

int main() {

// Sittable Blocks
  ChairBlockGen();
  StoolBlockGen();
  AttomanBlockGen();
  EggChairBlockGen();
  FoldingChairBlockGen();

// Tables

return 0;
}