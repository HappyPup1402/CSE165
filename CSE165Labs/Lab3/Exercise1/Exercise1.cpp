#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Text{
    string text;
    string line;
    public:
        Text(){};

        Text(string file){
            ifstream myFile(file.c_str());
            if(myFile.is_open()){
                while(getline(myFile,line)){
                    text += line + '\n';
                }
                myFile.close();
            }
        }

        string contents(){
            return text;
        }
};

int main(){
    Text text1;
    Text text2("file.txt");

    
    cout<<"Contents of text1: " <<text1.contents()<<endl;
    cout<<"Contents of text2: " <<text2.contents()<<endl;
}