#include"Animal.h"
#include<iostream>
using namespace std;

Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}
string Animal::getName() const
{
	return name;
}
double Animal::getWeight() const
{
	return weight;
}
void Animal::setName(string name)
{
	this->name = name;
}
void Animal::setWeight(double weight)
{
	this->weight = weight;
}
string Animal::makeNoise() const
{
	return "unknown";
}
void Animal::eat() const
{
	cout << "Yumm! I love the treats" << endl;
}