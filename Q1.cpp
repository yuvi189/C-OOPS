#include<iostream>
using namespace std;
class Purchase{
	char username;
	int countofitems;
	int amount;
	public:
		void setuser(void)
		{
			cout<<"username: "<<endl;
			cin>>username;
		}
		int getuser()
		{
			cout<<"username is : "<<username<<endl;
		}
		void setitems(void)
		{
		cout<<"enter num of items: "<<endl;
		cin>>countofitems;
		
		
		}
		void getitem()
		{
            
			cout<<"num of items are: "<<countofitems<<endl;
            

		}
		void setamount(void)
		{
			cout<<"enter amt: "<<endl;
			cin>>amount;
		}
		void getamount()
		{

			cout<<"amount is : "<<amount<<endl;
            
		}
        void get_total(int j)
        {
            static int total_amount=0;
            total_amount+= this -> amount;
            static int total_items=0;
            total_items+= this -> countofitems;
            if(j>=1)
            {
                cout<<"total items bought are : "<<  total_items << endl;
                cout<<"total amount recieved is : "<<total_amount<<endl;
            }

        }
};
	
int main()
{
	int n;
	Purchase customers[100];
	cout<<"enter num of customers"<<endl;
	cin>>n;
	for (int i = 0;i<n;i++)
	{
		customers[i].setuser();
		
		customers[i].setitems();
		
		customers[i].setamount();
		
	}
    for(int i=0;i<n;i++)
    {
        customers[i].getuser();
        customers[i].getitem();
        customers[i].getamount();
        customers[i].get_total(i);

    }
	
	return 0;
}