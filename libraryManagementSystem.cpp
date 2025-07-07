#include <iostream>
using namespace std;
class libraryMember
{
protected:
   int memberId;
   string memberName;
   double memberFee;

public:
   libraryMember()
   {
      memberId = 0;
      memberName = "";
      memberFee = 0;
   }
   libraryMember(int id, string name)
   {
      memberId = id;
      memberName = name;
      memberFee = 0;
   }

   virtual void displayDetails() = 0;
   virtual void calculateMemberFee() = 0;

   virtual ~libraryMember()
   {
      cout << "HEY I AM A DESTRUCTOR OF BASE CLASS CALLED HERE\n";
   }
};
class studentMember : public libraryMember
{
private:
   double baseFee;
   double discount;

public:
   studentMember(int id, string name, double Fee, double disc)
   {
      memberId = id;
      memberName = name;
      memberFee = 0;
      baseFee = Fee;
      discount = disc;
   }
   void calculateMemberFee() override
   {
      memberFee = baseFee - discount;
   }
   void displayDetails() override
   {
      cout << "Student Member ID: " << memberId << endl;
      cout << "Name: " << memberName << endl;
      cout << "Membership Fee: " << memberFee << endl;
   }
   virtual ~studentMember()
   {
      cout << "DESTRUCTOR OF STUDENT CLASS\n";
   }
};
class facultyMember : public libraryMember
{
private:
   double baseFee;
   double facultyFee;

public:
   facultyMember(int id, string name, double Fee, double fFee)
   {
      memberId = id;
      memberName = name;
      baseFee = Fee;
      facultyFee = fFee;
   }
   void calculateMemberFee() override
   {
      memberFee = baseFee + facultyFee;
   }
   void displayDetails() override
   {
      cout << "Faculty Member ID: " << memberId << endl;
      cout << "Name: " << memberName << endl;
      cout << "Membership Fee: " << memberFee << endl;
   }
   virtual ~facultyMember()
   {
      cout << "DESTRUCTOR OF FACULTY ClASS\n";
   }
};
int main()
{
   libraryMember *members[2];
   members[0] = new studentMember(1, "Ali", 5000, 1000);
   members[1] = new facultyMember(2, "Dr. Ahmed", 7000, 2000);

   for (int i = 0; i < 2; i++)
   {
      members[i]->calculateMemberFee();
      members[i]->displayDetails();
      cout << "\n";
   }
   for (int i = 0; i < 2; i++)
   {
      delete members[i];
   }

   return 0;
}