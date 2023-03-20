#include <iostream>
using namespace std;
int main()
{
    int order, no_deal;
    cout << "|* --------------------------MENU---------------------------*|" << endl;
    cout << endl;
    cout << "(1) Chicken Biryani                  $2 only." << endl;
    cout << "(2) Chicken palao                     $1.5 only." << endl;
    cout << "(3) Chinese Rice                        $2.5 only." << endl;
    cout << "(4) Chicken Burgar                      $1 only." << endl;
    cout << "(5) Nawabi Pizza                         $4.5 only." << endl;
    cout << "(6) 2.5 Litre Coke                        $1.75 only." << endl;
    cout << endl;
    cout << "Please select the order number: ";
    cin >> order;
    cout << "Please enter the number of deals :";
    cin >> no_deal;
    cout << endl;
    switch (order)
    {
    case 1:
        cout << "Order : Chicken Biryani. " << endl;
        cout << "Number of deals : " << no_deal << endl;
        cout << "Price of each deal: $2 only." << endl;
        cout << "Total price : "<< "$" << 2 * no_deal << " " << "only." << endl;
           
            
        cout << endl;
        cout << "~-------------THANK YOU FOR COMING-----------~" << endl;
        break;
    case 2:
        cout << "Order Chicken palao. " << endl;
        cout << "Number of deals : " << no_deal << endl;
        cout << "Price of each deal : $1.5 only." << endl;
        cout << "Total price : "
             << "$" << 1.5 * no_deal << " "
             << "only." << endl;
        cout << endl;
        cout << "~-------------------THANK YOU FOR COMING--------------------~" << endl;
        break;
    case 3:
        cout << "Order : Chinese Rice. " << endl;
        cout << "Number of deals : " << no_deal << endl;
        cout << "Price of each deal: $2.5 only." << endl;
        cout << "Total price  : "
             << "$" << 2.5 * no_deal << " "
             << "only." << endl;
        cout << endl;
        cout << "~-------------- THANK YOU FOR COMING-------------------~" << endl;
        break;
    case 4:
        cout << "Order : Chiken Burgar." << endl;
        cout << "Number of deals : " << no_deal << endl;
        cout << "Price of each deal : $1 only." << endl;
        cout << "Total price : "
             << "$" << 1 * no_deal << " "
             << "only." << endl;
        cout << endl;
        cout << "~---------------THANK YOU FOR COMING----------------~" << endl;
        break;
    case 5:
        cout << "Order : Nawab Pixxa ." << endl;
        cout << "Number of deals : " << no_deal << endl;
        cout << "Price of each deal: $4.5 only." << endl;
        cout << "Total price : "
             << "$" << 4.5 * no_deal << " "
             << "only." << endl;
        cout << endl;
        cout << "~----------------THANK YOU FOR COMING--------------~" << endl;
        break;
    case 6:
        cout << "Order : 2.5Litre Coke." << endl;
        cout << "Number of deals :" << no_deal <<endl;
        
            cout << "Price of each deal : $1.75 only." << endl;
        cout << "Total price : "
             << "$" << 1.75 * no_deal << " "
             << "only." << endl;
        cout << endl;
        cout << "~---------------THANK YOU FOR COMING-------------------" << endl;
        break;
    }
    return 0;
}