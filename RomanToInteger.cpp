#include<iostream>
using namespace std;
int main()
{

string s = "IV";
int sum=0;		
	for(int i=0; i<s.size(); i++)
	{
		
		if(s[i] == 'I' && s[i+1] == 'V' ) //Special cases which involve subtraction and the position of 2 of the character values
		{
			sum += 4;
			i++;						//Skip to the next char value after using 2 characters instead of 1
		}
			else if(s[i] == 'I' && s[i+1] == 'X')
			{
				sum += 9;
				i++;
			}
		
				else if(s[i] == 'X' && s[i+1] == 'L')
				{	
					sum += 40;
					i++;
				}
		
					else if(s[i]== 'X' && s[i+1] == 'C')
					{	
						sum += 90;
						i++;
					}
		
						else if(s[i]== 'C' && s[i+1] == 'D')
						{
							sum+= 400;
							i++;
						}
		
							else if(s[i] == 'C' && s[i+1] == 'M')
							{		
								sum+= 900;
								i++;
							}
		
		else if(s[i] == 'I')
			sum += 1;
		
			else if(s[i] == 'V')
			{
				sum += 5;
			}
				else if(s[i] == 'X')
				{
					sum += 10;
				}
	
					else if(s[i] == 'L')
					{
						sum += 50;
					}
	
						else if(s[i] == 'C')
						{
							sum += 100;
						}
	
							else if(s[i] == 'D')
							{
								sum += 500;
							}
								
								else if(s[i] == 'M')
								{
									sum += 1000;
								}
		
	}

end:
cout << sum;



}
