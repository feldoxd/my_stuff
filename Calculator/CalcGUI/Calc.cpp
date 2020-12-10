#include "Calc.h"
#include <string>
#include "wx/wx.h"

namespace WXcalc {

}

double calc::performOperation(
double const left,
double const right,
int const op)
{
	double result;
	switch (op) {
	case OP_ADD: {
		result = left + right;
		break;
	}
	case OP_SUB: {
		result = left - right;
		break;
	}
	case OP_MUL: {
		result = left * right;
		break;
	}
	case OP_DIV: {
		if (right != 0) {
			result = left / right;
		}
		else {
			throw std::runtime_error("Cannot divide by zero");
		}


		break;
	}
	default: {
		throw std::runtime_error("Unknown OP: " + std::to_string(op));
	}
	}
		   return result;
}