#include <iostream>

#include "testClass.h"
#include "UserCharacterClass.h"
#include "CountdownLevelTimerClass.h"
#include "ItemClass.h"
#include "AiCharacterClass.h"
#include "GameControllerInterfaceClass.h"

// MAIN FILE WILL EVENTUALLY BECOME THE LEVEL CLASS

int main(){
	std::cout << "++++++++++++++++++++++++++++++++++:" << std::endl;
	std::cout << "Hello CleanHit Mobile Game Classes:" << std::endl;

	// instantiate one of each object
	Test testObject;
	UserCharacterClass userObject;
	CountdownLevelTimerClass levelTimerObject;
	ItemClass itemObject;

	AiCharacterClass aiCharacterObject;

	//AiCharacterClass *aiCharObject = new AiCharacterClass();
	//delete aiCharObject;

/*	AiCharacterClass arrayAiCharObjects[4] = {};
	for(int i=0; i < sizeof(arrayAiCharObjects); i++)
		printf("%i AiCharacterClass object found\n", i);
*/

	GameControllerInterfaceClass gameControllerObject;


	return 0;
}