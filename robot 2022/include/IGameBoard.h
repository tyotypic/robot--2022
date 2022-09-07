#pragma once

namespace robot 
{

class IGameBoard
{
	~IGameBoard() = default;
	virtual bool moveIsValid(const Move& moveToCheck) const noexcept = 0;
	virtual Location myLocation(const IRobot& robot) const noexcept = 0;
};

}