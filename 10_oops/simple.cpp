#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Animal {
public:
  int age;
  string name;

  Animal(Animal &copy) {
      this->age = copy.age;
     this->name  = copy.name; 
  }

  Animal() {
      this->age = 0;
      this->name = " ";
  }

  Animal(int age, string name) {
      this->name = name;
      this->age = age;
  }
  void eat() {
      
  }

  void aging(int age) {
      this->age = age;
  }
};


int main() {
    cout << sizeof(Animal) <<endl;
    Animal * suresh = new Animal;
    suresh->age = 5;
    cout << suresh->age << endl;
    
    (*suresh).name = "nigga";
    cout<< suresh->name <<endl;
    Animal * dog = new Animal(5, "dog") ;
    Animal *a = dog;
    Animal c(*a);

    return 0;
}