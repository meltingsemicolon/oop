// wap to show the destructor call such that it prints the message "memory is released".
 #include<iostream>
 using namespace std;
 class Runprog
 {
 public:
 Runprog()//constructor
 {
 cout<<"Constructor executed"<<endl;
 }
 ~Runprog()//destructor
 {
 cout<<"memory is released"<<endl;
 }
 };

 int main()

 {
 Runprog t; 
 cout<<"Press enter";
 cin.get();
 cout<<"destructor executing"<<endl;
 cout<<"Press enter ";
 cin.get();
 }