#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    ofstream out("myfile.txt");
    cout<<"Enter strings.";
        getline(cin,s);
        out<<s<<endl;
    out.close();
    ifstream in("myfile.txt");
        getline(in,s);
        cout<<s<<endl;
          for(int i=0;i<s.length();i++)
    {
        if (isupper(s[i]))
        s1+=tolower(s[i]);
        if (islower(s[i]))
        s1+=toupper(s[i]);
        s1+=s[i];
    }
     cout<<s1;
}