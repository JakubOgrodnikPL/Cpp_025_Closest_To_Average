#include <iostream>
#include <cmath>

using namespace std;

double sum, average, m;
double tab[5];
double tab2[5];
int in;
double in2;

int main()
{
    cout << "This program gets 5 double numbers and calculate which of them is closest to the average:" << endl;
    cout << "Give five double numbers (separated by space or enter): "<<endl;

    for(int i=0; i<5; i++)
        {
        cout<<"Insert element "<<i+1<<": ";
        cin>>tab[i];
        }

        for(int i=0; i<5; i++)
        {
        sum+=tab[i];
        }

        average=sum/5;

        cout<<"Average is: "<<average<<endl;

        for(int i=0; i<5; i++)
        {
        tab2[i]=abs(tab[i]-average);
        }
        cout<<"The array of distances: "<<endl;
        for(int i=0; i<5; i++)
        {
        cout<<tab2[i]<<endl;
        }

        m=tab2[0];
        in=0;
        for(int i=1; i<5; i++)
            {
                if (tab2[i]<m)
                    {
                        m=tab2[i];
                        in=i;
                    }
            }

        in2=tab[in];
        cout<<"Minimal distance from average is: "<<m<<endl;
        cout<<"Closest to average is/are: "<<endl;

        for(int i=0; i<5; i++)
            {
                if (tab2[i]+m==0 || tab2[i]-m==0)
                {
                    cout<<tab[i]<<endl;
                }
            }

    cout<<endl<<"Press any key to exit";
    getchar();
    getchar();

    return 0;
}
