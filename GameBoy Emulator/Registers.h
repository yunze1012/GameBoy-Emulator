#pragma once
class Registers
{
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
	unsigned char e;
	unsigned char f;
	unsigned char h;
	unsigned char l;
	unsigned short stackPtr;
	unsigned short pc;

	void reset();
};
