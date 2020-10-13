/*
Name: Ahmed Faid
Date: October, 7th, 2020
Description: Process arguments passed to the program to generate desired input.
*/

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include "CountryList.h"

using namespace std;

/*
Name: main function
Arguments: argv[1], argv[2], argv[3]
return: Null
Description: Accepts three arguments and outputs a graph based on chosen attribute and order.
argv[1] is the path of the file which contains country data. argv[2] integer between 1 to 6
determines which attribute to sort by and display. 1 = new Confirmed Case, 2 = new deaths,
3 = new recovered, 4 = total confirmed cases, 5 = total deaths, 6 = total recovered. argv[3]
determines order in which the countries will be displayed. 0 = descending order, 1= ascending order.
*/
int main(int argc, char *argv[]){
  //Checks if correct number of arguments is passed. Exits program otherwise.
  if(argc != 4){
    cerr << "Wrong number of arguments." << endl;
    exit(0);
  }

  //Checks if file name passed exists
  ifstream f(argv[1]);
  if(!(f.good())){
    cerr << "No such file exists." << endl;
    exit(0);
  }

  //Get country information from file (argv[1]) and add countries to country list
  CountryList country_list;
  country_list.populate(argv[1]);

  //Convert argv[2] into int
  istringstream second_arg(argv[2]);
  int attribute_choice;
  //if argument passed is not a number print error message and terminate
  if (!(second_arg >> attribute_choice)){
    cerr << "Invalid input in argument #2: " << argv[2] << endl;
    exit(0);
  }
  //if argument passed is a decimal print error message and terminate
  else if (!second_arg.eof()){
    cerr << "Trailing characters after number in argument #2: " << argv[2] << endl;
    exit(0);
  }
  //if argument is outside range of accepted values print error message and terminate
  else if(attribute_choice > 6 || attribute_choice < 1){
    cerr << "Second argument outside of range." << endl;
    exit(0);
  }

  //Convert argv[3] into int
  istringstream third_arg(argv[3]);
  int order_choice;
  //if argument passed is not a number print error message and terminate
  if (!(third_arg >> order_choice)){
    cerr << "Invalid input in argument #3: " << argv[3] << endl;
    exit(0);
  }
  //if argument passed is a decimal print error message and terminate
  else if (!third_arg.eof()){
    cerr << "Trailing characters after number in argument #3: " << argv[3] << endl;
    exit(0);
  }
  //if argument is outside range of accepted values print error message and terminate
  else if(order_choice > 1 || attribute_choice < 0){
    cerr << "Third argument outside of range." << endl;
    exit(0);
  }

  //Selects the correct sort method and sorts the list of countries based on arguments passed
  switch(attribute_choice){
    case 1:
      if(order_choice == 1)
        country_list.sortAsc_newcases();
      else if(order_choice == 0)
        country_list.sortDes_newcases();
      break;

    case 2:
      if(order_choice == 1)
        country_list.sortAsc_newdeaths();
      else if(order_choice == 0)
        country_list.sortDes_newdeaths();
      break;

    case 3:
        if(order_choice == 1)
          country_list.sortAsc_newrecovered();
        else if(order_choice == 0)
          country_list.sortDes_newrecovered();
        break;

    case 4:
      if(order_choice == 1)
        country_list.sortAsc_totalcases();
      else if(order_choice == 0)
        country_list.sortDes_totalcases();
      break;

    case 5:
      if(order_choice == 1)
        country_list.sortAsc_totaldeaths();
      else if(order_choice == 0)
        country_list.sortDes_totaldeaths();
      break;

    case 6:
      if(order_choice == 1)
        country_list.sortAsc_totalrecovered();
      else if(order_choice == 0)
        country_list.sortDes_totalrecovered();
      break;
  };

  //print graph in order specified by user (command line args)
  if(order_choice == 0)
    country_list.drawGraph_Des(attribute_choice);
  else if(order_choice == 1)
    country_list.drawGraph_Asc(attribute_choice);

}
