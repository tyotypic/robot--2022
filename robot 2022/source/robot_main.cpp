#include "robot_main.h"
#include "Board.h"
#include "Robot.h"
#include <iostream>
#include <memory>

namespace robot
{
int robot_main(int argc, char* argv[])
{
	try
	{
		CommandInputSource inputSource {};
		Board board {5,5};
		while (true)
		{
			const auto Command {inputSource.getCommand()};
			if (robot.commandIsValid(Command))
			{
				robot.executeCommand(Command);
			}

		}

		return 0;
	}
	catch (const std::bad_alloc&)
	{
		std::cout << "A memory allocation failed. Terminating." << std::endl;
	}
}

}
