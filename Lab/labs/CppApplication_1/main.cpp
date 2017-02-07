#include <iostream>
  using namespace std;
  int main(int argc, char** argv)
  {
    //Declare variable 
    char n[4];
    
     for(int i=0;i<4;i++)
    cout<<"Please enter 4 numbers:"<<endl;
    cin>>n[i]
    
    
    for(int i=0;i<4;i++)
    {
        if (n[i]>10)
            cout << '?';
        else
            for (int j=0;j<n[i]-'0';j++)
                cout << '*';
        
        cout<<endl;
    }
    
    return 0;
}
