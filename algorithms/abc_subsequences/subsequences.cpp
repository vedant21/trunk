#include <iostream>
#include<string>
using namespace std;


long long getCombinaitons(string str){
    long long aCount=0,bCount=0,cCount=0;
    for(int i=0;i<str.length();i++){
        if(str.at(i)=='a'){
            aCount=1+2*aCount;
        } else if(str.at(i)=='b'){
            bCount=aCount+2*bCount;
        } else if(str.at(i)=='c'){
            cCount=bCount+2*cCount;
        }
    }
    return cCount;
}
int main() {
	//code
	int t;
	cin>>t;
	cin.ignore();
	for(int i=0;i<t;i++){
	    string str;
    	getline(cin,str);
    	cout<<getCombinaitons(str)<<endl;
	}
	
	return 0;
}