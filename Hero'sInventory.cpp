#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
    
	//Adding items into your inventory
	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "Shield";


	//Displaying your inventory
	cout << "Your items: \n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	//Trading of sword for a battle axe

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items: " << endl;
	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}


   //Counting letters of the first item in the inventory
	cout << "The item name '" << inventory[0] << "' has " << inventory[0].size() << " letter in it." << endl;



	// You find a healing potion adding it into your inventory also checking if your inventory is full or not?
	
	cout << "\nYou find a healing potion now add this into your inventory";
    
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and cannot carry another"<<endl;
	}



	//Displaying Items in your inventory

	cout << "Your Items:" << endl;
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;

	}

	return 0;
}