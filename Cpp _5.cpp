// Name    : Sameer Yasin
// PRN     : 24070123092
// Division: B1
// Experiment: 12
// Program-5

#include<iostream>
using namespace std;

class Book {
    string b_name;
    string b_auth;
    float price;

    public:
    Book(string b, string a, float p) {
        b_name = b;
        b_auth = a;
        price = p;
    }

    Book(const Book &b) {
        b_name = b.b_name;
        b_auth = b.b_auth;
        price = b.price;
        cout << "Copy constructor is called!" << endl;
    }

    void display() {
        cout << "Book Name: " << b_name << endl
             << "Book Author: " << b_auth << endl
             << "Price: " << price << endl;
    }
};

int main() {
    string bname, bauth;
    float bprice;

    cout << "Enter Book Name: ";
    cin >> bname;

    cout << "Enter Book Author: ";
    cin >> bauth;

    cout << "Enter Book Price: ";
    cin >> bprice;

    Book b1(bname, bauth, bprice);

    b1.display();
    cout << endl;

    Book b2 = b1;
    b2.display();

    return 0;
}

/*==========OUTPUTS==========
Enter Book Name: Ikigai
Enter Book Author: Hector-Garcia
Enter Book Price: 900
Book Name: Ikigai
Book Author: Hector-Garcia
Price: 900

Copy constructor is called!
Book Name: Ikigai
Book Author: Hector-Garcia
Price: 900
*/
