#include "DevelopmentInputSource.h"

namespace robot
{

Command robot::DevelopmentInputSource::getCommand()
{
	auto command {commands.front()};
	commands.pop();
	return command;
}

}
