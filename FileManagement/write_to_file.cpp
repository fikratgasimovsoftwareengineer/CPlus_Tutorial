/* File Management by Fikrat  Gasimov
  ofstream - open to write
  ifstream - open to read
  fstream - can handle file like ofstream and ifstream !
  write data to file
  read data from file

 * */
// stream lib fstream
#include <fstream>
#include <iostream>

using namespace std;

int main(){

// create file array
  char data[100];

  // ope filew in write mode
  fstream writer;
  writer.open("credentials.txt");
  //check if open or not
  if(!writer){
    cout << "Can not create file" << endl;
  
  
  }
  cout << "start writing ..." << endl;
  //read input character and write to file
  //getline() functionality
  cin.getline(data, 100);
  // << write streamer
  writer << data << endl;
  //cin.ignore();
  // enter age
  cout << "Enter age.." << endl;
// enter to terminal
  cin >> data;
  // write to the text 
  writer << data << endl;
  // ignore the current input
  cin.ignore();

  // close the file
  writer.close();

 //openning file in read mode
  fstream read_data;
  read_data.open("credentials.txt");

  cout << "start reading from file " << endl;
  // read data from credentials;
  read_data >> data; 
  cout << data << endl;

  read_data >> data;
  cout << data << endl;

 // close file
  read_data.close();

}



