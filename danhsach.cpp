#include <iostream>
#include <vector>
using namespace std;
class student{
    private:
        string name;
        string id;
    public:
        student(){

        }
        student(string name, string id){
            this->name=name;
            this->id=id;
        }
        string getName(){
            return name;
        }
        string getId(){
            return id;
        }
        void setName(string name){
            this->name=name;
        }
        void setId(string id){
            this->id=id;
        }
};
class studentInfo : public student{
    private:
        vector<student*> list;
    public:
        studentInfo() : student(){

        }
        void addStudent(string name, string id){
            student* tmp = new student(name, id);
            list.push_back(tmp);
        }
        void printStudent(int a){
            cout << list[a]->getName();
            cout << " ";
            cout << list[a]->getId();
            cout << '\n';
        }
        void printStudent(){
            for(int a=0;a<list.size();a++){
                cout << list[a]->getName();
                cout << " ";
                cout << list[a]->getId();
                cout << '\n';
            }
        }
};
int main()
{
    studentInfo* list= new studentInfo;
    list->addStudent("NGUYEN HOANG QUAN", "ITITIU21291");
    list->addStudent("DAO MINH HUY","ITCSIU21132");
    list->addStudent("NGUYEN HAI QUAN","ITITWE21104");
    list->printStudent();
    //cout <<"NGUYEN HOANG QUAN ITITIU21291";
    //cout << "DAO MINH HUY ITCSIU21132";
    //cout << " NGUYEN HAI QUAN ITITWE21104";

}
