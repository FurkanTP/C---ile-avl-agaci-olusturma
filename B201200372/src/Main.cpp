#include "Cozum.hpp"


int main()
{


	Cozum *cozum = new Cozum();
	cozum->goster();

	//Deallocate memory:
	cozum->~Cozum();

	return 0;
}