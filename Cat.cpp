#include"Cat.h"
#include<iostream>
using namespace std;

Cat::Cat(string name, double weight):Animal(name,weight)
{
	
}
void Cat::chaseMouse() const
{
	cout << "I'm chasing a mouse y'all!" << endl;
}
string Cat::makeNoise() const
{
	return "meow";
}
