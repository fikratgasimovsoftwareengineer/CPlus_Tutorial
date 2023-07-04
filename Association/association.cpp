/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;
class User{
    
    public: 
        User(int id):id(id){}
        
        int getId(){
            cout << "Id : " << id << endl; 
            return id;
        }
        
    private:
        int id;
    
    
};




class Account{
      public: 
        Account(int token):token(token){}
        
        int getToken(){
            cout << "Token : " << token<< endl; 
            return token;
        }
        
    private:
        int token;
    
    
};


class SecurityofUser{
        public: 
        SecurityofUser(string cyber):cyber(cyber){}
        
        string getCyber(){
            cout << "Cyber : " << cyber<< endl; 
            return cyber;
        }
        
    private:
        string cyber;
};


class Bank{
    
    public: 
        Bank(string name, User *user,
        Account * account, SecurityofUser *security):name(name), account(account), user(user), security(security){
            
            user->getId();
            account->getToken();
            security->getCyber();
        };
        
    private:
        string name;
        User *user;
        Account *account;
        SecurityofUser *security;
};





int main()
{
    
    
    User * user = new User(2523);
    Account *account = new Account(2301023);
    SecurityofUser *securit = new SecurityofUser("Attack");
    
    Bank bank("BankOfBaku",user,account, securit);
    return 0;
}
