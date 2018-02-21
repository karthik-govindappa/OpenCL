CXX := g++
CXXFLAGS := -std=c++11

HEADERS := -I/usr/local/cuda-8.0/include
LIBS := -L/usr/local/cuda-8.0/lib64 -lOpenCL

SRC := main.cpp

TARGET := test

all: $(SRC)
	$(CXX) $(CXXFLAGS) $(HEADERS) $(SRC) -o $(TARGET) $(LIBS)

.phony: clean

clean:
	rm -f $(TARGET)
