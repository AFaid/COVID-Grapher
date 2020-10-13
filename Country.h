/*
Name: Ahmed Faid
Date: October, 07, 2020
Description: Header file contains all member variables and function declaration
            of Country class.
*/
#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

class Country{
  private:
    std::string country_name;
    std::string country_code;
    int new_cases;
    int total_cases;
    int new_deaths;
    int total_deaths;
    int new_recovered;
    int total_recovered;

  public:
    Country(std::string in_country_name, std::string in_country_code, int in_new_cases, int in_total_cases,
      int in_new_deaths, int in_total_deaths, int in_new_recovered, int in_total_recovered);

    std::string get_countryname() const;
    std::string get_countrycode() const;

    void set_countryname(std::string in_country_name);
    void set_countrycode(std::string in_country_code);

    int get_newcases() const;
    int get_totalcases() const;
    int get_newdeaths() const;
    int get_totaldeaths() const;
    int get_newrecovered() const;
    int get_totalrecovered() const;

    void set_newcases(int in_new_cases);
    void set_totalcases(int in_total_cases);
    void set_newdeaths(int in_new_deaths);
    void set_totaldeaths(int in_total_deaths);
    void set_newrecovered(int in_new_recovered);
    void set_totalrecovered(int in_total_recovered);

    ~Country();
};

#endif
