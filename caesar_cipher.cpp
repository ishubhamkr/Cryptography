#include <bits/stdc++.h>

using namespace std;

string Encrypt(string s, int k)
{
    int i;
    string encrypt="";

    for (int i=0;i<s.length();i++)
    {

        if (isupper(s[i]))
            encrypt += char(int(s[i]+k-'A')%26 + 'A');

         else
            encrypt += char(int(s[i]+k-'a')%26 +'a');
    }

    return encrypt;
}
string Decrypt(string s, int k)
{
    string decrypt="";
    int i,d;

    for (i=0;i<s.length();i++)
    {

        if (isupper(s[i]))
        {
            s[i]= char(int(s[i]-k));
            if(s[i]<'A')
            {
                s[i]=s[i]+'Z'-'A'+1;
                decrypt += char(int(s[i]));
            }
            else
                decrypt += char(int(s[i]));
        }

         else
        {
            s[i]= char(int(s[i]-k));
            if(s[i]<'a')
            {
                s[i]=s[i]+'z'-'a'+1;
                decrypt += char(int(s[i]));
            }
            else
                decrypt += char(int(s[i]));

        }
    }

    return decrypt;
}
int main()
{
    string s;
	int n,k;
	cout<< "Enter 1 to Encrypt"<<"\n";
	cout<< "Enter 2 to Decrypt"<<"\n";
	cin>>n;
	while(n==1||n==2){
	switch(n)
	{
	    case 1: cout<<"Enter the string to encrypt:"<<"\n";
                cin>>s;
                cout<<"Enter the Key:"<<"\n";
                cin>>k;
                cout<<"Cipher Text: ";
	            cout<<Encrypt(s,k);
	            break;
	    case 2: cout<<"Enter the string to decrypt:"<<"\n";
                cin>>s;
                cout<<"Enter the Key:"<<"\n";
                cin>>k;
                cout<<"Plain Text: ";
	            cout<<Decrypt(s,k);
	            break;
	    default: cout<<"Wrong Choice"<<"\n";
                break;
	}
	cout<<"\n";
	cout<< "Enter 1 to Encrypt"<<"\n";
	cout<< "Enter 2 to Decrypt"<<"\n";
	cout<<"Press any other key to end";
	cin>>n;
	}


	return 0;
}
