#pragma once

class calc
{
public:
	enum operation_type {
	OP_ADD,
	OP_SUB,
	OP_MUL,
	OP_DIV
	};


static double performOperation(
	double left,
	double right,
	int op);
};
