#COVID graph

Individual assignment for CS3307. The program collects data from a csv file containing statistics about the effect of covid on countries and displays that data sorted based on parameters inserted by the user.

#USAGE

After getting the CSV file containing the data and running the make file you can run the program by running ./main. The program takes 3 arguments. argv[1] is the file path of the csv file. argv[2] is the attribute by which the data will be sorted. This value is an integer between 1 and 6 and yeilds the following results:
  1 = new Confirmed Case
  2 = new deaths
  3 = new recovered
  4 = total confirmed cases
  5 = total deaths
  6 = total recovered
argv[3] determines whether they will be sorted in ascending (argv[3] = 1) or descending order (argv[3] = 0).
