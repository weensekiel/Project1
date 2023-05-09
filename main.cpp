#include "DriverLicense.h"
#include "MinistryOfTransportation.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	MinistryOfTransportation list;

	list += DriverLicense("ezekiel", 25, "123 cat st", 123456789, false);
	list += DriverLicense("apple", 32, "912 bow st", 321654987, true);
	list += DriverLicense("bellsprout", 16, "route 3", 569854781, false);
	list += DriverLicense("bidoof", 30, "route 1", 412546890, false);

	cout << "********** Display 1 **********" << endl;
	list.display();

	cout << "********** Display 2 **********" << endl;
	list["ezekiel"].display();
	list["bellsprout"].display();

	cout << "********** Display 3 **********" << endl;
	MinistryOfTransportation list2 = list;

	list2.display();

	cout << "********** Display 4 **********" << endl;
	list.display();
}