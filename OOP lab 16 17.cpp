#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;
      int inches;
      
   public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }
      
    void displayDistance() {
        cout << "F: " << feet << " I:" << inches <<endl;
    }
      
    bool operator <(const Distance& d)
	{
        if(feet < d.feet) {
           return true;
        }
        if(feet == d.feet && inches < d.inches) {
           return true;
        }
        return false;
    }
    
	void operator =(Distance d)
    {
    	feet = d.feet;
    	inches = d.inches;
	}
};

int main() {
    Distance D1(11, 10), D2(5, 11), D3;
 
    if( D1 < D2 ) 
      cout << "D1 is less than D2 " << endl;
    else
      cout << "D2 is less than D1 " << endl;
    
    D3 = D1;
    D3.displayDistance();
   return 0;
}
