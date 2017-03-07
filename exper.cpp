#include<iostream>
#include<cstring>
using namespace std;
class divideerror{
  
  private:
  char* message;
  int errorcode;
  public:
    divideerror(char * message,int errorcode)
    {
        int len=strlen(message);
        
        this->message= new char*[len+1];
        strcpy(this->message,message);
        this->errorcode=errorcode;
    }

  char* getmessage()
  {
      return message;
  }
  int geterrorcode()
  {
      return errorcode;
  }
  
};
    int divide(int num1,int num2)
    {
        if(num2==0)
        {
                    throw new divideerror(12201,"divide is not possoble with 0");

        }
        return num1/num2;
int main()
{
    int n1,n2,res;
    cout<<"enter the value num1"<<endl;
    cin>>n1;
    cout<<"entef thevalue num2"<<endl;
    cin>>n2;
    try{
         res=divide(n1,n2)
    cout<<"the result :"<<res<<endl;
    }
   catch(divideerror *ptr)
   {
       cout<<"\n the errorcode"<<ptr->geterrorcode<<endl;
       cout<<"\n the message"<<ptr->geterrorcode<<endl;
   }
    
    return 0;
}
