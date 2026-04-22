CXX = g++
TARGET = tensor

all:
	$(CXX) tensor.cpp main.cpp -o $(TARGET)


run: all
	./$(TARGET)


clean:
	rm -f $(TARGET)
