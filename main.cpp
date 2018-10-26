#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n,i,j,m,x,c,num=0;
    cin>>n;
    string input ,text;
    vector<string> a;
    for(i=0;i<n;i++){
            cin>>input;
        a.push_back(input);
    }

    int q;
    j=n-1;
    cin>>q;
    for(i=0;i<q;i++){
            cin>>input;

        if(input[0]==':'){
            text=input[1];
            num=stoi(text);
            j=num-1;
        }
        else if(input=="dd"){ a.erase(a.begin()+j);

                   if(j==a.size())
                    j--;
                        }
        else if(input=="i"){cin>>m;
                    cin.ignore();
                    for(x=0;x<m;x++){

                        getline(cin,text);

                        a.push_back(text);
                    }
        }
        else if(input=="y"){   c=j+1;
        }
        else if(input=="p") {  if(c!=0){
                      text=a[c-1];
                      a.push_back(text);      }
        }
        else if(input=="dy") { text=a[j];
                    a.erase(a.begin()+j);

                   if(j==a.size())
                    j--;
        }



   }
for(i=0;i<a.size();i++){
        cout<<a[i]<<endl;
   }

    return 0;
}

