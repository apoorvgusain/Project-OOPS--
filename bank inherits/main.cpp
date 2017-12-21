#include <iostream>

using namespace std;
class bank
{
 protected:
 int acc_id;
 char acc_name[20];
 double balance,val;
 public:
     bank()
     {
        balance=0;
     }
     void create_acc(){
     cout<<"enter the bank id:"<<endl;
     cin>>acc_id;
     cout<<"Enter the Name:"<<endl;
     cin>>acc_name;
     cout<<"enter the amount to be added"<<endl;
     cin>>val;
     balance+=val;
      }
      void deposit(){
          cout<<"Enter the amount to be deposited: "<<endl;
          cin>>val;
          balance+=val;
          cout<<"Amount is Added Successfully."<<endl;

      }
      void withdrawn()
      {
       cout<<"enter the amount to be withdrawn :"<<endl;
       cin>>val;
       if(val<balance)
       {
           balance-=val;
           cout<<"You Balance Left: "<<balance<<endl;
       }
       else{
        cout<<"SORRY YOUR BALANCE IS LOW.PLEASE DEPSOIT SOME MONEY TO YOUR ACCOUNT. "<<endl;
       }
      }

 };
 class HDFC:public bank
 {
     public:
     void disp()
     {

         cout<<"ACCOUNT ID: "<<acc_id<<endl<<"ACCOUNT NAME:"<<acc_name<<endl<<"BALANCE IS: "<<balance<<endl;
     }
 };
int main()
 {
     HDFC obj;
     int ch;

    cout << "HDFC BANK" << endl;

	while(1)
	{
	    cout<<"\n \nPRESS 1 for New Account"<<endl;
		cout<<"2. Deposit"<<endl;
		cout<<"3. Withdraw"<<endl;
		cout<<"4. Details"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter choice"<<endl;
		cin>>ch;
		if(ch==1)
            obj.create_acc();
		else if(ch==2)
		obj.deposit();

		else if(ch==3)
		obj.withdrawn();

		else if(ch==4)
		obj.disp();

		else if(ch==5)
		break;

		else
		cout<<"Wrong choice"<<endl;
	}
	cout<<"THANK YOU FOR USING HDFC ,PLEASE COME AGAIN."<<endl;
    return 0;
}
