#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

using namespace std::filesystem;


int main(){
    
    filesystem::path directoryPath= "mydirectory";

    if (!filesystem::exists(directoryPath)){
	filesystem::create_directory(directoryPath);

	cout << "Directory created: " << directoryPath
             << endl;	
    }

    // Define the file path within the directory and
    // combining the directory
    path filepath = directoryPath / "my_file.txt";

    // Create and open the file for writing using
    // std::ofstream
    ofstream file(filepath);
    if (file.is_open()) {
        // Write data to the file
        file << "Hello, FileSystem!";
        file.close();
        cout << "File created: " << filepath << endl;
    }
    else {
        // Handle the case if any error occured
        cerr << "Failed to create file: " << filepath
             << endl;
    }
    return 0;
}
