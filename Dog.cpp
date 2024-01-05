#include"Dog.h"
#include<iostream>

using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name,weight) // takes care of the private data of the animal class
//that cannot be accessed by the derived class
{
	this->name = name;
	this->weight = weight;
	this->breed = breed;
}
string Dog::getBreed() const
{
	return breed;
}
void Dog::digHole() const
{
	cout << "Yay! Good job!You dug a hole" << endl;
}
string Dog::makeNoise() const
{
	return "woof!";
}
void Dog::chaseCat()
{
	cout << "Here, kitty kitty!" << endl;
}