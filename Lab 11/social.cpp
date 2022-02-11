/*
Author: Martin Czarnecki
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 11 A
*/

#include <iostream>
using std::string;

class Profile{
    private:
        string username;
        string displayname;

    public:
        Profile(string usrn, string dspn){
            username = usrn;
            displayname = dspn;
        };
        Profile(){
            username = "";
            displayname = "";
        };

        string getUsername(){return username;};
        string getFullName(){return displayname + " (@" + username + ")";};
        void setDisplayName(string dspn){displayname = dspn;};
};

int main(){
    Profile p1("marco", "Marco");
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl;  // Marco (@marco)
    p1.setDisplayName("Marco Rossi");
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl;  // Marco Rossi (@marco)
    Profile p2("tarma1", "Tarma Roving");
    std::cout << p2.getUsername() << std::endl; // tarma1
    std::cout << p2.getFullName() << std::endl; // Tarma Roving (@tarma1)
}