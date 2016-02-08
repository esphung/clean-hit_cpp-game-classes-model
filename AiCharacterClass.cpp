/*
* @Author: home
* @Date:   2016-02-08 14:28:12
* @Last Modified by:   home
* @Last Modified time: 2016-02-08 15:05:34
*/
#include "AiCharacterClass.h"
#include <iostream>

AiCharacterClass::AiCharacterClass(){
	std::cout << "I am a AiCharacterClass object." << std::endl;
}// end null constructor

AiCharacterClass::~AiCharacterClass(){
	std::cout << "AiCharacterClass object destroyed." << std::endl;
}// end destructor