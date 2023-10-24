#include <iostream>
#include <vector>
#include <string>

// Define a typedef struct called 'Address'
typedef struct Address {
    std::string street;
    int houseNumber;
    std::string city;
    std::string country;
} Address;

// Define another typedef struct called 'Person'
typedef struct Person {
    std::string name;
    Address* address;  // Use a pointer to Address inside Person
} Person;




int main(){


  // Initialize an instance of the Person struct
    Person john;
    john.name = "John Doe";

    // Dynamically allocate memory for the Address struct and assign it to the person's address pointer
    john.address = new Address;
    john.address->street = "Main St";
    john.address->houseNumber = 123;
    john.address->city = "SampleCity";
    john.address->country = "SampleCountry";

    // Print the information
    std::cout << "Name: " << john.name << std::endl;
    std::cout << "Street: " << john.address->street << std::endl;
    std::cout << "House Number: " << john.address->houseNumber << std::endl;
    std::cout << "City: " << john.address->city << std::endl;
    std::cout << "Country: " << john.address->country << std::endl;

    delete john.address;
    return 0;
}