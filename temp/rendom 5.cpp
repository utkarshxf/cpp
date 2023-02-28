#include <iostream>
using namespace std;
int area(int);
int area(int, int);
float area(float);
float area(float, float);
int main()
{
  int s, l, b;
  float r, bs, ht;
  cout << "Enter side of a square:";
  cin >> s;
  cout << "Enter length and breadth of rectangle:";
  cin >> l >> b;
  cout << "Enter radius of circle:";
  cin >> r;
  cout << "Enter base and height of triangle:";
  cin >> bs >> ht;
  cout << "Area of square is" << area(s);
  cout << "\nArea of rectangle is " << area(l, b);
  cout << "\nArea of circle is " << area(r);
  cout << "\nArea of triangle is " << area(bs, ht);
}
int area(int s)
{
  return (s * s);
}
int area(int l, int b)
{
  return (l * b);
}
float area(float r)
{
  return (3.14 * r * r);
}
float area(float bs, float ht)
{
  return ((bs * ht) / 2);
}


//////

❓) Wap to implement srtf scheduling algorithm in bash

Ans: 👇 Total Length: 1219 

#! /bin/bash

#Declare the arrays for burst and arrival time
declare -a arrival
declare -a burst

#Declare the index
index=-1 

#Declare the boolean flag
int=0

#Take user input
echo -n "Enter the number of processes: "
read n
for (( i=0; i<$n; i++ )) 
do

#Get arrival time and burst time 
echo -n "Arrival time for process P$i: "
read arrival[$i]
echo -n "Burst time for process P$i: "
read burst[$i]

#Add 1 to index
index=$(($index+1))

#declare boolean
done[$i]=0

done

#Loop for the scheduling
k=0
while [ $int -ne $n ]
do
        minimum=999
        for (( i=0; i<$n; i++ ))
        do

#Checking condition
                if [[ ${done[$i]} -eq 0 && ${arrival[$i]} -le $k ]]
                then

#Condition
                        if [ ${burst[$i]} -lt $minimum ]
                        then

#Assignt the value to index
                                minimum=${burst[$i]}
#Assign value to index
                                index=$i
                        fi
                fi

        done


#Increment the int value
        int=$(($int + 1))
#Printas the process
        echo -e "\t\tP$index"
#Increment the burst value
        k=$(($k + ${burst[$index]}))
#Boolean flag
        done[$index]=1
done
