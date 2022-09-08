#pragma once
#include "Command.h"

namespace robot
{

struct IInputSource
{
	virtual ~IInputSource() = default;
	virtual Command getCommand() = 0;
};

}
