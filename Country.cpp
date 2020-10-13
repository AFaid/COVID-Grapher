/*
Name: Ahmed Faid
Date: October, 7th, 2020
Description: Contains implementation of fucntions of Country Class.
*/
#include <string>
#include "Country.h"

using namespace std;

/*
Name: Country
Arguments: string in_country_name, string in_country_code, int in_new_cases, int in_total_cases,
  int in_new_deaths, int in_total_deaths, int in_new_recovered, int in_total_recovered.
Return: Country Object.
Description: Constructor for Country object. Sets each attribute of object class to corresponding
paramaeter.
*/
Country::Country(string in_country_name, string in_country_code, int in_new_cases, int in_total_cases,
  int in_new_deaths, int in_total_deaths, int in_new_recovered, int in_total_recovered){
    country_name = in_country_name;
    country_code = in_country_code;
    new_cases = in_new_cases;
    total_cases = in_total_cases;
    new_deaths = in_new_deaths;
    total_deaths = in_total_deaths;
    new_recovered = in_new_recovered;
    total_recovered = in_total_recovered;
}

/*
Name: get_countryname
Arguments: N/A
Returns: string contating value of country_name attribute (Of self).
Description: Getter method for country_name.
*/
string Country::get_countryname() const{
  return country_name;
}

/*
Name: set_countryname
Arguments: string in_country_name
Returns: N/A
Description: Setter method for country_name
*/
void Country::set_countryname(string in_country_name){
  country_name = in_country_name;
}

/*
Name: get_countrycode
Arguments: N/A
Returns: string contating value of country_code attribute (Of self).
Description: Getter method for country_code.
*/
string Country::get_countrycode() const{
  return country_code;
}

/*
Name: set_countrycode
Arguments: string in_country_code
Returns: N/A
Description: Setter method for country_code
*/
void Country::set_countrycode(string in_country_code){
  country_code = in_country_code;
}

/*
Name: get_newcases
Arguments: N/A
Returns: int value of new_cases attribute (Of self).
Description: Getter method for new_cases
*/
int Country::get_newcases() const{
  return new_cases;
}

/*
Name: set_newcases
Arguments: int in_new_cases
Returns: N/A
Description: Setter method for new_cases
*/
void Country::set_newcases(int in_new_cases){
  new_cases = in_new_cases;
}

/*
Name: get_totalcases
Arguments: N/A
Returns: int value of total_cases attribute (Of self).
Description: Getter method for total_cases
*/
int Country::get_totalcases() const{
  return total_cases;
}

/*
Name: set_totalcases
Arguments: int in_total_cases
Returns: N/A
Description: Setter method for total_cases
*/
void Country::set_totalcases(int in_total_cases){
  total_cases = in_total_cases;
}

/*
Name: get_totalcases
Arguments: N/A
Returns: int value of new_deaths attribute (Of self).
Description: Getter method for new_deaths
*/
int Country::get_newdeaths() const{
  return new_deaths;
}

/*
Name: set_new_deaths
Arguments: int in_new_deaths
Returns: N/A
Description: Setter method for new_deaths
*/
void Country::set_newdeaths(int in_new_deaths){
  new_deaths = in_new_deaths;
}

/*
Name: get_totaldeaths
Arguments: N/A
Returns: int value of total_deaths attribute (Of self).
Description: Getter method for total_deaths.
*/
int Country::get_totaldeaths() const{
  return total_deaths;
}

/*
Name: set_totaldeaths
Arguments: int in_total_deaths
Returns: N/A
Description: Setter method for total_deaths
*/
void Country::set_totaldeaths(int in_total_deaths){
  total_deaths = in_total_deaths;
}

/*
Name: get_newrecovered
Arguments: N/A
Returns: int value of new_recovered attribute (Of self).
Description: Getter method for new_recovered.
*/
int Country::get_newrecovered() const{
  return new_recovered;
}

/*
Name: set_newrecovered
Arguments: int in_new_recovered
Returns: N/A
Description: Setter method for new_recovered
*/
void Country::set_newrecovered(int in_new_recovered){
  new_recovered = in_new_recovered;
}

/*
Name: get_totalrecovered
Arguments: N/A
Returns: int value of total_recovered attribute (Of self).
Description: Getter method for total_recovered.
*/
int Country::get_totalrecovered() const{
  return total_recovered;
}

/*
Name: set_totalrecovered
Arguments: int in_total_recovered
Returns: N/A
Description: Setter method for total_recovered
*/
void Country::set_totalrecovered(int in_total_recovered){
  total_recovered = in_total_recovered;
}

/*
Name: Ahmed Faid
Arguments: N/A
Returns: N/A
Description: Default deconstructor for Country class
*/
Country::~Country(){}
