#include "include/thread.h"

using namespace std;


Thread::Thread(){

    cout << "Thread is Created!\n";
}


void Thread::threadId(int id){

    cout << "Performing work for thred: " << id << "\n";
}


void Thread::executeThreads(){


    cout << "Starting Threads" << endl;

    thread zero_thread(threadId, 0);
    thread first_thread(threadId, 1);
    thread second_thread(threadId, 2);
    

    cout << "Press a key to let program to proceed\n";

    getchar();


    cout << "Joining Threads\n";

    // wait for threads
    //
    zero_thread.join();
    first_thread.join();
    second_thread.join();

    cout << "Completed All threads\n";
}

void Thread::executeAndDetach(){

    thread thread(threadId, 0);

    thread.detach();

}

Thread::~Thread(){

     cout << "Delete\n"; 
}

int main(){
     
    Thread thread;

    std::cout << "Pay attention to the fact that newlines will not always be added at the end of lines if multiple <<'s\n";

    thread.executeThreads();
    
    thread.executeAndDetach();
	
    cout <<"Sleeping for 1 second: \n";

    this_thread::sleep_for (chrono::seconds(1));

    cout << "Press a key to let program to succedd!\n";

    getchar();

    return 0;
}

