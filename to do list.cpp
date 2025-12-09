//TO DO LIST 
#include<iostream>
#include<string>
using namespace std;

int main(){
    string tasks[20];
    bool done[20]={false};
    int count=0;
    int choice;
    
    cout<<"SIMPLE TASK MANAGER\n";
    
    while(true){
        cout<<"\n1. ADD TASK\n";
        cout<<"2. VIEW TASKS\n";
        cout<<"3. MARK DONE\n";
        cout<<"4. DELETE TASK\n";
        cout<<"5. QUIT\n";
        cout<<"Choice: ";
        cin>>choice;
        cin.ignore(); // Clear input buffer
        
        if(choice==1 && count<20){
            cout<<"Task: ";
            getline(cin,tasks[count]);
            cout<<"Added!\n";
            count++;
        }
        else if(choice==2){
            cout<<"\nTasks:\n";
            for(int i=0;i<count;i++){
                cout<<i+1<<"."<<tasks[i]<<(done[i]?"[DONE]":"")<<endl;
            }
        }
        else if(choice==3){
            int num;
            cout<<"Task number: ";
            cin>>num;
            if(num>0 && num<=count){
                done[num-1]=true;
                cout<<"Marked done!\n";
            } else {
                cout<<"Invalid task number!\n";
            }
        }
        else if(choice==4){
            int num;
            cout<<"Task number: ";
            cin>>num;
            if(num>0 && num<=count){
                for(int i=num-1;i<count-1;i++){
                    tasks[i]=tasks[i+1];  // Fixed: tasks not task
                    done[i]=done[i+1];
                }
                count--;
                cout<<"Deleted!\n";
            } else {
                cout<<"Invalid task number!\n";
            }
        }
        else if(choice==5){
            cout<<"Bye!\n";
            break;
        }
        else{
            cout<<"Invalid choice or list full!\n";
        }
    }
    return 0;
}
