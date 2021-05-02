#pragma once
#include "Registers.h"

class CPU
{
	Registers registers;
	void LD(unsigned char r1, unsigned char r2);
};

