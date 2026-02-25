/*********************************
Author:Dayle Edwards ID#: 1807527
Date:February 24,2026
Lab Question: 4
A hospital monitors 10 patients over 7 days.
    a.	Rows → Patients
    b.	Columns → Days
    c.	Store daily heart rate readings (random between 60–120 bpm). 
Create functions to:
    a.	Find the average heart rate per patient.
    b.	Identify patients with any reading above 100.
    c.	Find the overall highest heart rate recorded.
    d.	Return both patient number and day of highest reading.
***********************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rate_avg(int all_pt);
int high_risk(int hospital,int risk);
int athlete(int hospital,int highest);
int patient_monitor(int highest,int hospital[8][11],int monitor);

int main()
{
    srand(time(NULL));
    int hospital[8][11],heart_rate,all_pt=0,risk=0,highest=0,monitor[2]={-1,0};
    for (int v=0;v<7;v++)
    {
        for(int x=0;x<10;x++)
        {
            hospital[v][x]=60+rand()%61;
            printf("\nDay %d\n Patient %d - %dBPM",v+1,x+1,hospital[v][x]);
            all_pt+=hospital[v][x];
            risk=high_risk(hospital[v][x],risk);
            highest=athlete(hospital[v][x],highest);
        }
    }
    printf("\n\nThere are %d high risk patients with heart rates over 100 BPM",risk);
    printf("\nHighest heart rate - %d BPM\n",highest);
    heart_rate=rate_avg(all_pt);
    printf("The Average Heart Rate is %d BPM",heart_rate);
    monitor[0]=patient_monitor(highest,hospital,monitor[0]);
    monitor[1]=patient_monitor(highest,hospital,monitor[1]);
    printf("\nPatient #%d admitted on day %d with a heart rate of %d BPM is our ATHLETE!\n",monitor[1]+1,monitor[0]+1,highest);
    return 0;
}
int rate_avg(int all_pt)
{
    return (all_pt/70);
}
int high_risk(int hospital,int risk)
{
    if(hospital>100)
    {
        printf("  HIGH RISK!");
        risk=risk+1;
    }
    return risk;
}
int athlete(int hospital,int highest)
{
    if (hospital>highest)
    {
        highest=hospital;
    }
    return highest;
}
int patient_monitor(int highest,int hospital[8][11],int monitor)
{
    int exit=0;
    for(int y=0;y<7;y++)
    {
        if(exit)
        {
            break;
        }
        for(int z=0;z<10;z++)
        {
            //printf("\nday.%d pt.%d %d BPM\n",y+1,z+1,hospital[y][z]);
            if(hospital[y][z]==highest)
            {
                if(monitor==-1)
                {
                    exit=1;
                    return y;
                }else{
                    exit=1;
                    return z;
                }
                break;
            }
        }
    }
}