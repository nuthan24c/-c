#include <iostream>

using namespace std;

int main() {

    for(int i =0 ; i<=10; i++)
    cout<<" "<<i <<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int x,y;
    cin>>x;
    cin>>y;
    x=x+y-(y=x);
    cout<<x <<" "<<y;
}
