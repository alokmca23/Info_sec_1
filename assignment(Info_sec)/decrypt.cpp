#include <iostream>
#include <vector>
#include <string>
using namespace std;

void encryption_call(string plain_text, int key, int size)
{
     vector<char> temp(size);
   
   cout<<"Encrypted text :"<<endl;
   
   for (int i = 0; i < size; i++) 
   {
       temp[i] = (plain_text[i]-'A'  + key ) % 26 + 'A'; 
       cout << temp[i];                    
   }
}

void decryption_call(string cipher_text, int key, int size)
{
    vector<char> temp(size);
    cout<<"Original text "<<endl;
    
    for(int i=0;i<size;i++)
    {
        if(cipher_text[i]-'A'-key<0)
            temp[i]=(cipher_text[i]-'A'-key)+26+'A';
        else
            temp[i]=(cipher_text[i]-'A'-key)+'A';
         
        cout<<temp[i];
    }
}
int main() 
{  
  int choice;
  cout<<"Enter your choice want to encrypt / decript( 1 / 2)"<<endl;
  cin>>choice;
  if(choice==1)
  {
   string plain_text;
   cout << "Enter plain text(CAPITAL LETTERS): ";
   cin >> plain_text;             // taking input of plain text;
   
   int key;
   cout << "Enter key(Integer):";       // teking input of key
   cin >> key;
   int size = plain_text.size();
  
  encryption_call(plain_text,key,size);
  }
  else{
      string cipher_text;
      cout << "cipher text: ";
      cin >> cipher_text;             // taking input of plain text;
   
      int key;
      cout << "Enter key: ";       // teking input of key
      cin >> key;
      int size = cipher_text.size();
  
     decryption_call(cipher_text,key,size); 
  }
  
   
   return 0;
}
