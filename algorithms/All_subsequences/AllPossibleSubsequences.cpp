#include <iostream>
#include <vector>
using namespace std;

vector<string> generateAllSubsequences(string str){
    if(str.size()==0){
        vector<string> emptySeq={""};
        return emptySeq;
    }
    
    vector<string> subseqTillNow=generateAllSubsequences(str.substr(0,str.size()-1));
    vector<string> subSeq;
    vector<string>::iterator itr;
    for(itr=subseqTillNow.begin();itr!=subseqTillNow.end();itr++){
        subSeq.push_back(*(itr));
    }
    for(itr=subseqTillNow.begin();itr!=subseqTillNow.end();itr++){
        subSeq.push_back(*(itr)+str.at(str.size()-1));
    }
    return subSeq;
}


int main() {
	vector<string> strV=generateAllSubsequences("ABC");
	vector<string>::iterator itr;
	for(itr=strV.begin();itr!=strV.end();itr++){
	    std::cout << *(itr) << std::endl;
	}
	cout<<"Total no. of sequences : "<<strV.size();
	return 0;
}
