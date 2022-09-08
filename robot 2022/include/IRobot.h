#pragma once
#include "Command.h"

namespace robot
{

struct IRobot
{
	virtual ~IRobot() = default;
	virtual void doCommand(const Command& command) = 0;
};

}
