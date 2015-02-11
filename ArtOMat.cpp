#include <iostream>;

#include <iomanip>;

using namespace std;

int main()
{
	char choice;
	cout<<"\n\t\     Welcome to Art-O-Mat\n\n";
	cout<<"\t  s - report machine status\n";
	cout<<"\t  d - drop in a quarter\n";
	cout<<"\t  1 - pull the 1st knob\n";
	cout<<"\t  2 - pull the 2nd knob\n";
	cout<<"\t  3 - pull the 3rd knob\n";
	cout<<"\t  4 - pull the 4th knob\n";
	cout<<"\t  r -restock the machine\n";
	cout<<"\t  q - quit\n";

	cin>>choice;

	int Lucky_Strikes=5; 
	int Camels=7;
	int Gauloises=1;
	int Pall_Mall=6;
	float money = 24.50; 
	int quarters = 0;


	while (choice != 'q')
	{
		switch (choice)
		{
			case '1':
				if ( Lucky_Strikes >0)
				{
					if(quarters == 3)
					{
						cout<<" Here is your Lucky Strikes\n";
						quarters = 0;
						Lucky_Strikes -= 1;
					}
					else
					{
						cout<<"Not enough money\n";
					}
				}
				else 
				{
					cout<<"  you here machine clanking but no cigarrets apear\n";
					quarters = 0;
				}
				break;
			case '2':
				if (Camels >0)
				{
					if (quarters ==3)
					{
						cout<<" Here is your Camels\n";
						quarters = 0;
						Camels -=1;
					}
					else 
					{
						cout<<"Not enough money\n";
					}
				}
				else
				{
					cout<<" you here machine clanking but no cigarrets apear\n";
					quarters = 0;
				}
				break;
			case '3':
				if (Gauloises >0)
				{
					if (quarters ==3)
					{
						cout<<" Here is your Gauloises\n";
						quarters = 0;
						Gauloises -=1;
					}
					else 
					{
						cout<<"Not enough money\n";
					}
				}
				else
				{
					cout<<" you here machine clanking but no cigarrets apear\n";
					quarters = 0;
				}
				break;
			case '4':
				if (Pall_Mall >0)
				{
					if (quarters ==3)
					{
						cout<<" Here is your Pall Mall\n";
						quarters = 0;
						Pall_Mall -=1;
					}
					else 
					{
						cout<<"Not enough money\n";
					}
				}
				else
				{
					cout<<" you here machine clanking but no cigarrets apear\n";
					quarters = 0;
				}
				break;
			case 'r':
				Lucky_Strikes = 10;
				Camels = 10;
				Gauloises = 10;
				Pall_Mall = 10;
				money = 0;

				break;
			case 'd':
				quarters += 1;
				money += .25;
				cout<<"Paid: "<< quarters*.25<<fixed<<setprecision(2)<<endl;
				break;
			case 's':
				cout<<"\t  1: "<<Lucky_Strikes<<" packs of Lucky Strikes\n";
				cout<<"\t  2: "<<Camels<<" packs of Camels\n";
				cout<<"\t  3: "<<Gauloises<<" packs of Gauloises\n";
				cout<<"\t  4: "<<Pall_Mall<<" packs of Pall Mall\n";
				cout<<"\t  Machine has $"<<setw(5)<<fixed<<setprecision(2)<<money<<endl; 
				break;

			default:
				cout<<"I do not understand\n";

	cout<<"\t  s - report machine status\n";
	cout<<"\t  d - drop in a quarter\n";
	cout<<"\t  1 - pull the 1st knob\n";
	cout<<"\t  2 - pull the 2nd knob\n";
	cout<<"\t  3 - pull the 3rd knob\n";
	cout<<"\t  4 - pull the 4th knob\n";
	cout<<"\t  r -restock the machine\n";
	cout<<"\t  q - quit\n";


		}
	cin>>choice;

	}

	return 0;
}