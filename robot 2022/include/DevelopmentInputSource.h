#pragma once
#include "IInputSource.h"
#include <queue>

namespace robot
{

class DevelopmentInputSource : public IInputSource
{
private:
	std::queue<Command> commands;
public:
	DevelopmentInputSource()
	{

	}

	// Inherited via IInputSource
	virtual Command getCommand() override;

};

}
