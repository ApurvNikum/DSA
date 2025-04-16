#include<string>
#include <iostream>
#include<regex>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    char s1[] = {'h','e','l','l','o'};
    char s2[] = "hello";
    
    string s3 = "hello";
    
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    
    //string concatenation
    
    string str1= "Hello";
    string str2 = "World";
    
    string result = str1 + " " + str2 ;
    cout<<result<<endl;
    
    //finding length 
    
    string  s  = "Yoooo";
    int len = s.length();
    cout<<len<<endl;
    
    
    //accessing characters
    string s4 = "Hello";
    char first = s4[0];
    cout<<first<<endl;
    
    //substring
    string s5 = "Hey There HOW are you?";
    string sub = s5.substr(0,9);
    cout<<sub<<endl;
    
    //find starting position of word in string
    string s6 = "Hello, world!";
    size_t pos = s6.find("world");
    cout<<pos<<endl;
    
    //replace a word in string
     string s7 = "Hello, world!";
     s7.replace(0,5,"hi");
     
     cout<<s7<<endl;

    //insert at beginning 
    string s8 = "Hello!";
    s8.insert(5, " world");
    cout<<s8<<endl;

    //erasing
    //s.erase(starting position,number of characters to be earsed)
    string s9 = "Hello, world!";
    s9.erase(5, 7); 
    cout<<s9<<endl;

    string s10 = "apple";
    string s11 = "banana";
    if (s10 < s11) {
    cout << "apple comes before banana"<<endl;
    }
    
    string s21 = "Hello, world!";
    regex pattern("(\\w+),\\s(\\w+)!");
    smatch matches;
    if (regex_search(s21, matches, pattern)) {
        cout << matches[1] << " " << matches[2]<<endl; // "Hello world"
    }
    
    string s14 = "  Hello   World  ";
    s14.erase(std::remove_if(s14.begin(), s14.end(),::isspace), s14.end());
    cout<<s14<<endl;

    string s16 = "Hello";
    transform(s16.begin(), s16.end(), s16.begin(), ::toupper);
    cout<<s16<<endl;// "HELLO"

    //printing through pointers
    
    string s23 = "Geeksforgeeks";

    // pointer variable declared to store the starting
    // address of the string
    char* p = &s23[0];

    // this loop will execute and print the character till
    // the character value is null this loop will execute and
    // print the characters

    while (*p != '\0') {
        cout << *p;
        p++;
    }
    cout << endl;
    

    

    return 0;
}