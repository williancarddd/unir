#include <iostream>
#include <string.h>
#include <regex>

using namespace std;

bool mycomp(string a, string b){
	return a<b;
}

vector<string> alphabaticallySort(vector<string> a){
	int n=a.size();
	sort(a.begin(),a.end(),mycomp);
	return a;
}

vector<string> removeDuplicates(vector<string> a){
  int n=a.size();
  vector<string> b;
  b.push_back(a[0]);
  for(int i=1;i<n;i++){
    if(a[i]!=a[i-1]){
      b.push_back(a[i]);
    }
  }
  return b;
}

int main() {
  //read text input
  string text;
  //A entrada contém no máximo 10000 linhas de texto, cada uma delas com no máximo 200 caracteres. O fim de entrada é determinado pelo EOF.
  while(cin.eof()==false){
    getline(cin,text);
    //remove all non-alphabetic characters
    text=regex_replace(text,regex("[^a-zA-Z]")," ");
    //convert all characters to lowercase
    transform(text.begin(),text.end(),text.begin(),::tolower);
    //split the string into words
    vector<string> words;
    string word;
    stringstream ss(text);
    while(ss>>word){
      words.push_back(word);
    }
    //sort the words alphabetically
    words=alphabaticallySort(words);
    //remove duplicates
    words=removeDuplicates(words);
    //print the words
    for(int i=0;i<words.size();i++){
      cout<<words[i]<<endl;
    }
  }
  
  
  
  return 0;
}