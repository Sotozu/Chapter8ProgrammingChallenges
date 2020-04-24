#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
/*
// 1. Charge Account Verification
bool checkUserInput(int[], int, int); //Function will confirm if the user input matches an account number

int main() { 
	bool match;

	const int SIZE = 18;

	int user_input;

	int account_number[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
								8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
								1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };

	cout << "Please enter the 'Account Number'.\n";
	cout << "ACCOUNT NUMBER: ";
	cin >> user_input;

	match = checkUserInput(account_number, user_input, SIZE);

	if (match == true) {
		cout << "The number is valid.\n";
	}
	else {
		cout << "The number is invalid.\n";
	}

	return 0;
}

bool checkUserInput(int account_number[], int user_input, int SIZE) {
	bool match;
	for (int i = 0; i < SIZE; i++) {
		if (user_input == account_number[i]) {
			return true;
		}
	}
	return false;
}
*/

/*
// 2. Lottery Winners
int lotteryNumber();
bool checkWin(int[], int, int);
int main() {
	const int SIZE = 10;
	bool win;
	int user_numbers[SIZE] = { 13579,  26791,  26792,  33445,  55555,
							62483,  77777,  79422,  85647,  93121 };
	int lottery_number;

	cout << "Please enter the 5 digit winning lottery number.\n";
	lottery_number = lotteryNumber();

	win = checkWin(user_numbers, SIZE, lottery_number);

	if (win == true) {
		cout << "You have a lucky winning ticket!\n";
	}
	else if (win == false) {
		cout << "You don't have a matching ticket.\n";
	}


	return 0;
}

int lotteryNumber() {
	int lottery_number;
	do {
		cout << "Winning Lottery Number: ";
		cin >> lottery_number;
		if (lottery_number < 10000 || lottery_number > 99999) {
			cout << "ERROR: Please enter a 5 digit number.\n";
		}
	} while (lottery_number < 10000 || lottery_number > 99999);
	return lottery_number;
}

bool checkWin(int user_numbers[], int SIZE, int lottery_number) {
	for (int i = 0; i < SIZE; i++) {
		if (user_numbers[i] == lottery_number) {
			return true;
		}
	}
	return false;
}
*/
/*
// 3. Lottery Winners Modification
void selectionSort(int[], int); //The array will be changed in main because of pass by reference
int binarySearch(const int[], int, int); //finds the lottery number
int lotteryNumber(); // asks the user for a lottery number

int main() {
	const int SIZE = 10;
	int winning_index;
	int user_numbers[SIZE] = { 13579, 26791,  26792,  33445,  55555,
							62483, 77777,  79422,  85647,  93121 };
	int lottery_number;
	for (int i = 0; i < SIZE; i++) {
		cout << user_numbers[i] << endl;
	}
	selectionSort(user_numbers, SIZE);
	cout << "\nSORTED\n";
	for (int i = 0; i < SIZE; i++) {
		cout << user_numbers[i] << endl;
	}
	cout << "Please enter the 5 digit winning lottery number.\n";
	lottery_number = lotteryNumber();

	winning_index = binarySearch(user_numbers, SIZE, lottery_number);

	if (winning_index == -1) {
		cout << "You don't have a matching ticket.\n";
	}
	else {
		cout << "The ticket " << user_numbers[winning_index] << " is a winning a ticket!\n";
	}

	return 0;
}
	
int binarySearch(const int user_numbers[], int SIZE, int lottery_number) {

	int first = 0,  // First array element 
	last = SIZE - 1,  // Last array element         
	middle,  // Midpoint of search         
	position = - 1;  // Position of search value 
	bool found = false;  // Flag 

	while (!found && first <= last) {
		middle = (first + last) / 2;  // Calculate midpoint         
		if (user_numbers[middle] == lottery_number) {  // If value is found at mid
			found = true;
			position = middle;
		}
		else if (user_numbers[middle] > lottery_number) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
		return position;
}

void selectionSort(int user_numbers[], int SIZE) {
	int startScan, //For every iteration of the seatch this variable will be set to a starting position
		minIndex, // The min index set at the beginning for each search 
		minValue; // The min value ser at the beginnning for each search
	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = user_numbers[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (user_numbers[index] < minValue) 
			{
				minValue = user_numbers[index]; //new lowest value is found AND set to minValue
				minIndex = index; // location of lowest value is found and set to minIndex
			}
		}

		//The smallest value and it's index have at this point been found within the range of the search.

		user_numbers[minIndex] = user_numbers[startScan]; //places the value of the first position in the index search
														  //to the position of where the smalles value was found.
		
		user_numbers[startScan] = minValue;				  //places the min value found in the range of values searched 
														  //into the first position in the search.
											
	}
	//The loop will now repeat BUT at a starting search position of + 1 from the previous loop.
	//At the end of that loop the lowest number will be placed at the begging position of that search.
}

int lotteryNumber() {
	int lottery_number;
	do {
		cout << "Winning Lottery Number: ";
		cin >> lottery_number;
		if (lottery_number < 10000 || lottery_number > 99999) {
			cout << "ERROR: Please enter a 5 digit number.\n";
		}
	} while (lottery_number < 10000 || lottery_number > 99999);
	return lottery_number;
}
*/

/*
// 4. Charge Account Validation Modification 
void selectionSort(int[], int); //The array will be changed in main because of pass by reference
int binarySearch(const int[], int, int); //finds the lottery number

int main() {
	int match_index;

	const int SIZE = 18;

	int user_input;

	int account_number[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
								8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
								1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };


	selectionSort(account_number, SIZE);

	cout << "Please enter the 'Account Number'.\n";
	cout << "ACCOUNT NUMBER: ";
	cin >> user_input;

	match_index = binarySearch(account_number, user_input, SIZE);

	if (match_index == -1) {
		cout << "The number is invalid.\n";
	}
	else {
		cout << "The account number " << account_number[match_index] << " is a match!\n";
	}

	return 0;
}

bool checkUserInput(int account_number[], int user_input, int SIZE) {
	bool match;
	for (int i = 0; i < SIZE; i++) {
		if (user_input == account_number[i]) {
			return true;
		}
	}
	return false;
}
int binarySearch(const int user_numbers[], int user_input, int SIZE) {

	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		position = -1;  // Position of search value 
	bool found = false;  // Flag 

	while (!found && first <= last) {
		middle = (first + last) / 2;  // Calculate midpoint         
		if (user_numbers[middle] == user_input) {  // If value is found at mid
			found = true;
			position = middle;
		}
		else if (user_numbers[middle] > user_input) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
	return position;
}

void selectionSort(int account_numbers[], int SIZE) {
	int startScan, //For every iteration of the seatch this variable will be set to a starting position
		minIndex, // The min index set at the beginning for each search 
		minValue; // The min value ser at the beginnning for each search
	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = account_numbers[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (account_numbers[index] < minValue)
			{
				minValue = account_numbers[index]; //new lowest value is found AND set to minValue
				minIndex = index; // location of lowest value is found and set to minIndex
			}
		}

		//The smallest value and it's index have at this point been found within the range of the search.

		account_numbers[minIndex] = account_numbers[startScan]; //places the value of the first position in the index search
														  //to the position of where the smalles value was found.

		account_numbers[startScan] = minValue;				  //places the min value found in the range of values searched 
														  //into the first position in the search.

	}
	//The loop will now repeat BUT at a starting search position of + 1 from the previous loop.
	//At the end of that loop the lowest number will be placed at the begging position of that search.
}
*/
/*
// 5. Rainfall Statistics Modification
void selectionSort(double[], string[], int);
int main() {
	const int MONTHS = 12;
	double rainfall_amounts[MONTHS];
	double max, min, total = 0;
	int max_month, min_month; //index for month_name[MONTHS]
	double average;
	string month_name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August",
	"September", "October", "November", "Decemeber" };
	cout << "Please enter the rainfall for the following months.\n";
	for (int i = 0; i < MONTHS; i++) {
		do {
			cout << month_name[i] << " rainfall (inches): ";
			cin >> rainfall_amounts[i];
			if (rainfall_amounts[i] < 0) {
				cout << "ERROR: Please enter a positive number.\n";
			}
		} while (rainfall_amounts[i] < 0);
		total += rainfall_amounts[i];
	}
	max = rainfall_amounts[0];
	min = rainfall_amounts[0];
	max_month = 0;
	min_month = 0;
	for (int i = 1; i < MONTHS; i++) {
		if (max < rainfall_amounts[i]) {
			max = rainfall_amounts[i];
			max_month = i;
		}
		if (min > rainfall_amounts[i]) {
			min = rainfall_amounts[i];
			min_month = i;
		}
	}

	selectionSort(rainfall_amounts, month_name, MONTHS);
	cout << "\nRainfall from lowest to highest.\n";

	for (int i = 0; i < MONTHS; i++) {
		cout << month_name[i] << ": " << rainfall_amounts[i] << endl;
	}
	
	return 0;
}

void selectionSort(double rainfall_amounts[], string month_name[], int SIZE) {
	int startScan, //For every iteration of the seatch this variable will be set to a starting position
		minIndex, // The min index set at the beginning for each search 
		minValue; // The min value ser at the beginnning for each search

	string minMonth;

	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = rainfall_amounts[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (rainfall_amounts[index] < minValue)
			{
				minValue = rainfall_amounts[index]; //new lowest value is found AND set to minValue
				minMonth = month_name[index]; //month name with the lowest value found AND set to minMonth
				minIndex = index; // location of lowest value is found and set to minIndex
			}
		}

		//The smallest value and it's index have at this point been found within the range of the search.

		rainfall_amounts[minIndex] = rainfall_amounts[startScan]; //places the value of the first position in the index search
														  //to the position of where the smalles value was found.

		rainfall_amounts[startScan] = minValue;				  //places the min value found in the range of values searched 
														  //into the first position in the search.

		month_name[minIndex] = month_name[startScan];

		month_name[startScan] = minMonth;

	}
	//The loop will now repeat BUT at a starting search position of + 1 from the previous loop.
	//At the end of that loop the lowest number will be placed at the begging position of that search.
}
*/
/*
// 6. String Selection Sort
void selectionSortSmallToLarge(string[], int);
void selectionSortAlphabeticall(string array[], int size);

int main() {
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
								  "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
								  "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							"James, Jean", "Weaver, Jim", "Pore, Bob",
							"Rutherford, Greg", "Javens, Renee",
							"Harrison, Rose", "Setzer, Cathy",
							"Pike, Gordon", "Holland, Beth" };

	cout << "NOT SORTED\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	selectionSortSmallToLarge(names, NUM_NAMES);
	
	cout << "\nSORTED BY SHORTEST NAME FIRST\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	cout<< "\nSORTED ALPHABETICALLY\n\n";

	selectionSortAlphabeticall(names, NUM_NAMES);

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	return 0;
}

void selectionSortSmallToLarge(string array[], int size) {

	int startScan, 
		minIndex, 
		minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan].size();
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index].size() < minValue) //begings with minValue being == to th
			{
				minValue = array[index].size(); //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		shortestWord = array[minIndex];
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = shortestWord; //places the shortest name into the position of the first index used in the search
	}
}

void selectionSortAlphabeticall(string array[], int size) {

	int startScan,
		minIndex;

	string minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue) //begings with minValue being == to th
			{
				minValue = array[index]; //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = minValue; //places the shortest name into the position of the first index used in the search
	}
}
*/

// 7. Binary String Search
/*
int binarySearch(const string[], string, int);
void selectionSort(string[], int);
int main() {
	const int NUM_NAMES = 20;
	int position;
	string user_input;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
								  "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
								  "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							"James, Jean", "Weaver, Jim", "Pore, Bob",
							"Rutherford, Greg", "Javens, Renee",
							"Harrison, Rose", "Setzer, Cathy",
							"Pike, Gordon", "Holland, Beth" };

	cout << "NOT SORTED\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	selectionSort(names, NUM_NAMES);

	cout << "\nSORTED BY SHORTEST NAME FIRST\n\n";
	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	cout << "Please enter the name in the following format: \"LAST, FIRST\"\n";
	cout << "ENTER NAME: ";
	getline(cin, user_input);

	position = binarySearch(names, user_input, NUM_NAMES);

	if (position == -1) {
			cout << "\nThe name is not found\n";
	}
	else {
		cout << "\nThere is a match for " << names[position] << ".\n";
	}


	return 0;
}

void selectionSort(string array[], int size) {

	int startScan,
		minIndex;

	string minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue) //begings with minValue being == to th
			{
				minValue = array[index]; //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = minValue; //places the shortest name into the position of the first index used in the search
	}
}

int binarySearch(const string array[], string user_input, int SIZE) {

	vector<string> size_match;

	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		position = -1;  // Position of search value 
	bool found = false;  // Flag 

	while (!found && first <= last) {
		middle = (first + last) / 2;  // Calculate midpoint   
		cout << array[middle] << endl;
		if (array[middle] == user_input) {  // If value is found at mid
			found = true;
			position = middle;
		}
		else if (array[middle] > user_input) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
	return position;
}
*/

// 8. Search Benchmarks
/*
void selectionSort(int rand_num_array[], int SIZE);
int linearList(const int rand_num_array[], int SIZE, int user_input);
int binarySearch(const int rand_num_array[], int SIZE, int user_input);

int main() {

	const int SIZE = 20; //size of the array
	int rand_num_array[SIZE];

	int user_input, 
		linear, 
		binary,
		random_number; // int variable that will hold the value of the random number;

	bool sent;

	srand(time(NULL)); //seeds the rand function to create a more random number

	for (int i = 0; i < SIZE; i++) { // places a random number between 1 and 100,000 into each position in an array.
		rand_num_array[i] = random_number = rand() % 100000 + 1;
	}
	
	selectionSort(rand_num_array, SIZE); //This function will sort the values in the array from least to greatest


	cout << "The values in the array are: " << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "value " << i + 1 << ": " << rand_num_array[i] << endl;
	}

	cout << "\nPlease enter one of the numbers in the array.\n";
	do {
		sent = false;
		cout << "NUM: ";
		cin >> user_input;
		for (int i = 0; i < SIZE; i++) {
			if (user_input == rand_num_array[i]) {
				sent = true;
			}
		}
		if (sent == false) {
			cout << "ERROR: Please enter a valid number in the array.\n";
		}
	} while (sent != true);
	linear = linearList(rand_num_array, SIZE, user_input);
	binary = binarySearch(rand_num_array, SIZE, user_input);

	cout << "\nThe number of searches performed to find the value\n";
	cout << "Linear: " << linear << endl;
	cout << "Binary: " << binary << endl;



	return 0;
}
void selectionSort(int rand_num_array[], int SIZE) {
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = rand_num_array[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (rand_num_array[index] < minValue)
			{
				minValue = rand_num_array[index];
				minIndex = index;
			}
		}
		rand_num_array[minIndex] = rand_num_array[startScan];
		rand_num_array[startScan] = minValue;
	}
}
int linearList(const int rand_num_array[], int SIZE, int user_input) {
	int index = 0, count = 0;        // Used as a subscript to search array 

	for (int i = 0; i < SIZE; i++) {
		count++;
		if (user_input == rand_num_array[i]) {
			return count;
		}
	}
}     

int binarySearch(const int rand_num_array[], int SIZE, int user_input) {


	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		count = 0 ;  // counts how many times it took to find the number
	bool found = false;  // Flag 

	while (!found && first <= last) {
		count++;
		middle = (first + last) / 2;  // Calculate midpoint   
		if (rand_num_array[middle] == user_input) {  // If value is found at mid
			found = true;
			return count;
		}
		else if (rand_num_array[middle] > user_input) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
}
*/

// 9. Sorting Benchmark
/*
int bubbleSortArray(int array[], int size);
int selectionSort(int array[], int size);


int main() {
	const int SIZE = 20;
	int array1[SIZE], array2[SIZE];
	int count1, count2;
	int rand_num;

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		rand_num = rand() % 1000 + 1;
		array1[i] = rand_num;
		array2[i] = rand_num;
	}

	count1 = bubbleSortArray(array1, SIZE);
	count2 = selectionSort(array2, SIZE);

	cout << "\nNumber of exchanges for a size " << SIZE <<" array using either bubble or selection sort.\n";
	cout << "Bubble: " << count1 << endl;
	cout << "Selection: " << count2 << endl;
	return 0;
}

int bubbleSortArray(int array[], int size) {
	cout << "In bubbleSortArray function" << endl;
	bool swap;
	int temp;
	int count = 0;
	do
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			
			if (array[i] > array[i + 1])
			{
				count++;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
	return count;
}

int selectionSort(int array[], int size) {

	cout << "In selectionSort function" << endl;

	int startScan, minIndex, minValue, count = 0;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				
				minValue = array[index];
				minIndex = index;
			}
		}
		count++;
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
	return count;
}
*/

// 10. Sorting Orders
/*
int bubbleSortArray(int array[], int size);
int selectionSort(int array[], int size);
void displayArray(int aray[], int size);

int main() {
	const int SIZE = 8;
	int array1[SIZE], array2[SIZE];
	int count1, count2;
	int rand_num;

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		rand_num = rand() % 1000 + 1;
		array1[i] = rand_num;
		array2[i] = rand_num;
	}

	cout << "Array 1 values BEFORE BUBBLE SORT" << endl;
	displayArray(array1, SIZE);
	count1 = bubbleSortArray(array1, SIZE);

	cout << "\nArray 2 values BEFORE SELECTION SORT" << endl;
	displayArray(array2, SIZE);
	count2 = selectionSort(array2, SIZE);

	cout << "\nNumber of exchanges for a size " << SIZE <<" array using either bubble or selection sort.\n";
	cout << "Bubble: " << count1 << endl;
	cout << "Selection: " << count2 << endl;
	return 0;
}

int bubbleSortArray(int array[], int size) {
	cout << "\nBUBBLE SORT FUNCTION\n";
	bool swap;
	int temp;
	int count = 0;
	do
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{

			if (array[i] > array[i + 1])
			{
				count++;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
				displayArray(array, size);
			}
		}
	} while (swap);
	return count;
}

int selectionSort(int array[], int size) {
	cout << "\nSELECTION SORT FUNCTION\n";
	int startScan, minIndex, minValue, count = 0;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
		count++;
		displayArray(array, size);
	}
	return count;
}

void displayArray(int array[],int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		cout << array[i]<< " ";
	}
	cout << endl;
}
*/

// 11. Using Files—String Selection Sort Modification 
/*
void selectionSortSmallToLarge(string[], int);
void selectionSortAlphabeticall(string array[], int size);

int main() {
	const int NUM_NAMES = 20;
	ifstream inFile;
	string name_holder;
	inFile.open("names.txt");

	string names[NUM_NAMES];

	for (int i = 0; i < NUM_NAMES; i++) {
		getline(inFile, names[i]);
	}
	inFile.close();

	cout << "NOT SORTED\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	selectionSortSmallToLarge(names, NUM_NAMES);

	cout << "\nSORTED BY SHORTEST NAME FIRST\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	cout << "\nSORTED ALPHABETICALLY\n\n";

	selectionSortAlphabeticall(names, NUM_NAMES);

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	return 0;
}

void selectionSortSmallToLarge(string array[], int size) {

	int startScan,
		minIndex,
		minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan].size();
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index].size() < minValue) //begings with minValue being == to th
			{
				minValue = array[index].size(); //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		shortestWord = array[minIndex];
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = shortestWord; //places the shortest name into the position of the first index used in the search
	}
}

void selectionSortAlphabeticall(string array[], int size) {

	int startScan,
		minIndex;

	string minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue) //begings with minValue being == to th
			{
				minValue = array[index]; //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = minValue; //places the shortest name into the position of the first index used in the search
	}
}
*/