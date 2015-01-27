#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char* argv[])
{
ofstream out(argv[1]);
out<<argv[1];
return 0;
}
