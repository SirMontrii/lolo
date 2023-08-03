#include<iostream>
#include<conio.h>
#include <cstring>
using namespace std;


void concetation(char* s1,char* s2);
void compare(char* s1,char* s2);
int length(char* s1);
void Address(char* s1);
void reverse(char* s1);
void UpperCase(char* s1);
void insertString(char* s1, char* s2, int pos);

int main() {
	char s1[100], s2[100] ;
	int choice,pos;
	do {
		cout<<endl;
        cout << "FOR SHOW THE ADDRESS OF EACH CHARACTER IN THE STRING PRESS 1\n";
        cout << "FOR CONCATENATE TWO STRINGS PRESS 2\n";
        cout << "FOR COMPARE TWO STRINGS PRESS 3\n";
        cout << "FOR CALCULATE THE LENGTH OF THE STRING (USE POINTERS) PRESS 4 \n";
        cout << "FOR CONVERT ALL LOWERCASE CHARACTERS TO UPPERCASE PRESS 5 \n";
        cout << "FOR REVERSE THE STRING  PRESS 6\n";
        cout << "FOR INSERT THE STRING  PRESS 7\n";
        cout << "FOR EXITPRESS 8\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                cout << "Enter a string: ";
                cin >> s1;
                Address(s1);
                break;
            case 2:
                cout << "Enter first string: ";
                cin >> s1;
                cout << "Enter second string: ";
                cin >> s2;
                concetation(s1,s2);
                break;
            case 3:
                cout << "Enter first string: ";
                cin >> s1;
                cout << "Enter second string: ";
                cin >> s2;
                compare(s1,s2);
                break;
            case 4:
                cout << "Enter a string: ";
                cin >> s1;
                cout << "Length of the string is " << length(s1) << endl;
                break;
            case 5:
                cout << "Enter a string: ";
                cin >> s1;
                UpperCase(s1);
                cout << "Uppercase string is " << s1 << endl;
                break;
            case 6:
                cout << "Enter a string: ";
                cin >> s1;
                reverse(s1);
                cout << "Reversed string is " << s1 << endl;
                break;
            case 7:
                cout << "Enter first string: ";
                cin >> s1;
                cout << "Enter second string: ";
                cin >> s2;
                cout << "Enter position: ";
                cin >> pos;
                insertString(s1, s2, pos);
                cout << "Resultant string is " << s1 << endl;
                break;
            case 8:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        
    } while(choice != 8);
    
    return 0;


}

void concetation(char* s1,char* s2){
	int length, j;
  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }
  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  s1[length] = '\0';

  cout<<"\n After concatenation: ";
  cout<<s1;
}
void compare(char* s1,char* s2){
  	int flag = 0;
if(length(s1) == length(s2))
{
for(int i=0; i<length(s1); i++)
{
if(s1[i] != s2[i])
{
flag = 1;
break;
}
}
if(flag == 0)
cout << "Strings are equal\n";
else
cout << "Strings are not equal\n";
}
else
cout << "Strings are not equal\n";
}

int length(char* str)
{
int len = 0;
while(*(str+len) != '\0')
len++;
return len;
}

void Address(char* s1)
{
    for(int i=0; i<length(s1); i++)
        cout << "Address of " << s1[i] << " is " << (void*)&s1[i] << endl;
}
void reverse(char* s1)
{
int len = length(s1);
for(int i=0; i<len/2; i++)
{
char temp = s1[i];
s1[i] = s1[len-1-i];
s1[len-1-i] = temp;
}
}
void UpperCase(char* s1)
{
for(int i=0; i<length(s1); i++)
{
if(s1[i] >= 'a' && s1[i] <= 'z')
s1[i] -= 32;
}
}
void insertString(char* s1, char* s2, int pos)
{
int len1 = length(s1);
int len2 = length(s2);
for(int i=len1-1; i>=pos-1; i--)
s1[i+len2] = s1[i];
for(int i=pos-1; i<pos-1+len2; i++)
s1[i] = s2[i-pos+1];
s1[len1+len2]='\0';
}
