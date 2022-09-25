carnival: driver.o
  g++ -o carnival driver.o
driver.o: driver.cpp
  g++ -c driver.cpp
patron.o: patron.cpp
  g++ -c patron.cpp
ride.o: patron.cpp
  g++ -c ride.cpp
clean:
  rm *.o amusementPark
