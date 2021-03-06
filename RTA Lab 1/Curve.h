#pragma once
#include "svl/svl.h"

class Curve
{
public:
	virtual Vec3 Position(float t) = 0;
	virtual void Draw() = 0;
};

