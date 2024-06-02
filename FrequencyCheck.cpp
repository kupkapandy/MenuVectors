#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void VectorFill(vector <double>& nums){
    system("cls");
    int numberoftimes = 0;
    int numberdisplay = 1;
    double numbertoadd = 0;
    while(numberoftimes <= 0){
        cout << "\nEnter the number of numbers you want to add to the array: ";
        cin >> numberoftimes;

        if(numberoftimes <= 0){
            cout << "\nInvalid number! The number must be higher than 0!";
        }
    }

    cout << '\n';
    while(numberoftimes > 0){
        cout << "Add next number to the array at place number [ " << numberdisplay << " ]: ";
        cin >> numbertoadd;
        numberoftimes--;
        numberdisplay++;
        nums.push_back(numbertoadd);
    }
    cout << '\n';
    system("pause");    
}


void VectorOut(vector <double> &nums){
    system("cls");
    cout << "\n\n";
    if(nums.empty() == true){
        cout << "\nThe array is empty!\n";
    }
    else{
        for(int i = 0; i < nums.size(); i++){
            cout << "\nThe number at element [ " << i << " ] of the array is [ " << nums[i] << " ]";
        }
    }
    cout << "\n\n";
    system("pause");
    
}

void VectorEmplace(vector <double> &nums){
    int ElementToEmplace = 0;
    int NumberToEmplace = 0;
    VectorOut(nums);
    cout << "\nWhich element do you want to emplace with another number?: ";
    cin >> ElementToEmplace;
    while(ElementToEmplace < 0 || ElementToEmplace > nums.size()){
        cout << "\nInvalid element please try again!: ";
        cin >> ElementToEmplace;
    }
    cout << "\nWhat number do you want to emplace it with?: ";
    cin >> NumberToEmplace;
    nums[ElementToEmplace] = NumberToEmplace;
    VectorOut(nums);
}
void VectorUniqueNumberCheck(vector <double>& nums){
    system("cls");
    unordered_map<int, double> UniqueMap;

    if(nums.empty() == true){
        cout << "\nThe array is empty!\n";
    }
    else{
        for(int i = 0; i < nums.size(); i++){
            UniqueMap[nums[i]]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(UniqueMap[nums[i]] == 1){
                cout << "\nThe number [ " << nums[i] << " ] is a Unique number in this array!      ( true )";
            }
            else{
                cout << "\nThe number [ " << nums[i] << " ] is not a Unique number in this array!  ( false )";
            }
        }
    }
    cout << '\n';
    system("pause");
    
}

void VectorSum(vector <double> &nums){
    system("cls");
    if(nums.empty() == true){
        cout << "\nThe array is empty!\n";
    }
    else{
        long double sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum+= nums[i];
        }
        cout << "\nThe sum of the array is equal to [ " << sum << " ]!\n"; 
    }
    cout << '\n';
    system("pause");
}

void VectorHighest(vector <double> & nums){
    system("cls");
    vector <double> temp; 
    for(int i = 0; i < nums.size(); i++){
        temp.push_back(nums[i]);
    }
    for(int i = 0; i < temp.size(); i++){
        for(int j = i + 1; j < temp.size(); j++){
            if(temp[i] < temp[j]){
                double _temp = temp[j];
                temp[j] = temp[i];
                temp[i] = _temp;
            }
        }
    }
    cout << "\nThe highest number in the array is: [ " << temp[0] << " ]\n";
    vector <double>().swap(temp);
    system("pause");
}

void VectorLowest(vector <double> & nums){
    system("cls");
    vector <double> temp; 
    for(int i = 0; i < nums.size(); i++){
        temp.push_back(nums[i]);
    }

    for(int i = 0; i < temp.size(); i++){
        for(int j = i + 1; j < temp.size(); j++){
            if(temp[i] > temp[j]){
                double _temp = temp[j];
                temp[j] = temp[i];
                temp[i] = _temp;
            }
        }
    }

    cout << "\nThe Lowest number in the array is: [ " << temp[0] << " ]\n";
    vector <double>().swap(temp);
    system("pause");
}

void VectorSortHighest(vector <double> & nums){
    system("cls");
    cout << "\nVector has been sorted!\n";
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] > nums[j]){
                double temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    system("pause");
}
void VectorSortLowest(vector <double> & nums){
    system("cls");
    cout << "\nVector has been sorted!\n";
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] < nums[j]){
                double temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    system("pause");
}
void VectorClear(vector <double> & nums){
    system("cls");
    nums.clear();
}


void Menu(void){
    vector <double> nums;

    while(true){
    system("cls");
    int OptionSelect = 0;
    cout << "\nWhat do you want to do right now?: ";
    cout << "\n1. Clean the screen? ";
    cout << "\n2. Fill the array with numbers? ";
    cout << "\n3. Write out the numbers in array? ";
    cout << "\n4. Emplace a number in the array? ";
    cout << "\n5. Check if numbers in array are unique?";
    cout << "\n6. Sum all of the elements of array";
    cout << "\n7. Get the highest number of the array";
    cout << "\n8. Get the lowest number of the array";
    cout << "\n9. Sort the array from lowest to highest";
    cout << "\n10. Sort the array from highest to lowest";
    cout << "\n11. Clear the array? ";
    cout << "\n12. Exit the program?";
    cout << "\nSelect your option: ";
    cin >> OptionSelect;
    while(OptionSelect <= 0 || OptionSelect > 12){
        cout << "\nInvalid option! Only numbers from 1-12 are accepted";
        cout << "\nSelect your option again: ";
        cin >> OptionSelect;
    }

    switch(OptionSelect){
        case 1:{
            system("cls");
            break;
        }
        case 2:{
            VectorFill(nums);
            break;
        }
        case 3:{
            VectorOut(nums);
            break;
        }
        case 4:{
            VectorEmplace(nums);
            break;
        }
        case 5:{
            VectorUniqueNumberCheck(nums);
            break;
        }
        case 6:{
            VectorSum(nums);
            break;
        }
        case 7:{
            VectorHighest(nums);
            break;
        }
        case 8:{
            VectorLowest(nums);
            break;
        }
        case 9:{
            VectorSortHighest(nums);
            break;
        }
        case 10:{
            VectorSortLowest(nums);
            break;
        }
        case 11:{
            VectorClear(nums);
            break;
        }
        case 12:{
            system("cls");
            cout << "Closing the program.";
            exit(0);
            break;
        }
    }
    
    
    }
}

int main(){
    Menu();
    return 0;
}













//Outdated lmao

/*      Documentation       
    
        What does it do?
This program is checking for elements
in the array, then if the number is
not Unique return false next to it

        Why did I do it?
To learn more about hashmap and etc.
*/