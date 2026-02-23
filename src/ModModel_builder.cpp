#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector, std::ofstream;

/*
{
	"format_version": "1.9.0",
	"credit": "Made by slyzowo",
	"textures": {
		"0": "minecraft:block/oak_log",
		"1": "minecraft:block/oak_planks",
		"particle": "minecraft:block/oak_log"
	},
	"elements": [
		{
			"name": "north right leg",
			"from": [12, 0, 2],
			"to": [14, 9, 4],
			"rotation": {"angle": 0, "axis": "y", "origin": [12, 0, 2]},
			"faces": {
				"north": {"uv": [0, 0, 2, 10], "texture": "#0"},
				"east": {"uv": [0, 0, 2, 9], "texture": "#0"},
				"south": {"uv": [0, 0, 2, 10], "texture": "#0"},
				"west": {"uv": [0, 0, 2, 10], "texture": "#0"},
				"up": {"uv": [0, 0, 2, 2], "texture": "#0"},
				"down": {"uv": [0, 0, 2, 2], "texture": "#0"}
			}
		},
		{
			"name": "south right leg",
			"from": [12, 0, 12],
			"to": [14, 21, 14],
			"rotation": {"angle": 0, "axis": "y", "origin": [12, 0, 12]},
			"faces": {
				"north": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"east": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"south": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"west": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"up": {"uv": [0, 0, 2, 2], "texture": "#0"},
				"down": {"uv": [0, 0, 2, 2], "texture": "#0"}
			}
		},
		{
			"name": "north left leg",
			"from": [2, 0, 2],
			"to": [4, 9, 4],
			"rotation": {"angle": 0, "axis": "y", "origin": [2, 0, 2]},
			"faces": {
				"north": {"uv": [6, 0, 8, 10], "texture": "#0"},
				"east": {"uv": [6, 0, 8, 10], "texture": "#0"},
				"south": {"uv": [6, 0, 8, 9], "texture": "#0"},
				"west": {"uv": [6, 0, 8, 10], "texture": "#0"},
				"up": {"uv": [6, 0, 8, 2], "texture": "#0"},
				"down": {"uv": [6, 0, 8, 2], "texture": "#0"}
			}
		},
		{
			"name": "south left leg",
			"from": [2, 0, 12],
			"to": [4, 21, 14],
			"rotation": {"angle": 0, "axis": "y", "origin": [2, 0, 12]},
			"faces": {
				"north": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"east": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"south": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"west": {"uv": [0, 0, 2, 16], "texture": "#0"},
				"up": {"uv": [0, 14, 2, 16], "texture": "#0"},
				"down": {"uv": [0, 0, 2, 2], "texture": "#0"}
			}
		},
		{
			"name": "chair seat",
			"from": [4, 8, 4],
			"to": [12, 9, 13],
			"rotation": {"angle": 0, "axis": "y", "origin": [0, 7.75, 0]},
			"faces": {
				"north": {"uv": [0, 0, 8, 9], "texture": "#1"},
				"east": {"uv": [0, 0, 8, 9], "texture": "#1"},
				"south": {"uv": [0, 0, 8, 1], "texture": "#1"},
				"west": {"uv": [0, 0, 8, 9], "texture": "#1"},
				"up": {"uv": [0, 0, 8, 9], "texture": "#1"},
				"down": {"uv": [0, 0, 8, 9], "texture": "#1"}
			}
		},
		{
			"name": "chair back",
			"from": [4, 13, 12.5],
			"to": [12, 20, 13.5],
			"rotation": {"angle": 0, "axis": "y", "origin": [0, 10, -2.5]},
			"faces": {
				"north": {"uv": [0, 0, 8, 7], "texture": "#1"},
				"east": {"uv": [0, 0, 8, 7], "texture": "#1"},
				"south": {"uv": [0, 0, 8, 7], "texture": "#1"},
				"west": {"uv": [0, 0, 8, 7], "texture": "#1"},
				"up": {"uv": [0, 0, 8, 1], "texture": "#1"},
				"down": {"uv": [0, 0, 8, 1], "texture": "#1"}
			}
		},
		{
			"name": "right side",
			"from": [12, 8, 4],
			"to": [14, 9, 12],
			"rotation": {"angle": 0, "axis": "y", "origin": [12, 0, 6]},
			"faces": {
				"north": {"uv": [4, 12, 2, 0], "texture": "#0"},
				"east": {"uv": [10, 1, 2, 0], "texture": "#0"},
				"south": {"uv": [4, 12, 2, 0], "texture": "#0"},
				"west": {"uv": [4, 12, 2, 0], "texture": "#0"},
				"up": {"uv": [4, 12, 2, 0], "texture": "#0"},
				"down": {"uv": [4, 8, 2, 0], "texture": "#0"}
			}
		},
		{
			"name": "right side",
			"from": [4, 8, 2],
			"to": [12, 9, 4],
			"rotation": {"angle": 0, "axis": "y", "origin": [10, 0, -4]},
			"faces": {
				"north": {"uv": [12, 10, 0, 8], "texture": "#0"},
				"east": {"uv": [12, 10, 0, 8], "texture": "#0"},
				"south": {"uv": [12, 10, 0, 8], "texture": "#0"},
				"west": {"uv": [12, 10, 0, 8], "texture": "#0"},
				"up": {"uv": [12, 10, 0, 8], "texture": "#0"},
				"down": {"uv": [8, 10, 0, 8], "texture": "#0"}
			}
		},
		{
			"name": "left side",
			"from": [2, 8, 4],
			"to": [4, 9, 12],
			"rotation": {"angle": 0, "axis": "y", "origin": [2, 0, 6]},
			"faces": {
				"north": {"uv": [10, 0, 12, 1], "texture": "#0"},
				"east": {"uv": [10, 0, 12, 1], "texture": "#0"},
				"south": {"uv": [10, 0, 12, 1], "texture": "#0"},
				"west": {"uv": [10, 0, 12, 1], "texture": "#0"},
				"up": {"uv": [10, 0, 12, 8], "texture": "#0"},
				"down": {"uv": [10, 0, 12, 1], "texture": "#0"}
			}
		}
	],
	"display": {
		"thirdperson_righthand": {
			"rotation": [75, 45, 0],
			"translation": [0, 2.5, 0],
			"scale": [0.375, 0.375, 0.375]
		},
		"thirdperson_lefthand": {
			"rotation": [75, 45, 0],
			"translation": [0, 2.5, 0],
			"scale": [0.375, 0.375, 0.375]
		},
		"firstperson_righthand": {
			"rotation": [0, 45, 0],
			"scale": [0.4, 0.4, 0.4]
		},
		"firstperson_lefthand": {
			"rotation": [0, 45, 0],
			"scale": [0.4, 0.4, 0.4]
		},
		"ground": {
			"translation": [0, 3, 0],
			"scale": [0.25, 0.25, 0.25]
		},
		"gui": {
			"rotation": [35, 135, 0],
			"scale": [0.5, 0.5, 0.5]
		},
		"head": {
			"translation": [0, 14.25, 0]
		},
		"fixed": {
			"translation": [0, 0, -3.5],
			"scale": [0.5, 0.5, 0.5]
		},
		"on_shelf": {
			"rotation": [0, -180, 0],
			"translation": [0, 0, 2.75]
		}
	},
	"groups": [
		{
			"name": "chair legs",
			"origin": [0, 0, 0],
			"color": 0,
			"children": [0, 1, 2, 3]
		},
		4,
		5,
		{
			"name": "sides",
			"origin": [8, 8, 8],
			"color": 0,
			"children": [6, 7, 8]
		}
	]
}
*/

int main() {



return 0;
}