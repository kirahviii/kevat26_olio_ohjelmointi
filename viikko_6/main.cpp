#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main ()
{
  int selection = 0;
  vector <Student> studentList;

  do
    {
      cout << endl;
      cout << "Select:" << endl;
      cout << "0 = Add students" << endl;
      cout << "1 = Print all students" << endl;
      cout << "2 = Sort and print students according to Name" << endl;
      cout << "3 = Sort and print students according to Age" << endl;
      cout << "4 = Find and print student" << endl;
      cin >> selection;

      switch(selection)
      {
        case 0:{
            string sName;
            int sAge;
            cout << "Give student's name: " << endl;
            cin >> sName;
            cout << "Give student's age: " << endl;
            cin >>  sAge;
            studentList.emplace_back(sName,sAge);   //add new student to vector
            break;
        }
          
        case 1:{
            cout << "Student's names: " << endl;
            for(auto &s : studentList){
                cout << s.getName() << endl;            
            }
            break;
        }

        case 2:{
            sort(studentList.begin(),studentList.end(), [] (Student &a, Student &b){
                return a.getName() < b.getName();
            });
            for(auto &s : studentList){
                s.printStudentInfo();
            }
            break;
        }
		  
        case 3:{
            sort(studentList.begin(),studentList.end(), [] (Student &a, Student &b){
                return a.getAge() < b.getAge();
            });
            for(auto &s : studentList){
                s.printStudentInfo();
            }
            break;
        }
		  
        case 4:{
            string sName;
            cout << "Give a student's name: " << endl;
            cin >> sName;

            vector<Student>::iterator it;
            it = find_if(studentList.begin(),studentList.end(), [sName] (Student &a){
                return sName == a.getName();
            });
            if(it==studentList.end()){
                cout << "No student named " << sName << " found" << endl;
                break;
            }
            it->printStudentInfo();
            break;
        }
          
        default:
          cout<< "Wrong selection, shutting processes down...tyn tyn tyy"<<endl;
          break;
        }
      }while(selection < 5);

  return 0;
}