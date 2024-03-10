#include "AIEngineer.h"

AIEngineer::AIEngineer(string identity, string fullname, double salary, string iban, string deepLearningFramework)
 : Employee(identity, fullname, salary, iban), numberOfDLFrameworks(0)
{
	deepLearningFrameworks[0] = new string(deepLearningFramework);
}
