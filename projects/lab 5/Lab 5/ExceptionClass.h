#pragma once
class Exception
{
public:
	Exception(double newInput);
	Exception();
	~Exception();
	void setInput(double setInput);
	double getInput(void);
	double square(double input);

private:
	double input = 0;
};

Exception::Exception(double newInput) {
	input = newInput;
}

void Exception::setInput(double setInput) {
	input = setInput;
}
double Exception::getInput(void) {
	return input;
}

double Exception::square(double input) {

	if (input > 0) {
		return input * input;
	}else {
		throw input;
	}
}
Exception::Exception()
{
}

Exception::~Exception()
{
}