
#include<iostream>
#include<string.h>
using namespace std;

class Customer
{
        public: 
                int cust_no;
                char cust_name[100];
                float cust_pay;
        public:
                void accept_details()
                {
                        cout<<"\n Enter Customer Details";
                        cout<<"\n -------------------------------------------";
                        cout<<"\n Enter Customer Id           :  ";
                        cin>>cust_no;
                        cout<<"\n Enter Customer Name     :  ";
                        cin>>cust_name;
                        cout<<"\n Enter customer payment                     :  ";
                        cin>>cust_pay;
                }}; 
               
int main()
{
        Customer *cus;
        int cnt, i, max;
        char name[100];
        int cust_no;
        float pay;
        cout<<"\n Enter No. of Customer Details You Want  :  ";
        cin>>cnt;
        cus=new Customer[cnt];
        for(i=0;i<cnt;i++)
        {
                cus[i].accept_details();
        }
        
        
        cout<<"\n Enter other No. of Customer Details You Want  :  ";
        cin>>cnt;
        cus=new Customer[cnt];
        for(i=0;i<cnt;i++)
        {
                cus[i].accept_details();
        }
        
        
     
        max=cus[0].cust_pay;
        for(i=0;i<cnt;i++)
        {
                if(cus[i].cust_pay>max)
                {
                        max=cus[i].cust_pay;
                }
        }
        for(i=0;i<cnt;i++)
        {
                if(cus[i].cust_pay==max)
                {
                        cout<<"\n ------------------------------------------------\n";
                        cout<<"\n Maximum cust_pay of Customer Name is : "<<cus[i].cust_name;
                        cout<<"\n And cust_pay is : "<<cus[i].cust_pay;
                }

        }
        return 0;
}