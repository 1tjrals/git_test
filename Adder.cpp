#include <iostream>
#include "Adder.h"

using namespace std;




C_Adder::C_Adder(int a, int b)
{
	op1 = a;
	op2 = b;
}

int C_Adder::Process()
{
	return op1 + op2;
}



void C_Calculator::Run()
{
	cout << "두 개의 수를 입력하시오 : ";
	int a, b;
	cin >> a >> b;
	C_Adder adder(a, b);
	cout << adder.Process() << endl;
}
