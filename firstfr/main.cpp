#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout <<"Enter your midterm, homework, final score from 1-100 in order: "<< endl;
    int mid, how, fi;
    cin>>mid>> how>> fi;
    mid=(mid/100)*40;
    how=(how/100)*20;
    fi=(fi/100)*40;
    int grade=mid+how+fi;

    if (grade>=80)
        cout<<"grade four Physic Baby!!!"<< endl;
    else if (grade>=75)
        cout<<"grade 3.5 Physic Baby!!!"<< endl;
    else if (grade>=70)
        cout<<"grade 3 Physic Baby!!!"<< endl;
    else if (grade>=65)
        cout<<"grade 2.5 Physic Baby!!!"<< endl;
    else if (grade>=60)
        cout<<"grade 2 Physic Baby!!!"<< endl;
    else
        cout<<"grade 1 Physic"<< endl;

    return 0;
}
