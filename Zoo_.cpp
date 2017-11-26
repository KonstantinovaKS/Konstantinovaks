#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


class Animal{
    private:
    int age;
    string name;
    int paswNum;
    int helth;
    bool in = true;

    public:
    Animal(){
    age = 0;
    name = "0";
    }
    void setAnimal(){
        helth = 1+ rand() %100;

        cout<< " Add age"<<endl;
        cin>>age;
        cout<<"Add name" <<endl;
        getline(cin, name);
        getline(cin, name);
        cout<<"Add how mutch pasw"<<endl;
        cin>>paswNum;
<<<<<<< HEAD
   }
=======

    }
>>>>>>> c3f91e33165e8c0ab4b6f0b32129d25763d1752a

    void animalGetAnimal(){
        cout<<"Age is:"<< age <<endl;
        cout<<"Name animal:"<< name <<endl;
        cout<<"Paswnum :"<<paswNum<<endl;
        cout<<"Helth :"<<helth<<endl;
        cout<<"in:"<<in<<endl;
    }

};
class Zoo{

    private:
    Animal m_a[20];
    int m_size ;

    public:
            Zoo(){
        m_size = 0;
    }
      void showAnimal(){
          for(int i = 0; i < m_size; i++){
            m_a[i].animalGetAnimal();
          }
        }
      void addAnimal(){
        m_a[m_size].setAnimal();
        m_size++;
      }
      void deleteAnimal(){
         for(int i = 0; i < m_size; i++){
            m_a[i].animalGetAnimal();
          }
         int kill;
         cin>>kill;
          Animal A[20];
          int index = 0;
      for( int i = 0 ; i< m_size;i++){
        if(i!= kill){
            A[index] = m_a[i];
          index++;
       }
      }
      m_size--;
      for(int i = 0 ;i < m_size; i++){
        m_a[i] = A[20];
      }

      }
};


class Manager{
private:
    Zoo Z;
    int choice;
    void userChoise(){
        cin>>choice;
    switch(choice){
     case 1:
         Z.addAnimal();

<<<<<<< HEAD
    break;
    case 2:
            Z.showAnimal();
    break;
    case 3:
        Z.deleteAnimal();
    break;
=======
        break;
      case 2:
            Z.showAnimal();
        break;
      case 3:
        Z.deleteAnimal();
        break;
>>>>>>> c3f91e33165e8c0ab4b6f0b32129d25763d1752a
     }

    }

public:
    Manager(){

    };
    void show(){
        for(;;){
            cout<<"1: add animal"<<endl;
            cout<<"2: see animal"<<endl;
            cout<<"3: delete animal"<<endl;

            userChoise();
        }
    }
};
int main()
{

    Manager M;
    M.show();
}
