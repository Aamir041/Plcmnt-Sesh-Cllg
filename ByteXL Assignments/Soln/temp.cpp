#include <iostream>
#include<limits.h>
#include<bits/stdc++.h>

using namespace std;

string minWord(vector<string> words){
  string min = words[0];
  for(int i=1;i<words.size(); i++){
    if(min.size() > words[i].size()){
      min = words[i];
    }
  }
  return min;
}

int main() 
{
    int n;
    cin>>n;
    vector<string> words;
    for(int i=0; i<n; i++){
      string str;
      cin>>str;
      words.push_back(str);
    }
    
    string minStr = minWord(words);
    string result = "";
    for(int i=0; i<minStr.size(); i++){
        bool currStr = true;
        for(int j = 0; j<words.size(); j++){
            if(minStr[i] != words[j][i]){
                currStr = false;
                break;
            }
        }
        if(currStr){
            result += minStr[i];
        }
        else{
            break;
        }
    }
    cout<<result<<endl;
}