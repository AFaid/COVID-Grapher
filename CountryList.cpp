/*
Name: Ahmed Faid
Date: October, 7th, 2020
Description: Contains implementation of fucntions of CountryList Class.
*/
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include "CountryList.h"

using namespace std;

/*
Name: CountryList
Arguments: N/A
Return: CountryList object
Description: CountryList default constructor
*/
CountryList::CountryList(){}

/*
Name: CountryList
Arguments: N/A
Return: CountryList object
Description: CountryList constructor. Sets value of countries.
*/
CountryList::CountryList(vector<Country> in_countries){
  countries = in_countries;
}

/*
Name: get_Countries
Arguments: N/A
Return: vector<Country>
Description: getter function for countries.
*/
vector<Country> CountryList::get_Countries(){
  return countries;
}

/*
Name: addCountry
Arguments: Country c
Return: N/A
Description: Adds country object to end of countries vecotr
*/
void CountryList::addCountry(Country c){
  countries.push_back(c);
}

/*
Name: populate
Arguments: string file_path
Return: N/A
Description: reads file passed by file_path and creates country objects based on
  values in file.Country objects are stored in countries vector.
*/
void CountryList::populate(string file_path){
  string line;
  ifstream file;
  string record, segment;
  stringstream record_stringstream;
  vector<string> fields;

  //Catch any exception resulting from opening file
  try{
    file.open(file_path);
  }catch(...){
    cerr << "Error, file could not be opened successfully" << endl;
  }

  //Read every line from the file until EOF is reached
  getline(file, line);
  while(getline(file, line)){
    record_stringstream.clear();
    record_stringstream << line;

    //Seperate line on quotations and store (relevant) resulting tokens in vector.
    while(getline(record_stringstream, segment, '"')){
      if(segment != ",")
        fields.push_back(segment);
    }

    record_stringstream.clear();
    record_stringstream << fields[4] << fields[7];

    //Remove commas between numbers to get them as separate values then store in vector
    while(getline(record_stringstream, segment, ',')){
      if(segment != ",")
        fields.push_back(segment);
    }

    //Create country object using values stored in vector.
    Country* c = new Country(fields[1], fields[2], stoi(fields[9]), stoi(fields[13]), stoi(fields[10]), stoi(fields[14]), stoi(fields[11]), stoi(fields[15]));
    fields.erase(fields.begin(), fields.end());

    //add country to countries std::vector<int> v;
    addCountry(*c);
  }

}

/*
Name:sortAsc_newcases
Arguments: N/A
Return: N/A
Description: Sort countries vector in ascending order based on confirmed new cases
*/
void CountryList::sortAsc_newcases(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_newcases() < rhs.get_newcases();
  });
}

/*
Name:sortAsc_newcases
Arguments: N/A
Return: N/A
Description: Sort countries vector in descending order based on confirmed new cases
*/
void CountryList::sortDes_newcases(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_newcases() > rhs.get_newcases();
  });
}

/*
Name:sortAsc_newdeaths
Arguments: N/A
Return: N/A
Description: Sort countries vector in ascending order based on new deaths
*/
void CountryList::sortAsc_newdeaths(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_newdeaths() < rhs.get_newdeaths();
  });
}

/*
Name:sortAsc_newdeaths
Arguments: N/A
Return: N/A
Description: Sort countries vector in descending order based on new deaths
*/
void CountryList::sortDes_newdeaths(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_newdeaths() > rhs.get_newdeaths();
  });
}

/*
Name:sortAsc_newrecovered
Arguments: N/A
Return: N/A
Description: Sort countries vector in ascending order based on new recovered
*/
void CountryList::sortAsc_newrecovered(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_newrecovered() < rhs.get_newrecovered();
  });
}

/*
Name:sortAsc_newrecovered
Arguments: N/A
Return: N/A
Description: Sort countries vector in descending order based on new recovered
*/
void CountryList::sortDes_newrecovered(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_newrecovered() > rhs.get_newrecovered();
  });
}

/*
Name:sortAsc_totalcases
Arguments: N/A
Return: N/A
Description: Sort countries vector in ascending order based on total cases
*/
void CountryList::sortAsc_totalcases(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_totalcases() < rhs.get_totalcases();
  });
}

/*
Name:sortAsc_totalcases
Arguments: N/A
Return: N/A
Description: Sort countries vector in descending order based on total cases
*/
void CountryList::sortDes_totalcases(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_totalcases() > rhs.get_totalcases();
  });
}

/*
Name:sortAsc_totaldeaths
Arguments: N/A
Return: N/A
Description: Sort countries vector in ascending order based on total deaths
*/
void CountryList::sortAsc_totaldeaths(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_totaldeaths() < rhs.get_totaldeaths();
  });
}

/*
Name:sortAsc_totaldeaths
Arguments: N/A
Return: N/A
Description: Sort countries vector in descending order based on total deaths
*/
void CountryList::sortDes_totaldeaths(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_totaldeaths() > rhs.get_totaldeaths();
  });
}

/*
Name:sortAsc_totalrecovered
Arguments: N/A
Return: N/A
Description: Sort countries vector in ascending order based on total recovered
*/
void CountryList::sortAsc_totalrecovered(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_totalrecovered() < rhs.get_totalrecovered();
  });
}

/*
Name:sortAsc_totalrecovered
Arguments: N/A
Return: N/A
Description: Sort countries vector in descending order based on total recovered
*/
void CountryList::sortDes_totalrecovered(){
  sort(countries.begin(), countries.end(), [ ](const Country& lhs, const Country& rhs){
    return lhs.get_totalrecovered() > rhs.get_totalrecovered();
  });
}

/*
Name: drawGraph_Asc
Arguments: int choice
Return: N/A
Description: Outputs a graph of the top ten countries in countries vector based
on the value of choice. 1 = new Confirmed Case, 2 = new deaths,3 = new recovered,
4 = total confirmed cases, 5 = total deaths, 6 = total recovered
*/
void CountryList::drawGraph_Des(int choice){
  int base, sorted_value;
  double bars_num;
  string bars;

  switch (choice) {
    case 1:
      base = countries[0].get_newcases();
      cout << "\nNew Confirmed Cases; Each * is approximately " << float(base)/100 << " cases" << endl;
      break;
    case 2:
      base = countries[0].get_newdeaths();
      cout << "\nNew Deaths; Each * is approximately " << float(base)/100 << " deaths" << endl;
      break;
    case 3:
      base = countries[0].get_newrecovered();
      cout << "\nNew Recoveries; Each * is approximately " << float(base)/100 << " recoveries" << endl;
      break;
    case 4:
      base = countries[0].get_totalcases();
      cout << "\nTotal Confirmed Cases; Each * is approximately " << float(base)/100 << " cases" << endl;
      break;
    case 5:
      base = countries[0].get_totaldeaths();
      cout << "\nTotal Deaths; Each * is approximately " << float(base)/100 << " deaths" << endl;
      break;
    case 6:
      base = countries[0].get_totalrecovered();
      cout << "\nTotal Recoveries; Each * is approximately " << float(base)/100 << " recoveries" << endl;
      break;
  }

  cout << string(105, '-') << endl;

  for(int i = 0; i < 10; i++){

    switch (choice) {
      case 1:
        sorted_value = countries[i].get_newcases();
        break;
      case 2:
        sorted_value = countries[i].get_newdeaths();
        break;
      case 3:
        sorted_value = countries[i].get_newrecovered();
        break;
      case 4:
        sorted_value = countries[i].get_totalcases();
        break;
      case 5:
        sorted_value = countries[i].get_totaldeaths();
        break;
      case 6:
        sorted_value = countries[i].get_totalrecovered();
        break;
    }

    bars_num = (int)((100*sorted_value)/base);
    bars = string(bars_num, '*');
    cout << countries[i].get_countrycode() << " | " << bars << endl;
  }
  cout << endl;
}

/*
Name: drawGraph_Des
Arguments: int choice
Return: N/A
Description: Outputs a graph of the bottom ten countries in countries vector based
on the value of choice. 1 = new Confirmed Case, 2 = new deaths,3 = new recovered,
4 = total confirmed cases, 5 = total deaths, 6 = total recovered
*/
void CountryList::drawGraph_Asc(int choice){
  int base, sorted_value;
  double bars_num;
  string bars;

  switch (choice) {
    case 1:
      base = countries[countries.size()-1].get_newcases();
      cout << "\nNew Confirmed Cases; Each * is approximately " << float(base)/100 << " cases" << endl;
      break;
    case 2:
      base = countries[countries.size()-1].get_newdeaths();
      cout << "\nNew Deaths; Each * is approximately " << float(base)/100 << " deaths" << endl;
      break;
    case 3:
      base = countries[countries.size()-1].get_newrecovered();
      cout << "\nNew Recoveries; Each * is approximately " << float(base)/100 << " recoveries" << endl;
      break;
    case 4:
      base = countries[countries.size()-1].get_totalcases();
      cout << "\nTotal Confirmed Cases; Each * is approximately " << float(base)/100 << " cases" << endl;
      break;
    case 5:
      base = countries[countries.size()-1].get_totaldeaths();
      cout << "\nTotal Deaths; Each * is approximately " << float(base)/100 << " deaths" << endl;
      break;
    case 6:
      base = countries[countries.size()-1].get_totalrecovered();
      cout << "\nTotal Recoveries; Each * is approximately " << float(base)/100 << " recoveries" << endl;
      break;
  }

  cout << string(105, '-') << endl;

  for(int i = countries.size() - 10; i < countries.size(); i++){

    switch (choice) {
      case 1:
        sorted_value = countries[i].get_newcases();
        break;
      case 2:
        sorted_value = countries[i].get_newdeaths();
        break;
      case 3:
        sorted_value = countries[i].get_newrecovered();
        break;
      case 4:
        sorted_value = countries[i].get_totalcases();
        break;
      case 5:
        sorted_value = countries[i].get_totaldeaths();
        break;
      case 6:
        sorted_value = countries[i].get_totalrecovered();
        break;
    }

    bars_num = (int)((100*sorted_value)/base);
    bars = string(bars_num, '*');
    cout << countries[i].get_countrycode() << " | " << bars << endl;
  }
  cout << endl;
}

/*
Name: ~CountryList
Arguments: N/A
Return: N/A
Description: default deconstructor of CountryList object
*/
CountryList::~CountryList(){}
