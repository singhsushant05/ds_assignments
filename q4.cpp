#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

// A
/*string concatenate(string s1,string s2){
    
    return s1 + s2;
   //return a + " " + b;
}
int main (){
string s1,s2,s3;
cout<< "enter first string: ";
cin >> s1;
cout<< "\nenter second string: ";
cin >> s2;
string result = concatenate(s1,s2);
cout << result << endl;
return 0;
}
*/


// B

/*string reverse_string(string s){
    int n = s.length();
    for (int i = 0; i < n/2; i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;

    } 
    return s;
}
int main(){
    string s;
    s = "SUSHANT";
    string result = reverse_string(s);
    cout << result;
    return 0;
}*/

// C

/*bool isVowel(char c){

    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
    
    for(char v: vowels){
        if (c == v ) return true;
        
    }
    return false; 
}
string removeVowels(string s){
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
       if (!isVowel(s[i]))
       {
        result += s[i];
       }
       
    }
    return result;
}
int main(){
    string s = "Hello brother";
    cout << removeVowels(s) << endl;
    return 0;
}*/

// D

/*int alphabetical_order(string s){
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << ":" << int(s[i]) << endl;
    }
    return 0;
}
void sorting(string &s){
    int n = s.length();
    for (int i = n-1; i >= 1; i--){
       for (int j = 0; j < i; j++){
          if (int(s[j]>int(s[j+1]))){
           
            char temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
       }
       
       } 
    }
       
    }
    int main(){
        string s = "SUSHANT";
        alphabetical_order(s);
        sorting(s);
        cout << "ordered string: " << s << endl;


    }
    */

// E

#include <iostream>
#include <string>
using namespace std;

string toLowercase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

string toUppercase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    return s;
}

int main() {
    string s = "Sushant";

    cout << "Lowercase: " << toLowercase(s) << endl;
    cout << "Uppercase: " << toUppercase(s) << endl;

    return 0;
}

    
