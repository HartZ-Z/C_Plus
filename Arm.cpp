#include<iostream>
using namespace std;

class arm
{
  private:
    int n;
  public:
    arm (int x)
    {
      n=x;
    }
    void check () {
      int t, c=0 , s=0;
      t=n;
      while (t!=0) {
        t=t/10;
        c++;
      }
      t=n;

      while (t!=0){
        int d;
        d=t%10;
        t=t/10;
        s=s+ pow(d,c);

      }
    if (n == s){
    cout<<"\n Given number is armstrong: " <<n ;

    }

    else {
      cout<<"\n Given number is not armstrong: " <<n ;
}

}

};

int main (){
  int n;
  cout<<"\n Enter a number you want to check: ";
  cin>>n;
  arm a(n);
  a.check();

}