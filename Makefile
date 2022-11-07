CXX = g++
CXXFLAGS = -g -std=c++17 -Wall # -Werror=return-type -Werror-uninitialized

OBJECTS = main.o

main: $(OBJECTS)
			$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
			$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
			rm -rf *.dSYM
			rm -f  *.o main $(CATCH)
