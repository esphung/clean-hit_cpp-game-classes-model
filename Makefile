
all: main.o testClass.o UserCharacterClass.o CountdownLevelTimerClass.o ItemClass.o AiCharacterClass.o GameControllerInterfaceClass.o
	g++ main.o testClass.o UserCharacterClass.o CountdownLevelTimerClass.o ItemClass.o AiCharacterClass.o GameControllerInterfaceClass.o -o programOutputExecutable
	make run

run:
	./programOutputExecutable

clean:
	rm -rf *.o
	rm -rf programOutputExecutable

main.o: main.cpp testClass.h UserCharacterClass.h CountdownLevelTimerClass.h ItemClass.h AiCharacterClass.h GameControllerInterfaceClass.h
	g++ -c main.cpp

testClass.o: testClass.cpp testClass.h
	g++ -c testClass.cpp

UserCharacterClass.o: UserCharacterClass.cpp UserCharacterClass.h
	g++ -c UserCharacterClass.cpp

CountdownLevelTimerClass.o: CountdownLevelTimerClass.cpp CountdownLevelTimerClass.h
	g++ -c CountdownLevelTimerClass.cpp

ItemClass.o: ItemClass.cpp ItemClass.h
	g++ -c ItemClass.cpp

AiCharacterClass.o: AiCharacterClass.cpp AiCharacterClass.h
	g++ -c AiCharacterClass.cpp

GameControllerInterfaceClass.o: GameControllerInterfaceClass.cpp GameControllerInterfaceClass.h
	g++ -c GameControllerInterfaceClass.cpp






