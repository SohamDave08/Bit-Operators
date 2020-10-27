#include "iostream"
using namespace std;

int main()
{

    //? Left shift operation
    int i = 7;
    int x = i<<5;
    cout<<"Left shift 7 by 2^5 : "<<x<<endl;


    //? Right shift operation
    int j = 192;
    int y = j>>3;
    cout<<"Right shift 192 by 2^3 : "<<y<<endl;


    //? NOT operation
    int h = 5;
    int result = ~h;
    cout<<"NOT ("<<h<<") = "<<result<<endl;


    //? AND operation
    int a = 5;
    int b = 3;
    int c = a & b;
    cout<<"AND ("<<a<<","<<b<<") = "<<c<<endl;


    //? OR operation
    int u = 5;
    int v = 3;
    int w = u | v;
    cout<<"OR ("<<u<<","<<v<<") = "<<w<<endl;


    //? XOR operation
    int e = 5;
    int f = 3;
    int g = e ^ f;
    cout<<"XOR ("<<e<<","<<f<<") = "<<g<<endl;
    return 0;
}