#include <string>
#include <iostream>
usingnamespace std;
int main()
string s0;
string s1 = "hello";
string s2 = s1 + "world";
//printing
cout <<"s0 ="<<s0<<endl;
cout <<"s1 ="<<s1<<endl;
cout <<"the 4th character of s1 is" <<s1[3]<<endl;
cout <<"s1 has" <<s1.size()<< "characters"<<endl;
//comparison
if (s1 == "hello")
	cout<< "hi there"<<endl;
if (s2 != "world")
	cout <<"out  of this world"<<endl;
	
	s1 += "kitty";
	
