#pragma once
#include "IGameBoard.h"
#include <cstdint>

namespace robot
{

class Board : public IGameBoard
{
private:
	uint32_t width {};
	uint32_t height {};
public:
	Board(const uint32_t width, const uint32_t height) 
	: width {width}, height {height} {}
	~Board() noexcept override = default;

};

}
