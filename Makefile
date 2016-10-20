CXXFLAGS = -std=c++11

OFILES = main.o controller.o Part.o Locomotor.o Battery.o Arm.o Torso.o Customer.o Inventory.o Order.o Shop.o View.o 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable

executable: $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES)
	
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -w -c main.cpp
controller.o: controller.cpp controller.h view.h 
	$(CXX) $(CXXFLAGS) -w -c controller.cpp
Part.o: Part.cpp Part.h
	$(CXX) $(CXXFLAGS) -w -c RobotPart.cpp
Locomotor.o: locomotor.cpp locomotor.h
	$(CXX) $(CXXFLAGS) -w -c locomotor.cpp
Battery.o: battery.cpp battery.h
	$(CXX) $(CXXFLAGS) -w -c battery.cpp
Arm.o: arm.cpp arm.h
	$(CXX) $(CXXFLAGS) -w -c arm.cpp
Torso.o: torso.cpp torso.h
	$(CXX) $(CXXFLAGS) -w -c torso.cpp
Customer.o: customer.cpp customer.h
	$(CXX) $(CXXFLAGS) -w -c customer.cpp
Inventory.o: inventory.cpp inventory.h head.h locomotor.o arm.o battery.o torso.o
	$(CXX) $(CXXFLAGS) -w -c RobotModel.cpp
Order.o: order.cpp order.h Tnventory.o Customer.o 
	$(CXX) $(CXXFLAGS) -w -c order.cpp
ExpressRobot.o: expressRobot.cpp expressRobot.h
	$(CXX) $(CXXFLAGS) -w -c expressRobot.cpp
View.o: view.cpp view.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp

	
clean:
	rm -f *.o *.out

