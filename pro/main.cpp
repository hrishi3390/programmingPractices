#include <iostream>
#include <vector>

using namespace std;


struct employee{
    int value;
    int manager; // index of manager of this employee
    vector<int> children;
    int productivity;
};

int calProductivity(vector<employee> &empl)
{
    int companyProducitivity = 0;
    for(auto &emp : empl)
    {
        for(int j=0 ;j<emp.children.size(); j++)
        {
            if(emp.value >=0 && emp.children[j]<= emp.value)
                emp.productivity += emp.children[j];
            else{
                emp.productivity  += emp.value ;
            }
        }
    }
    
    for(auto emp :empl){
        companyProducitivity += emp.productivity;
    }
    return companyProducitivity + empl[0].value;
}
void addToManagerList(vector<employee> &empl,int manager, int value){
    if(manager>=0)
        empl[manager].children.push_back(value);
}

int main(){
    int N;
    int value;
    int manager;
    
    cin>>N;
    vector<employee> empl;
   
    for(int i =0 ; i<N ; i++)
    {
        cin>> value;
        cin>> manager;
        employee e;
        e.value = value;
        e.manager = manager;
        addToManagerList(empl, manager, value);
        empl.push_back(e);
    }
   
    
    cout<< calProductivity(empl)<<endl;
}
