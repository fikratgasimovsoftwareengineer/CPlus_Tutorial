#ifndef _THREAD
#define _THREAD

#include <iostream>
#include <thread>
#include <chrono>

class Thread{
    public:
	    Thread();

	    static void threadId(int id);

	    void executeThreads();

	    void executeAndDetach();
	   
	    ~Thread();
};



#endif
