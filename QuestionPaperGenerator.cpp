#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include <fstream>
#include <iostream>
#include <string>
 
using namespace std;
#define endl "\n"
#define int long long
#define mod 1000000007
#define ull unsigned long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define pb push_back

int32_t main(){
    string s;
    ifstream file("easy.txt");
    vector<string> esy,med,hard;
    if(file.fail())
    {
        cout << "File not Found.";
    }
    while (file.eof() == 0)
    {
        getline(file,s);
        esy.pb(s);
    }
    file.close();
    file.open("med.txt");
    if(file.fail()){
        cout << "File not Found";
    }
    while (file.eof() == 0){
        getline(file , s);
        med.pb(s);
    }
    file.close();
    file.open("hard.txt");
    if(file.fail()){
        cout << "File not Found";
    }
    while (file.eof() == 0)
    {
        getline(file,s);
        hard.pb(s);
    }
    file.close();
    int easycount=0,mediumcount=0,hardcount=0,totalmarks=0,mediumsum=0,hardsum=0;
    cout<<"Enter the total Marks:";
    cin>>totalmarks;
    cout << "Enter the Number of Medium Questions:";
    cin >> mediumcount;
    mediumsum=(mediumcount*5);
    if(mediumsum >totalmarks){
        cout<<"Please Enter valid count for Medium level of Questions. ";
        return 0;
    }
    if(totalmarks-mediumsum>=10){
    cout << "Enter the Number of Hard Question:";
    cin >> hardcount;
    hardsum=(hardcount*10);
    }
    if(mediumsum+hardsum >totalmarks){
        cout<<"Please Enter valid count for Hard level of Questions. ";
        return 0;
    }
    if(totalmarks-hardsum-mediumsum<1){
        cout<<"Please Enter valid count for  Medium and Hard level Question. ";
        return 0;
    }
    easycount=totalmarks-mediumsum-hardsum;
    srand(time(NULL));
    ofstream file2;
    file2.open ("paper.txt");
    unordered_set<int> us,us1,us2;
    int element;

file2<< "                                                                         " <<endl;
file2<< "                                                            XYZ University  " << endl;
file2<< "                                                         Institute of Technology  " << endl;
file2<< "                                              B.Tech in Computer Science and Engineering, Semester - III      " << endl;
file2<< "                                                     2CS302 - DATA STRUCTURE AND ALGORITHMS            " <<endl<<endl;
file2<< "  Roll/Exam No. - __________________                                            Superviseor Signature - __________________      " <<endl<<endl;
file2<< "  Time : 3 Hours                                                                                          max. marks:"<< totalmarks <<endl;
file2<< " __________________________________________________________________________________________________________________________" <<endl; 
file2<< " Instructions:     1.Attemp all questions.                       " <<endl;
file2<< "                   2.Figure to right indicates full Marks.                                                      " <<endl;
file2<< "                   3.Make Suitable assumption-whenever necessary, and specify it correctly.            " <<endl;
file2<< "                                                                         " <<endl;
    
    while(us.size() != easycount) 
    {   
        element = rand() % 25;
        us.insert(element);
    }
    while (us1.size() != mediumcount)
    {
        element = rand() % 25;
        us1.insert(element);
    }
    while (us2.size() != hardcount){
        element = rand() % 25;
        us2.insert(element);
    }
    file2 << "Q-1. Answer the following.                                                                                   " <<"["<<easycount<<"]"<< endl;
    int counta=0,countb=0,countc=0;
    for (auto ele : us)
    {   counta++;
        file2 <<counta<<"."<<" "<< esy[ele] << endl;
    }
    file2 <<endl;
    file2 << "Q-2. Answer the following.                                                                                   " <<"["<< mediumsum <<"]"<< endl;
    for (auto ele : us1)
    {   countb++;
        file2<<countb<<"."<<" "<< med[ele] << endl;
    }    
    file2 <<endl;
    file2 << "Q-3. Answer the following.                                                                                   " <<"["<< hardsum <<"]"<< endl;
    for (auto ele : us2)
    {   countc++;
        file2 <<countc<<"."<<" "<< hard[ele] << endl;
    }
    file2 <<endl<<endl <<"                                                                ***************" << endl;
    file2.close(); 
    cin.get();

    return 0;
}
