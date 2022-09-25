carnival: driver.o
  g++ -o carnival driver.o
driver.o: driver.cpp
  g++ -c driver.cpp
make clean:
  rm *.o amusementPark
