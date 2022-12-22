INC_DIR= -I/include/
LHEADERS= thread.h
CFDEBUG= -Wall
LIBS= -lpthread
STD := c++14
CXX= g++
CXFLAGS= -o
CDFLAGS= -c
RM= rm -rf
TARGET= thread


.PHONY:	clean build run

all: thread

thread:	thread.o thread.h	
	echo "Compilation of Object!"
	$(CXX) thread.o $(CXFLAGS) thread $(LIBS)

thread.o: thread.cpp
	echo "Object ..."
	$(CXX) $(CDFLAGS) thread.cpp $(CXFLAGS) thread.o

thread.h: thread.cpp
	echo "Header..."
	$(CXX) $(CDFLAGS) thread.cpp $(INC_DIR)

clean:
	echo "**Cleaning**"
	$(RM) *.o $(TARGET)

