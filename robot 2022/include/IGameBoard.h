#pragma once
#include "Move.h"
#include "IRobot.h"
#include "Location.h"

namespace robot 
{

struct IGameBoard
{
	virtual ~IGameBoard() noexcept = default;
	virtual bool moveIsValid(const Move& moveToCheck) const noexcept = 0;
	virtual Location myLocation(const IRobot& robot) const noexcept = 0;
};

}