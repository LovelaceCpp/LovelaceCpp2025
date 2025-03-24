EXE = intro  	# The final execution
OBJS = main.o intro.o png.o rgpapixel.o # All ojects -----
COMPILER = g++	# g++ compiler 
COMPILER_FLAGS = -std=c++17 -c -g -O0 -Wall -Werror -Wextra #-pedantic-errors # Compiler options
LINKER = g++	# g++ compiler 
LINKER_FLAGS = -lpng # Linker options
SRC = RGBA

intro: $(EXE)

$(EXE): $(OBJS) # $(LINKER) $(OBJS) -o $(EXE) =  $?(dependencies), $@(target)
	$(LINKER) $(LINKER_FLAGS) $? -o $@ 

main.o: main.cpp intro.h $(SRC)/png.h 
	$(COMPILER)	$(COMPILER_FLAGS) main.cpp

intro.o: intro.cpp intro.h $(SRC)/png.h $(SRC)/rgpapixel.h
	$(COMPILER) $(COMPILER_FLAGS) intro.cpp

png.o: $(SRC)/png.cpp $(SRC)/png.h $(SRC)/rgpapixel.h
	$(COMPILER) $(COMPILER_FLAGS) $(SRC)/png.cpp

rgpapixel.o: $(SRC)/rgpapixel.cpp $(SRC)/rgpapixel.h
	$(COMPILER) $(COMPILER_FLAGS) RGBA/rgpapixel.cpp
	
clean:
	rm -rf *.o $(EXE)
