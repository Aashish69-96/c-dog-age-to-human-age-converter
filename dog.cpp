
#include <iostream>

int main() {
//declaration 
int dog_age,human_age,earlier_age=21,later_age;
std::string dog_name;

//procedure
std::cout<<"Enter your's dog name:";
std::cin>>dog_name;
std::cout<<"Enter your's dog's age:";
std::cin>>dog_age;
//conditions
if(dog_age>2){
  later_age=(dog_age-2)*4; //calculation
  human_age=later_age + earlier_age;
}
else if(dog_age<=2){
  human_age=dog_age*10.5;
}
std::cout<<"My name is" << dog_name <<"and my dog age is "   << dog_age <<".Similarly human age equals to my age as"  <<human_age;
  
  
  
}
