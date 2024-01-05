#include<iostream>
#include<string>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"

using namespace std;
int main()
{
	Animal myAnimal("doraemon", 0.257);
	Animal yourAnimal("Muku", 5.7);
	Dog hisDog("Rover", 8, "greyHound");
	Animal* dogPtr = new Dog("Marley", 52.16, "Golden Retriever");
	Animal* catPtr = new Cat("Fifi", 12);

	cout << "What sound does my dog make? " << endl;

	cout << "Make noise?  " << dogPtr->makeNoise() << endl;

	cout<< "What sound does my catto make? " << endl;
	cout << catPtr->makeNoise() << endl;

	cout << endl;
	cout << "Catto eating? ";
	catPtr->eat() ;
	((Cat*)catPtr)->chaseMouse();

	cout << "name of the animal is " << myAnimal.getName() << " and its weight is " << myAnimal.getWeight()
		<< " in Kgs!" << endl;
	cout << "name of the animal is " << yourAnimal.getName() << " and its weight is " << yourAnimal.getWeight() 
<< " in Kgs!" << endl;
	cout << "Animal noise: " << myAnimal.makeNoise() << endl;
	cout << "name of the animal is " << hisDog.getName() << " and its weight is " << hisDog.getWeight() << " in Kgs!"
		<< " also its breed is " << hisDog.getBreed() << endl;
	cout << endl;
	cout << "Animal noise: " << hisDog.makeNoise() << endl;
	cout << endl;

	hisDog.chaseCat();
	hisDog.digHole();

	delete dogPtr;
	dogPtr = nullptr;

return 0;
}