/*
Anerys Menal
CSI 230
4/28/2020
Program #15*/
#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<fstream>
#include <windows.h>
using namespace std;

struct sandwichOrder
    {

    };

struct sideOrder
    {

    };
enum strength {light=1, medium=2, dark=3};//enum function for strength
enum coffeeName {Columbian=1, FrenchRoast=2, ItalianBlend=3, House=4};

//struct function
struct Roostcafe
{
    int coffeeName;
    double price; //for totaling price later
    double price2; //for sandwhich/sides
    int strength;
    int size; //cup size
    int sugar; //how many sugar
    bool creamer = true;
    bool blend = true;
};
struct Order
{
    Roostcafe rdata;
    sandwichOrder sa ;
    sideOrder so;

};

//customer class
class customer
{
    public:
    string fname; //customer name
    int orderNum;//get ordernumber
    double paymentDue;
    Order obj;

//constructor
customer()
    {
    fname = "";
    orderNum = 0;
    paymentDue = 0;
    }

//functions
PlacesOrder(const Roostcafe &);//reading info from roostcafe

//give change function
public:
    void Pays()
{
    cout<<"Please enter amount due"<<endl;
    cin>>paymentDue;
    paymentDue = paymentDue - obj.rdata.price;
    cout<<"Here you change:"<<paymentDue<<endl;
}
public:PickUpOrder()
{
cout<<"Thank you for your payment"<<endl;

}

//accessor
    string getfname()
    {
        return fname;
    }
    int getorderNum()
    {
        return orderNum;
    }
    float getpaymentDue()
    {
        return paymentDue;
    }
};

//new class
class Coff{
   struct productAmount
    {
    Roostcafe rdata;
    customer c;
    float strength = 0.75;
    int size = 0.5;
    int sugar = 3;
    int creamer = 6;
    };
    customer c;
    Roostcafe rdata;
    productAmount p;

    public: void RefillProduct()
    {
    cout<<"Refill Items here"<<endl;
    cout<<"Refill Coffee:"<<endl;
    cin>>p.strength;
    cout<<"Refill Cups:"<<endl;
    cin>>p.size;
    cout<<"Refill Sugar: "<<endl;
    cin>>p.sugar;
    cout<<"Refill Creamer:" <<endl;
    cin>>p.creamer;
    }
     receiveOrder(int orderNum){
        //fetch the order
     calcRemainproduct(rdata);
    }

     boolean calcRemainproduct(Roostcafe)
    {
        productAmount p;
        if(!p.strength>=c.obj.rdata.strength)
            cout<<"Coffee is low"<<endl;
        if(!p.sugar>=c.obj.rdata.sugar)
            cout<<"Sugar is low"<<endl;
        if(!p.creamer>=c.obj.rdata.creamer)
            cout<<"Creamer is low"<<endl;
        if(p.strength>=c.obj.rdata.strength&&p.size>=c.obj.rdata.size&&p.sugar>=c.obj.rdata.sugar&&p.creamer>=c.obj.rdata.creamer)
        {
            p.strength-=c.obj.rdata.strength;
            p.size-=c.obj.rdata.size;
            p.sugar-=c.obj.rdata.sugar;
            p.creamer-=c.obj.rdata.creamer;
            return true;
        }
        else
            return false;
    }
};
enum meat{hamburger=1, ham=2, turkey=3, chicken=4, pastrami=5};
enum condiment{catsup=1, mustard=2, mayo=3};
enum cheese{swiss=1,american=2,cheddar=3,provolone=4};

class SandwichDistribution
{
    public:

    float meat = 0.25;
    float lettuce= 0.2;
    float tomato = 0.25;
    float onion = 0.2;
    float pickles = 0.2;
    int condiments = 3;
    int cheese =0.25;

    customer c;
    Roostcafe rdata;

    public:
        void RefillProduct()
    {
    cout<<"Refill Items here"<<endl;
    cout<<"Refill Meat:"<<endl;
    cin>>meat;
    cout<<"Refill Lettuce:"<<endl;
    cin>>lettuce;
    cout<<"Refill Tomato: "<<endl;
    cin>>tomato;
    cout<<"Refill Onion: "<<endl;
    cin>>onion;
    cout<<"Refill Pickles: "<<endl;
    cin>>pickles;
    cout<<"Refill Condiments: "<<endl;
    cin>>condiments;
    cout<<"Refill Cheese: "<<endl;
    cin>>cheese;

    }
     receiveOrder(int orderNum){
        //fetch the order
    }

     boolean calcRemainproduct(SandwichDistribution)
    {

        if(!meat>=meat)
            cout<<"Meat is low"<<endl;
        if(!lettuce>=lettuce)
            cout<<"Lettuce is low"<<endl;
        if(!tomato>=tomato)
            cout<<"Tomatoes is low"<<endl;
            if(!onion>=onion)
            cout<<"Onions is low"<<endl;
            if(!pickles>=pickles)
            cout<<"Pickles is low"<<endl;
            if(!condiments>=condiments)
            cout<<"Condiments is low"<<endl;
            if(!cheese>=cheese)
            cout<<"Cheese is low"<<endl;
    }

};

enum chips{s=1,l=2};
enum chipstype{BBQ=1, plain=2, sc=3, seasalt=4};
enum fries{sm=1,md=2,lg=3};

class SideDistributions
{
    public:
    int chips;
    int chipstype;
    int fries;

    customer c;
    Roostcafe rdata;
    SandwichDistribution saobj;


    public: void RefillProduct()
    {
    cout<<"Refill Items here"<<endl;
    cout<<"Refill Chips:"<<endl;
    cin>>chips;
    cout<<"Refill Chips type:"<<endl;
    cin>>chipstype;
    cout<<"Refill Fries: "<<endl;
    cin>>fries;

    }
     receiveOrder(int orderNum){
        //fetch the order

    }

     boolean calcRemainproduct(SideDistributions)
    {

        if(!chips>=chips)
            cout<<"Chips is low"<<endl;
        if(!chipstype>=chipstype)
            cout<<"Flavor Chips is low"<<endl;
        if(!fries>=fries)
            cout<<"Fries is low"<<endl;
    }

};

//cash register class
class CashRegister
{
private:
    double MoneyOwed;
    double amountPaid;
    int fifty;
    int twenty;
    int ten;
    int five;
    int one;
    int fiftyCent;
    int twentyfiveCent;
    int tenCent;
    int fiveCent;
    int oneCent;

    //functions
public:
    SetAmountOwed(customer &c, SandwichDistribution saobj, SideDistributions sobj);
    CalculateTotalAmountInRegister()
    {
        char filename[] = "CustOrder.dat";
        ifstream custOrder(filename);
        string line;
        double total_price = 0.0;
        double amount = 0.0;
        cout << "Calculating Register Total:";
        while(getline(custOrder, line, '\n'))
        {
            size_t found = line.find('$'); //check line containing $
            if(found !=string::npos)
                {
                stringstream ss(line.substr(1+found)); //grab the amound
                ss>>amount; //convert string to dollar
                total_price+=amount; //add the dollar to running total
            }
        }
        custOrder.close();
        // print total price
    cout << "\nRegister Total: " << total_price << endl;

    }
    getOrder(int orderNum);
};
//total price function
CashRegister::SetAmountOwed(customer &c, SandwichDistribution saobj, SideDistributions sobj)
{
    double price = 0.0;
    if(c.obj.rdata.size == 0)
        price = 1.50;
    else if (c.obj.rdata.size == 1)
        price = 2.10;
    else if(c.obj.rdata.size == 2)
        price = 2.50;
    else if(c.obj.rdata.size == 3)
        price = 3.00;
    else if (c.obj.rdata.size == 4)
        price= 4.25;
    //for french or italian blend
    if(c.obj.rdata.blend != false)
        price = price + 0.25;
        //for creamer
    if(c.obj.rdata.creamer != false)
        price = price + 0.08;
        //for sugar
    if(c.obj.rdata.sugar == 1)
        price = price + 0.13;
    else if(c.obj.rdata.sugar == 2)
        price = price +(2*0.13);
    else if(c.obj.rdata.sugar == 3)
        price = price + (3*0.13);
        c.obj.rdata.price = price;

        //for sandwich
     double price2 = 4.95;
     if(saobj.lettuce == 1)
        price2 = price2 + 0.10;
    if(saobj.tomato == 1)
        price2 = price2 + 0.25;
    if(saobj.onion == 1)
        price2 = price2 + 0.15;
    if(saobj.pickles == 1)
        price2 = price2 + 0.31;

        //for sides
    if(sobj.chips == 1)
        price2 = price2 + 1.25;
    else if(sobj.chips == 2)
        price2 = price2 + 1.75;
    if(sobj.fries == 1)
        price2 = price2 + 1.54;
    else if(sobj.fries == 2)
        price2 = price2 + 1.98;
    else if(sobj.fries == 3)
        price2 = price2 + 2.50;

   c.obj.rdata.price2 = price2;

}

class Analysis
{
private:
    /*There a weird error that can't figure out
    this order seems to make the program functions work*/
    int numCoffee; //for buffer with error
    int coffecount;
    int x; //for buffer with error
    int numSand;
    int y; //for buffer with error
    int numSides;
    double DollarIncome = 0.0;
    /*Error leap frogs over one attribute to the other.*/


    //call these classes/structs
    customer c;
    Roostcafe rdata;
    SandwichDistribution saobj;
    SideDistributions sobj;

    //functions
public:
    CoffeeSold()
    {
    char filename[] = "CustOrder.dat";
        ifstream custOrder(filename);
        string line;

    while(getline(custOrder, line, '\n'))
        {

            size_t found = line.find("Type of Coffee:"); //check line containing coffee
            if(found !=string::npos)
                {
                coffecount++;
            }
        }
        custOrder.close();
        cout << "Coffee Sold: " << coffecount << endl;

    }
    //function that scans file
    SandwichSold()
    {

        char filename[] = "CustOrder.dat";
        ifstream custOrder(filename);
        string line;

    while(getline(custOrder, line, '\n'))
        {

            size_t found = line.find("How Many Sandwich:"); //check line containing sandwhich
            if(found !=string::npos)

                {
                numSand++;
            }
        }
        custOrder.close();
         cout << "Sandwich Sold: " << numSand <<endl;
    }
    SidesSold()
    {
        char filename[] = "CustOrder.dat";
        ifstream custOrder(filename);
        string line;

    while(getline(custOrder, line, '\n'))
        {

            size_t found = line.find("Sides Ordered:"); //check line containing sides
            if(found !=string::npos)
                {
                numSides++;
            }
        }
        custOrder.close();
         cout << "Sides Sold: "<< numSides <<endl;
    }
    GrossIncome()
    {
         char filename[] = "CustOrder.dat";
        ifstream custOrder(filename);
        string line;
        double total_price = 0.0;

        while(getline(custOrder, line, '\n'))
        {
            size_t found = line.find('$'); //check line containing $
            if(found !=string::npos)
                {
                stringstream ss(line.substr(1+found)); //grab the amound
                ss>>DollarIncome; //convert string to dollar
                total_price+=DollarIncome; //add the dollar to running total
            }
        }
        custOrder.close();
        // print total price
    cout << "\nGross Income: " << total_price << endl;
    }
    //count from classes/struct
    ProductUsed()
    {
        cout<<"\nProducts Used:"<<endl;
        cout<<"\nFor Coffee"<<endl;
        cout<<"Sugar:"<<c.obj.rdata.sugar<<"\nCreamer:"<<c.obj.rdata.creamer<<endl;
        cout<<"\nFor Sandwiches"<<endl;
        cout<<"Meat:"<<saobj.meat<<"\nLettuce:"<<saobj.lettuce<<"\nTomatoes:"<<saobj.tomato<<"\nPickles:"<<saobj.pickles<<"\nOnions:"<<saobj.onion<<endl;
        cout<<"\nCheese:"<<saobj.cheese<<"\nSides:"<<sobj.chips<<"\nFries:"<<sobj.fries<<endl;
    }


};
//start main
int main()
{
    customer c; //class customer
    Coff coffobject; //class coff
    SandwichDistribution saobj; //ordering sandwhich
    SideDistributions sobj; //order sides
    CashRegister cr; //cashregister class
    Analysis an; //analysis class

    struct customer arr[10]; //order number
    char ch1,ch2,input; //char input;
    int i,option, answer; //user input
    int flag = 0;
    //since we can order more than once
    int sandwichnum;
    int sidesnum = 3;
    double total = 0.0;

do{ //outer do-while loop
    do //inner do-while loop
    {
    cout<<"Main Menu.\n"<<endl;
    cout<<"Order a Coffee? Press Y"
    <<"\nTo Order a Sandwich Press S"<<
    "\nFor Other Menu Press N"<<endl;
    cin>>input;
    cin.ignore();
    if(input == 'y'||input == 'Y')
    {
        cout<<"Can I have a name for the order?"<<endl;
        getline(cin,c.fname); //inputting a name from user

        cout<<"What coffee would you like?"<<"\nColumbian=1, FrenchRoast=2, ItalianBlend=3, House=4"<<endl;
        cin>>c.obj.rdata.coffeeName;
        //customer input for order
        cout<<"How strong? (Light=1,Medium=2,Dark=3)"<<endl;
        cin>>c.obj.rdata.strength;
        cout<<"Size of Coffee?(S=0,R=1,M=2,L=3,XL=4)"<<endl;
        cin>>c.obj.rdata.size;
        cout<<"How much sugar?"<<endl;
        cin>>c.obj.rdata.sugar;
        cout<<"Would you like French roast or Italian blend(Y/N)"<<endl;
        cin>>input;
        if(ch1=='Y')
           {
            c.obj.rdata.blend=true;
           }
        cout<<"Do you want creamer?(Y/N)"<<endl;
        cin>>input;
        if(ch2=='Y')
           {
            c.obj.rdata.creamer=true;
            }
        //sandwhich ordering part

        cout<<"Here is your ordernumber #:"<<(arr[10].orderNum + 1)<<endl;

        //call to check if we have enough product
        boolean check = true;

        if(check==true) //if yes
            cout<<"Order is ready"<<endl;
        else //if no
            cout<<"Cannot complete the order due to low product"<<endl;
        if(check==true)
        {
        //writing out to the file
        fstream custOrder("CustOrder.dat", ios::out | ios::app);
                custOrder << "\nOrderNumber:" << c.orderNum << "\nType of Coffee:" << c.obj.rdata.coffeeName << "\nStrength" << c.obj.rdata.strength << "\nSize: " << c.obj.rdata.size << "\nSugarAmount: " << c.obj.rdata.sugar << endl;
                cr.SetAmountOwed(c, saobj, sobj);
                custOrder << "Cream: " << c.obj.rdata.creamer << "\nCost: $ " << c.obj.rdata.price << endl;
                custOrder.close();
        }
        //calling the pays function
        cout<<"Total is $:"<<c.obj.rdata.price<<endl;
        c.Pays();
     c.PickUpOrder();
    }
      if((input == 's'||input == 'S'))
        {
         //for ordering a sandwhich instead
                cout<<"How many Sandwiches?";
                cin>>sandwichnum;
                cin.ignore();
                 for(int i=0;i<sandwichnum;i++)
           {
                cout<<"What kind of meat would you like?"<<
                "\nHB=1,Ham=2,Turkey=3,chicken=4,pastrami=5"<<endl;
                cin>>saobj.meat;
                cout<<"Add lettuce? Enter 1"<<endl;
                cin>>saobj.lettuce;
                cout<<"Add onions?Enter 1"<<endl;
                cin>>saobj.onion;
                cout<<"Add pickles?Enter 1"<<endl;
                cin>>saobj.pickles;

                cout<<"What kind of condiment?"<<
                "\nCatsup=1,mustard=2,mayo=3"<<endl;
                cin>>saobj.condiments;
                cout<<"What kind of cheese?"<<
                "\nSwiss=1,American=2,Cheddar=3,Provolone=4"<<endl;
                cin>>saobj.cheese;

                //order the sides
                cout<<"What size bag of chips would you like? Small = 1/Large =2\n"<<endl;
                cin>>sobj.chips;
                cout<<"What kind of chips?\n"<<
                "BBQ=1,Plain=2,SC=3,Seasalt=4"<<endl;
                cin>>sobj.chipstype;
                cout<<"What size fries? S=1, M=2, L=3"<<endl;
                cin>>sobj.fries;
           }
                    //write to file
                fstream custOrder("CustOrder.dat", ios::out | ios::app);
                custOrder <<"\nHow Many Sandwich:"<<sandwichnum<<"\nSides Ordered:"<<sidesnum<<endl;
                cr.SetAmountOwed(c, saobj, sobj);
                total = sandwichnum*c.obj.rdata.price2;
                custOrder<<"Sandwich and Side Total: $"<<total<<endl;
                custOrder.close();

                //calculate total to print out to user
                total = sandwichnum*c.obj.rdata.price2;
                cout<<"Here is your OrderNumber #:"<<(arr[10].orderNum + 1)<<endl;
                cout<<"Total is $:"<<total<<endl;

       }//end of switch/ask user
        cout<<"Order Again? Press Y/Press N for other menu"<<endl;
        cin>>input;
            }//inner do while loop
            while(input == 'Y'||input == 'y');

//if user selects No in Main Menu or Order Again
     if(input == 'n'||input == 'N')
        {
        cout<<"[1]View an order\n"
        <<"[2]View Register Total\n"
        <<"[3]Refill products\n"
        <<"[4]Check Count\n";
        cin>>answer;

        switch(answer)
        {
        case 1:
            {
            cout<<"Enter a order number";
            cin>>option;

            for(i=0;i<10;i++){
            //display option
            if(arr[10].orderNum != option)
            {
            flag = 1;
            cout<<"Here is your order:"<<endl;
            cout<<"Name:"<<c.fname<<endl<<"\nType of Coffee:"<<c.obj.rdata.coffeeName<<"\nRoast:"<<c.obj.rdata.strength<<endl;
            cout<<"Size:"<<c.obj.rdata.size<<endl;
            cout<<"Sugar:"<<c.obj.rdata.sugar<<endl;
            std::cout <<"Wanted French or Italian blend:"<< std::boolalpha << c.obj.rdata.blend << '\n'; //so it prints out true or false
            std::cout <<"Wanted Creamer:"<< std::boolalpha << c.obj.rdata.creamer << '\n';
            cout<<"Cost = $" <<c.obj.rdata.price<<endl; //function to total price
            break;
            }

            }
            break;
            }
    case 2: //calculate the amount in file
        {
          cr.CalculateTotalAmountInRegister();
          break;
        }

 case 3:
     {
//call the function to refill
   coffobject.RefillProduct();
   break;
     }
 case 4:
    {
        //calls the functions
        an.CoffeeSold();
        an.SandwichSold();
        an.SidesSold();
        an.GrossIncome();
        an.ProductUsed();
        break;
    }

}//end of switch

} //end of if statement

        //prompt to reorder
        cout<<"\n Want to reorder?"<<endl;
        cin>>input;
        if((input == 'N')||(input == 'n'))
        {
            cout<<"Closing program"<<endl;
            exit(2);
        }
//outer do while loop
}while((input=='y')||(input ='Y'));
        return 0;
}//end of main



