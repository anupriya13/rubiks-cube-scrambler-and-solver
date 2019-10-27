#include <iostream>
#include <stack>
using namespace std;
#include "cube.h"
#include "cube.cpp"
#include "side.h"
#include "side.cpp"
void f(int x);
int main()
{
	int i,j;
    int c = 1;
    cout<<" 3*3 RUBIK'S CUBE SOLVER "<<endl<<endl;
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(j=0;j<3;j++)
    {for(i=0;i<3;i++)
    {
        cout<< "--- ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(i=0;i<4;i++)
    {
        if(i<3)
        {cout<< "|"<<c<<"  ";
        c++;
        }
        else
          cout<< "|   ";

    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(i=0;i<4;i++)
    {
        cout<< "|   ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(i=0;i<3;i++)
    {
        cout<< "--- ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    }
cout<<"\n";
    for(j=0;j<3;j++)
    {for(i=0;i<12;i++)
    {
        cout<< "--- ";
    }
    cout<<"\n";
    for(i=0;i<13;i++)
    {
        if(i<3 )
        {cout<< "|"<<c<<" ";
        c++;
        }

        else
          cout<< "|   ";
    }
    cout<<"\n";
    for(i=0;i<13;i++)
    {
        cout<< "|   ";
    }
    cout<<"\n";
    for(i=0;i<12;i++)
    {
        cout<< "--- ";
    }
    cout<<"\n";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    c = 46;
    for(j=0;j<3;j++)
    {for(i=0;i<3;i++)
    {
        cout<< "--- ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(i=0;i<4;i++)
    {
        if(i<3)
        {cout<< "|"<<c<<" ";
        c++;
        }
        else
          cout<< "|   ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(i=0;i<4;i++)
    {
        cout<< "|   ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    for(i=0;i<3;i++)
    {
        cout<< "--- ";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<< "    ";
    }
    }
cout<<"\n";
cout<<"\n";
cout<<"There are 6 colors \n r - RED \n g - GREEN \n y - YELLOW \n w - WHITE \n o - ORANGE \n b - BLUE \nletters are mentioned on the position from 1-54\n";
cout<<"\n";
	Cube cube;
	cube.set();
	int input;
	cube.print();
    stack <int> s;
    input = 1;
    cout<< "enter the rotations till you make it scrambled and when you are done enter 0";
	do
	{
		std::cout<<"\nEnter a command from the list\n\n1 - right clockwise\t\n2 - right counterclockwise\t\t\n3 - left"
		<<" clockwise\t\t\n4 - left counterclockwise\n5 - front clockwise\t\n6 - front counterclockwise\t\t\n7 - back clockwise\t\t"
		<<"\n8 - back counterclockwise\n9 - top clockwise\t\n10 - top counterclockwise\t\t\n11 - bottom clockwise\t\t\n12"
		<<" - bottom counterclockwise\n13 - rotate the cube to the right \n\t(making previously left sidenow the front"
		<< "side)\n14 - rotate cube to the left\n0  - to stop scrambling and get the ways to solve scramled cube"<<std::endl;
		std::cin>>input;
        s.push(input);
		switch(input)
		{
			case 1:
				cube.C_right_turn();
				break;

			case 2:
				cube.CC_right_turn();
				break;

			case 3:
				cube.C_left_turn();
				break;

			case 4:
				cube.CC_left_turn();
				break;

			case 5:
				cube.C_front_turn();
				break;

			case 6:
				cube.CC_front_turn();
				break;

			case 7:
				cube.C_back_turn();
				break;

			case 8:
				cube.CC_back_turn();
				break;

			case 9:
				cube.C_top_turn();
				break;

			case 10:
				cube.CC_top_turn();
				break;

			case 11:
				cube.C_bottom_turn();
				break;

			case 12:
				cube.CC_bottom_turn();
				break;

			case 13:
				cube.rotate_to_right();
				break;

			case 14:
				cube.rotate_to_left();
				break;

            case 0:
                {
                    int t,q;
                    cout<<"\nNOW Follow the following rotations on the cube \nto get the desired normal state : \n";
                    stack<int> r;
                    while(!s.empty())
                    {
                        q = s.top();
                        r.push(q);
                        s.pop();
                    }
                    while(!r.empty())
                    {
                        t = r.top();
                        cube.f(t);
                        r.pop();

                    }

                }
                    cout<<"final cube state is \n\n";
                    cube.set();
                    cube.print();
                  break;
		}
		if(input!=0)
		cube.print();
	}while(input != 0);

}
