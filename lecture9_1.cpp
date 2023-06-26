// #include <iostream>
// using namespace std;
// int compare(int a, int b){
//     int c;
//     if(a>b)
//     {
//         c=a;

//     }
//     else
//     {
//         c=b;
//     }
//     return c;
// }
// int compare(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int compare(int a, int b){
//     if(a==5){
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
#include <iostream>
using namespace std;
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    a=3;
    b=5;
    int c;
    c = sum(a,b);
    cout<<c;
    return 0;
}
