/* C++ PROGRAM FOR SIMPLE RESTAURANT BILLING SYSTEM
                    (---ALL INDIA FOOD JUNCTION---)
 editor used - CODEBLOCKS/ VISUAL STUDIO CODE

 programmed by- SHUBHAM RAWALE.
 */

#include<iostream>
using namespace std;
class menu
{
    public:
        int a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q,r,t,u,v,T,nd;
        char name[30];

        void men_u();
        void bill();
        void total();
        menu()
        {
            a=b=c=d=e=f=g=h=i=j=k=l=m=o=p=q=r=t=u=v=0;
        }
};
void menu ::men_u()
{
    int n;
    int cc;
    int s;
    cout<<"\nPROGRAMMED BY-   < SHUBHAM VIJAY RAWALE >";
    do{
        cout<<"\n\n"<<endl;
        cout<<"###################################################################################################################################################################################################################"<<endl;
        cout<<"                                                                    --------------------WELCOME TO ALL INDIA FOOD JUNCTION-----------------"<<endl;
        cout<<"\n";
        cout<<"                                                                                        **********MAIN MENU**************"<<endl;
        cout<<"                                                                                        |      1.NORTH INDIAN           |"<<endl;
        cout<<"                                                                                        |      2.SOUTH INDIAN           |"<<endl;
        cout<<"                                                                                        |      3.CHINESE                |"<<endl;
        cout<<"                                                                                        |      4.ITALIAN                |"<<endl;
        cout<<"                                                                                        *********************************"<<endl;
        cout<<"\n";
        cout<<"###################################################################################################################################################################################################################"<<endl;
        cout<<"                                                                    ~PLEASE SELECT FROM ABOVE TYPES-"<<endl;
        cin>>n;
    switch(n)
{
	case 1:
	cout<<"                                                                        *********NORTH INDIAN***********"<<endl;
	cout<<"                                                                        |--DISHES--           --PRICE--|"<<endl;
	cout<<"                                                                        --------------------------------"<<endl;
	cout<<"                                                                        |1.kashmiri pulav.     -250$   |"<<endl;
	cout<<"                                                                        |2.chicken biryani     -300$   |"<<endl;
	cout<<"                                                                        |3.aloo paratha        -70$    |"<<endl;
	cout<<"                                                                        |4.chicken biryani     -30$    |"<<endl;
	cout<<"                                                                        |5.punjabi thali       -150$   |"<<endl;
	cout<<"                                                                        --------------------------------"<<endl;
	cout<<"\n";
	cout<<"                                                                        ~SELECT DISH-"<<endl;
	cin>>s;
	if(s==1)
	{	a=250;
	    cout<<"                                                                    |1.kashmiri pulav.     -250$   |"<<endl;
	    cout<<"\n";
	    cout<<"                                                                    ~ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"                                                                    ~NUMBER OF DISH SELECTED-"<<nd<<endl;
        a=250*nd;



	}
	if(s==2)
    {   b=300;
        cout<<"\n|2.chicken biryani     -300$   |"<<endl;
        cout<<"\n";
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        b=300*nd;

    }
    if(s==3)
    {   c=70;
        cout<<"\n|3.aloo paratha        -70$    |"<<endl;
        cout<<"\n";
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        c=70*nd;
    }
    if(s==4)
    {   d=30;
        cout<<"|4.chicken biryani     -30$    |"<<endl;
        cout<<"\n";
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        d=30*nd;
    }
    if(s==5)
    {   e=150;
        cout<<"|5.punjabi thali       -150$   |"<<endl;
        cout<<"\n";
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        e=150*nd;
    }
	break;

	case 2:
	cout<<"*********SOUTH INDIAN**********"<<endl;
	cout<<"|--DISHES--          --PRICE--|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|1.idli               -40$    |"<<endl;
	cout<<"|2.dosa               -60$    |"<<endl;
	cout<<"|3.vada sambar        -50$    |"<<endl;
	cout<<"|4.upma               -20$    |"<<endl;
	cout<<"|5.uttapa             -80$    |"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"\n";
	cout<<"\n SELECT DISH-"<<endl;
	cin>>s;
	if(s==1)
	{	cout<<"\n|1.idli               -40$    |"<<endl;
	cout<<"\n";
        f=40;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=40*nd;
	}
	if(s==2)
    {
        cout<<"\n|2.dosa               -60$    |"<<endl;
        cout<<"\n";
        g=60;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=40*nd;
    }
    if(s==3)
    {
        cout<<"\n|3.vada sambar        -50$    |"<<endl;
        cout<<"\n";
        h=50;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=40*nd;
    }
    if(s==4)
    {
       cout<<"\n|4.upma               -20$    |"<<endl;
       cout<<"\n";
       i=20;
       cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=i*nd;
    }
    if(s==5)
    {
        cout<<cout<<"\n|5.uttapa             -80$    |"<<endl;
        cout<<"\n";
        j=80;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=j*nd;
    }
	break;

	case 3:
	cout<<"***********CHINESE****************"<<endl;
	cout<<"|--DISHES--             --PRICE--|"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"|1.hakka nooodles        -90$    |"<<endl;
	cout<<"|2.veg manchurian        -120$   |"<<endl;
    cout<<"|3.momos                 -70$    |"<<endl;
	cout<<"|4.schezwan rice         -120$   |"<<endl;
	cout<<"|5.chicken soup          -60$    |"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"\n";
	cout<<"\n SELECT DISH-"<<endl;
	cin>>s;
	if(s==1)
	{	cout<<"\n|1.hakka nooodles        -90$    |"<<endl;
	cout<<"\n";
        k=90;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=k*nd;
	}
	if(s==2)
    {
        cout<<"\n|2.veg manchurian        -120$   |"<<endl;
        cout<<"\n";
        l=120;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=l*nd;
    }
    if(s==3)
    {
        cout<<"\n|3.momos                 -70$    |"<<endl;
        cout<<"\n";
        m=70;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=m*nd;
    }
    if(s==4)
    {
       cout<<"\n|4.schezwan rice         -120$   |"<<endl;
       cout<<"\n";
       o=120;
       cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
	    cout<<"\n";
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=o*nd;
    }
    if(s==5)
    {
        cout<<cout<<"\n|5.chicken soup          -60$    |"<<endl;
        p=60;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=p*nd;
    }
	break;

	case 4:
	cout<<"************ITALIAN**************"<<endl;
	cout<<"|--DISHES--            --PRICE--|"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|1.pasta                -60$     |"<<endl;
	cout<<"|2.cheese pasta         -70$     |"<<endl;
	cout<<"|3.tomato pasta         -80$     |"<<endl;
	cout<<"|4.veg pizza            -50$     |"<<endl;
	cout<<"|5.akhri pasta          -80$     |"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"\n SELECT DISH-"<<endl;
	cin>>s;
	if(s==1)
	{	cout<<"\n|1.pasta                -60$     |"<<endl;
        q=60;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=q*nd;
	}
	if(s==2)
    {
        cout<<"\n|2.cheese pasta         -70$     |"<<endl;
        r=70;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=r*nd;
    }
    if(s==3)
    {
        cout<<"\n|3.tomato pasta         -80$     |"<<endl;
        t=80;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=t*nd;
    }
    if(s==4)
    {
       cout<<"\n|4.veg pizza            -50$     |"<<endl;
       u=50;
       cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=u*nd;
    }
    if(s==5)
    {
        cout<<"\n|5.akhri pasta          -80$     |"<<endl;
        v=80;
        cout<<"\n ENTER THE NUMBER OF DISHES-"<<endl;
	    cin>>nd;
        cout<<"\n NUMBER OF DISH SELECTED-"<<nd<<endl;
        f=v*nd;
    }
	break;

	default:cout<<"\t\t\t----------------WRONG CHOICE ENTERED---------------------"<<endl;
            cout<<"\n"<<endl;
            cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
			cout<<"\t\t\t@                                                       @"<<endl;
			cout<<"\t\t\t@            ------PLEASE VISIT AGAIN------             @"<<endl;
			cout<<"\t\t\t@                                                       @"<<endl;
			cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

}
T=a+b+c+d+e+f+g+h+i+j+k+l+m+o+p+q+r+t+u+v;
cout<<"-------------------------------------------------------";
cout<<"\n<<TO CONTINUE SELECTION>>  (PRESS-1)"<<endl;
cout<<"\n<<TO KNOW YOUR BILL>>      (PRESS-0)"<<endl;
cout<<"-------------------------------------------------------";
cin>>cc;

}
while(cc==1);

            cout<<"                                                                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
			cout<<"                                                                  @                                                       @"<<endl;
			cout<<"                                                                  @                  ****THANK YOU*****                   @"<<endl;
			cout<<"                                                                  @                                                       @"<<endl;
			cout<<"                                                                  @            ------PLEASE VISIT AGAIN------             @"<<endl;
			cout<<"                                                                  @                                                       @"<<endl;
			cout<<"------------------------------------------------------------------@                                                       @----------------------------------------------------------------------------------------";
}
void menu ::bill()
{

            cout<<"                                                                  @        *****************BILL*****************         @"<<endl;
            cout<<"                                                                  @            ------------------------------             @"<<endl;
            cout<<"                                                                  @            |     TOTAL-"<<T  <<"/- Rs        |             @"<<endl;
            cout<<"                                                                  @            ------------------------------             @"<<endl;
            cout<<"                                                                  @                                                       @"<<endl;
            cout<<"                                                                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
            cout<<"                                                                  @   --DISH NAME--            --PRICE--        --QTY--   @"<<endl;
            cout<<"                                                                  @                                                       @"<<endl;
            cout<<"                                                                  @   name                     "<<a<<"         "<<nd<<"   @"<<endl;
            cout<<"                                                                  @                                                       @"<<endl;
            cout<<"                                                                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
}

int main()
{
menu m;
m.men_u();
m.bill();

return 0;
}
