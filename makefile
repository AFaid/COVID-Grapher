main: main.o CountryList.o Country.o
        g++ main.o CountryList.o Country.o -o main

main.o: main.cpp
        g++ -c main.cpp

CountryList.o: CountryList.cpp
        g++ -c CountryList.cpp

Country.o: Country.cpp
        g++ -c Country.cpp

clean:
        rm *.o main
