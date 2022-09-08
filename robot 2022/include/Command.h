#pragma once

#include "Location.h"

namespace robot
{

struct Command
{
	virtual ~Command() = default;
};

struct Place : public Command
{
	const Location location {};
	const Direction direction {};
	Place(const Location, const Direction) : location {location}, direction {direction}
	{}
};

struct Move : public Command
{};

struct Left : public Command
{};

struct Right : public Command
{};

struct Report : public Command
{};

}
