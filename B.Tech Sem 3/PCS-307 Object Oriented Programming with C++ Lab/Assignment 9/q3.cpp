#include <iostream>

using namespace std;

class Product
{
private:
    string Pid;
    string Pname;
    float Pcostprice;
    float Psellingprice;
    float Margin;
    string Remarks;
    void SetRemarks()
    {
        Margin = Psellingprice - Pcostprice;
        if (Margin > 0)
            Remarks = 'Profit';
        else
            Remarks = 'Loss';
    }

public:
    void Getdetails(string id, string name, float cost, float selling)
    {
        Pid = id;
        Pname = name;
        Pcostprice = cost;
        Psellingprice = selling;
        SetRemarks();
    }
    void SetDetails()
    {
        cout << "    ID: " << Pid << endl;
        cout << "    Name: " << Pname<< endl;
        cout << "    Cost Price: " << Pcostprice<< endl;
        cout << "    Selling Price: " << Psellingprice<< endl;
        cout << "    Margin: " << Margin << endl;
        cout << "    Remarks: " << Remarks << endl;
    }
};

int main(int argc, char const *argv[])
{
    Product products[5];
    string id, name;
    float cost, selling;

    for (size_t i = 0; i < 5; i++)
    {
        cout << "For Product " << i << ": " << endl;
        cout << "    ID: " ;
        cin >> id;
        cout << "    Name: ";
        cin >> name;
        cout << "    Cost Price: ";
        cin >> cost;
        cout << "    Selling Price: ";
        cin >> selling;
        products[i].Getdetails(id, name, cost, selling);
    }


    for (size_t i = 0; i < 5; i++)
    {
        cout << "For Product " << i << ": " << endl;
        products[i].SetDetails();
    }
    
    
    return 0;
}
