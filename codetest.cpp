#include <iostream>
using namespace std;
void reverse_chars(string);
void reverse_words(string);

int main ()
{
	string line;
	while (true){
		cout << "SergeIsWaiting>> ";
		if (getline(cin,line)){
		reverse_chars(line);
		reverse_words(line);
		}
		else
		break
return 0;
}

void reverse_chars(string line){
	for (int i=line.length()-1; i>=0; i--)
	cout << line(i);
}

void reverse_words(string line){

}
