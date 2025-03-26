EXE = main  	# The final execution
OBJS = main.o	# All ojects
COMPILER = g++	# g++ compiler 
COMPILER_OPTS = -std=c++17 -c -g -O0 -Wall -Werror -Wextra -pedantic-errors # Compiler options
LINKER = g++	# g++ compiler 

$(EXE): $(OBJS) # $(LINKER) $(OBJS) -o $(EXE)  $?(dependencies), $@(target)
	$(LINKER) $? -o $@ 

main.o: main.cpp
	$(COMPILER)	$(COMPILER_OPTS) main.cpp

clean:
	rm -rf *.o $(EXE)
