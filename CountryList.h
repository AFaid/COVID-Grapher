/*
Name: Ahmed Faid
Date: October, 7th, 2020
Description: Header file contains all member variables and function declaration
            of CountryList class.
*/
#ifndef COUNTRYLIST_H
#define COUNTRYLIST_H

#include <string>
#include <vector>
#include "Country.h"

class CountryList{
  private:
    std::vector<Country> countries;

  public:
    CountryList();

    CountryList(std::vector<Country> in_countries);

    std::vector<Country> get_Countries();

    void addCountry(Country new_country);

    void populate(std::string file_path);

    void sortAsc_newcases();

    void sortDes_newcases();

    void sortAsc_newdeaths();

    void sortDes_newdeaths();

    void sortAsc_newrecovered();

    void sortDes_newrecovered();

    void sortAsc_totalcases();

    void sortDes_totalcases();

    void sortAsc_totaldeaths();

    void sortDes_totaldeaths();

    void sortAsc_totalrecovered();

    void sortDes_totalrecovered();

    void drawGraph_Des(int choice);

    void drawGraph_Asc(int choice);

    ~CountryList();
};

#endif
