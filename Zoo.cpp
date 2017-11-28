#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


class Animal{
    private:
    int age;
    char name[26];
    int paswNum;
    int helth = 1+rand()%100;
    bool in = true;

    public:
    Animal(){
    age = 0;
        }
    void setAnimal(){
      for(int i=0;  i< '\0'; i++){
       name[i]=0;
   }

        cout<< " Add age"<<endl;
        cin>>age;
        cout<<"Add name" <<endl;
        cin>>name;
        cout<<"Add how mutch pasw"<<endl;
        cin>>paswNum;

    }

    void animalshowAnimal(){
        cout<<"Age is:"<< age <<endl;
        cout<<"Name animal:"<< name <<endl;
        cout<<"Paswnum :"<<paswNum<<endl;
        cout<<"Helth :"<<helth<<endl;
        cout<<"in:"<<in<<endl;
    }

};
class Zoo{

    private:
    Animal a[20];
    int size ;

    public:
            Zoo(){
        size = 0;
        int n = 0;
    }
      void showAnimal(){
          for(int i = 0; i < size; i++){
            a[i].animalshowAnimal();
          }
        }
      void addAnimal(){
        a[size].setAnimal();
        size++;
      }
      void deleteAnimal(){
         for(int i = 0; i < size; i++){
            a[i].animalshowAnimal();
          }
         int kill;
         cin>>kill;
          Animal A[20];
          int index = 0;
      for( int i = 0 ; i< size;i++){
        if(i!= kill){
            A[index] = a[i];
          index++;
       }
      }
      size--;
      for(int i = 0 ;i < size; i++){
        a[i] = A[20];
      }

      }
};


class Manager{
private:
    Zoo Z;
    int choice;
    int exit;
    int userChoise(){
        cin>>choice;
     switch(choice){
     case 1:
         Z.addAnimal();

        break;
       case 2:
            Z.showAnimal();
        break;
       case 3:
        Z.deleteAnimal();
       break;

       case 4:
      return 0;
       break;
    }
    }
public:
    Manager(){
    exit = 9;
    };
    void show(){
        for(int i = 0;i < 20; i++){
            cout<<"1: add animal"<<endl;
            cout<<"2: see animal"<<endl;
            cout<<"3: delete animal"<<endl;
            cout<<"4: exit"<<endl;
            exit = userChoise();
            if(exit == 0){
                break;
            }
        }
    }
};
int main()
{

    Manager M;
    M.show();
}
