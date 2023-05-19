#include <bits/stdc++.h>
using namespace std;

int countFreq(string& substring, string& mystring)
{
    int M = substring.length();
    int N = mystring.length();
    int match = 0;

    for (int i = 0; i <= N - M; i++) {

        int j;
        for (j = 0; j < M; j++)
            if (mystring[i + j] != substring[j])
                break;


        if (j == M) {
            match++;
        }
    }
    return match;
}


int main()
{
    int a;
    cin>>a;

    for(int i=0;i<a;i++){

    string mystring;
    //cout << "input whole String: "<< endl;
    cin>>mystring;

    string substring;
    //cout << "input substring: ";
    //getline (cin, substring);
    cin>>substring;



    cout << "For Case "<< i+1<< ":"<< countFreq(substring, mystring)<<endl;


    }


    return 0;



}
