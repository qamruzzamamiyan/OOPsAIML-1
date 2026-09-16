#include <bits/stdc++.h>
using namespace std;

class product {
    int productId;
    string name;
    int price ;
    public :
    product (int id,string n,int p){
        productId=id;
        name=n;
        price=p;
    }
    
    product  comparePrice(const product &p){
        if(price>p.price)
        return *this;
        else
        return p;
    }
    void display(){
        cout<<"Product ID: " << productId << endl;
         cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
	// your code goes here
product p1(101, "Laptop", 55000);
    product p2(102, "Mobile", 30000);

    
    product higher = p1.comparePrice(p2);

    cout << "Product with Higher Price:" << endl;
    higher.display();
}
