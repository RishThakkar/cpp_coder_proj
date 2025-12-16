CXX = g++
CXXFLAGS = -std=c++17 -Wall

all:
	$(CXX) $(CXXFLAGS) engine/*.cpp -o coder

clean:
	rm -rf build workspace/*