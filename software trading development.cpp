#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    char start;
    float shop(void);
    char choice;
Start:
    cout << "Please press H to start shopping for Home application " << endl;
start:
    cin >> start;
    if (start == 'h' || start == 'H')
    {
        float total = shop();

        time_t t = time(NULL);
        tm *tPtr = localtime(&t);
        cout << "Bill Date :";
        cout << tPtr->tm_mday << "/";
        cout << 1 + tPtr->tm_mon << "/";
        cout << 1900 + tPtr->tm_year << endl;
        cout << "Bill Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;
        cout << "Total Bill Amount" << total << endl;
        if (total > 50000 && 100000)
        {
            total = total - (0.05 * total);
            cout << "Total discount : 5%" << endl;
        }
        else if (total > 100000 && 125000)
        {
            total = total - (0.1 * total);
            cout << "Total Discount : 10%" << endl;
        }
        else if (total > 100000 && 125000)
        {
            total = total - (0.25 * total);
            cout << "Total Discount : 25%" << endl;
        }
        else if (total > 100000 && 125000)
        {
            total = total - (0.5 * total);
            cout << "Total Discount : 50%" << endl;
        }
        cout << "Total Discount : 50%" << total << endl;
    Again:
        cout << "Do you want shopping again y or n" << endl;
        cin>>choice;
        if (choice == 'y' || choice == 'y')
        {
            goto start;
        }
        else if (choice == 'n' || choice == 'N')
        {
            cout << "Thanks for Shoping " << endl;
        }
        else
        {
            cout << "You have entered the wrong option, please press H" << endl;
            goto Again;
        }
    }

    else
    {
        cout << "You have entered wrong Option, please press H to start again " << endl;
        goto start;
    }}

    float shop(){
    shop:
        char choice;
        char product;
        int quantity;
        float bill = 0;
    itemLevel:
        cout << "********Welcome********" << endl;
        cout << "___Please follow the instruction__" << endl;
        cout << "| 1)Please enter r to order Refrigerator " << endl;
        cout << "| 2)Please enter w to order Washin mashine " << endl;
        cout << "| 3)Please enter t to order Television " << endl;
        cout << "| 4)Please enter m to order Microwave " << endl;
        cout << "| 5)Please enter a to order Air Conditioner " << endl;
        cin >> choice;
        if (choice == 'r' || choice == 'w' || choice == 't' || choice == 'm' || choice == 'a')
        {
            if (choice == 'r' || choice == 'R')
            { Refrigerator:
                cout << "__________Refrigerator Detail______" << endl;
                cout << "| 1) Whirlpool=> Price 40000 |" << endl;
                cout << "| 2) Samsung  => Price 25000 |" << endl;
                cout << "| 3) Haier    => Price 20000 |" << endl;
                cout << "| 4) voltas   => Price 18000 |" << endl;
                cout << "| 5) Godrej   => Price 30000 |" << endl;
                cout << "| 6) Panasonic => Price 40000 |" << endl;

                cout << "Please Enter Your Choice " << endl;
                cin>>product;
                if (product == '1')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin>>quantity;
                    bill = bill + quantity * 40000;
                }
                else if (product == '2')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin>>quantity;
                    bill = bill + quantity * 25000;
                }
                else if (product == '3')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin>>quantity;
                    bill = bill + quantity * 20000;
                }
                else if (product == '4')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 18000;
                }
                else if (product == '5')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 30000;
                }
                else if (product == '6')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 35000;
                }
                else
                {
                    cout << "You have entered the wrong Option, please try again " << endl;
                    goto refrigerator;
                }
            }
            if(choice == 'w' || choice == 'W')
            { Washing Machine:
                cout << "__________Washing Mashine Details______" << endl;
                cout << "| 1) Bosch    => Price 40000 |" << endl;
                cout << "| 2) LG       => Price 25000 |" << endl;
                cout << "| 3) IFB     => Price 20000 |" << endl;
                cout << "| 4) Haier   => Price 58000 |" << endl;
                cout << "| 5) Maytag  => Price 30000 |" << endl;
                cout << "| 6) Samsung => Price 45000 |" << endl;

                cout << "Please Enter Your Choice " << endl;
                cin >> product;
                cout << "Please Enter Your Choice " << endl;
                cin >> product;
                if (product == '1')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 40000;
                }
                else if (product == '2')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin>>quantity;
                    bill = bill + quantity * 25000;
                }
                else if (product == '3')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 20000;
                }
                else if (product == '4')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 58000;
                }
                else if (product == '5')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 30000;
                }
                else if (product == '6')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 45000;
                }
                else
                {
                    cout << "You have entered the wrong Option, please try again " << endl;
                    goto Washing Mashine;
                }
            }
            if (choice == 't' || choice == 'T')
            {Television:
                cout << "__________Television______" << endl;
                cout << "| 1) Whirlpool=> Price 40000 |" << endl;
                cout << "| 2) Samsung  => Price 25000 |" << endl;
                cout << "| 3) Haier    => Price 20000 |" << endl;
                cout << "| 4) voltas   => Price 18000 |" << endl;
                cout << "| 5) Godrej   => Price 30000 |" << endl;
                cout << "| 6) Panasonic => Price 40000 |" << endl;

                cout << "Please Enter Your Choice " << endl;
                cin >> product;
                if (product == '1')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 40000;
                }
                else if (product == '2')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 25000;
                }
                else if (product == '3')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 20000;
                }
                else if (product == '4')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 18000;
                }
                else if (product == '5')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 30000;
                }
                else if (product == '6')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 35000;
                }
                else
                {
                    cout << "You have entered the wrong Option, please try again " << endl;
                    goto Television;
                }
            }
             if (choice == 'm' || choice == 'M')
            { Micro wave:
                cout << "__________Micro wave ______" << endl;
                cout << "| 1) Whirlpool=> Price 40000 |" << endl;
                cout << "| 2) Samsung  => Price 25000 |" << endl;
                cout << "| 3) Haier    => Price 20000 |" << endl;
                cout << "| 4) voltas   => Price 18000 |" << endl;
                cout << "| 5) Godrej   => Price 30000 |" << endl;
                cout << "| 6) Panasonic => Price 40000 |" << endl;

                cout << "Please Enter Your Choice " << endl;
                cin >> product;
                if (product == '1')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 40000;
                }
                else if (product == '2')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 25000;
                }
                else if (product == '3')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 20000;
                }
                else if (product == '4')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 18000;
                }
                else if (product == '5')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 30000;
                }
                else if (product == '6')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 35000;
                }
                else
                {
                    cout << "You have entered the wrong Option, please try again " << endl;
                    goto Micro wave;
                }
            }
             if (choice == 'h' || choice == 'H')
            {
                Haier Conditioner:
                cout << "__________Haier Conditioner ______" << endl;
                cout << "| 1) Whirlpool=> Price 40000 |" << endl;
                cout << "| 2) Samsung  => Price 25000 |" << endl;
                cout << "| 3) Haier    => Price 20000 |" << endl;
                cout << "| 4) voltas   => Price 18000 |" << endl;
                cout << "| 5) Godrej   => Price 30000 |" << endl;
                cout << "| 6) Panasonic => Price 40000 |" << endl;

                cout << "Please Enter Your Choice " << endl;
                cin >> product;
                if (product == '1')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 40000;
                }
                else if (product == '2')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 25000;
                }
                else if (product == '3')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 20000;
                }
                else if (product == '4')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 18000;
                }
                else if (product == '5')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 30000;
                }
                else if (product == '6')
                {
                    cout << "please Enter the Quantity of the Product " << endl;
                    cin >> quantity;
                    bill = bill + quantity * 35000;
                }
                else
                {
                    cout << "You have entered the wrong Option, please try again " << endl;
                    goto Hair Conditioner;
                }
            }


    }
    else{
        cout<<"You have Entered the wrong option,Please try again "<<endl;
        goto shop;

    }
    return bill;

    }
