#include<bits/stdc++.h>
using namespace std;

void GPA_calculator();
void CGPA_calculator();

int main(){
    system("cls");
    int input;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"                GPA & CGPA Calculator              "<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"                     -:MENU:-                      "<<endl;
    cout<<"                                                   "<<endl;
    cout<<"1. Calculate GPA (Grade Point Average)             "<<endl; 
    cout<<"2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"3. Exit Application                                "<<endl;
    cout<<"---------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice from the MENU:-";
    cin>>input;
    switch (input)
    {
    case 1:
        GPA_calculator();
        break;

    case 2:
        CGPA_calculator();
        break;

    case 3:
        cout<<"Exit succesfully.";
        exit(1);
        break;
    default:
        cout<<"You have entered wrong input please try again!"<<endl;
        goto sub;
        break;
    }
}
void GPA_calculator(){
    int q;
    system("cls");
    cout<<"-------------------GPA Calculating-------------------"<<endl;
    cout<<"How many subject's points do you want to calculate? :"<<endl;
    cin>>q;

    float credit[q];
    float point[q];
    cout<<endl;
    for(int i=0;i<q;i++){
        cout<<"Enter the credit for the subject"<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject"<<i+1<<": ";
        cin>>point[i];
        cout<<"-----------------------------------------------------"<<endl;  

    }

        float sum=0;
        for(int j=0;j<q;j++) sum+=credit[j]*point[j];

        float Total_Credit=accumulate(credit,credit+q,0);
        cout<<"Total Points:"<<sum<<".Total Credits:"<<Total_Credit<<" .Total GPA:"<<sum/Total_Credit<<" ."<<endl;

        sub:
        int inmenu;
        cout<<"1. Calculate Again"<<endl;
        cout<<"2. Go Back to Main Menu"<<endl;
        cout<<"3. Exit This App"<<endl;
        cout<<"Your Input: "<<endl;
        cin>>inmenu;

        switch (inmenu)
        {
        case 1:
            GPA_calculator();
            break;
        
        case 2:
            main();
            break;

        case 3:
            exit(0);
        
        default:
            cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
            goto sub;
        }
}

void CGPA_calculator(){
    system("cls");
    int l;
    cout<<"----------------CGPA Calculating--------------"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<endl;
    float semrs[l];
    for(int i=0;i<l;i++){
        cout<<"Enter Semester "<<i+1<<"Result(GPA):";
        cin>>semrs[i];
        cout<<endl;
    }
    float semtot=0;
    for(int i=0;i<l;i++){
        semtot+=semrs[i];
    }
    cout<<"*********Your CGPA is"<<semtot/l<<"***********"<<endl;
    sub:
    int inmenu;
    cout<<"1. Calculate Again"<<endl;
    cout<<"2. Go back to main menu"<<endl;
    cout<<"3. Exit This App"<<endl;
    cout<<"your Input:"<<endl;
    cin>>inmenu;
    switch (inmenu)
    {
    case 1:
        CGPA_calculator();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(0);
    default:
        cout<<"You have entered wrong input."<<endl;
        cout<<"please try to choose valid option."<<endl;
        goto sub;
    }


}