#pragma once
#include <cstdint>

namespace robot
{

struct Location
{
	const uint32_t x {};
	const uint32_t y {};
	Location(const uint32_t x, const uint32_t y) : x {x}, y {y}
	{}
	Location() = default;
};

enum Direction
{
	North,
	South,
	East,
	West
};

}
