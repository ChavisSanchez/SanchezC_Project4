CXX = g++
CXXFLAGS = -g -std=c++17 -Wall # -Werror=return-type -Werror-uninitialized

OBJECTS = main.o filemanager.o offline.o online.o optimal.o permutationgenerator.o
CATCH = test/catch/catch.o

main: $(OBJECTS)
			$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
			$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
			rm -rf *.dSYM test/*.dSYM
			rm -f *.o *.gc* test/*.o test/*.gc* *.dSYM $(addprefix test/,$(TESTS)) main $(CATCH)
