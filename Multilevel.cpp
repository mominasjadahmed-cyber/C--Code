#include<iostream>
using namespace std;

class Store
{
    string store_name,url;
    public:
    Store(string store_name, string url)
    {
        this->store_name=store_name;
        this->url=url;
       
    }
    void displayStore()
    {
        cout<<endl<<store_name<<":"<<url;
    }
};
class Category:public Store
{
    string category_name;
    int num_products;
    public:
    Category(string category_name,int num_product,string store_name, string url):Store(store_name,url)
    {
        this->category_name=category_name;
        this->num_products=num_product;
        
        
    }
    void displayCategory()
    {
        cout<<endl<<category_name;
        cout<<endl<<num_products;
    }
};

class Product:public Category
{
    string product_name;
    double price;
    int qty;
    public:
    Product(string product_name,double price,int qty,string category_name,int num_products,string store_name, string url):Category(category_name,num_products,store_name,url)
    {
        this->product_name=product_name;
        this->price=price;
        this->qty=qty;
        cout<<endl<<"Product Constructor Called";
    }
    void displayProduct()
    {
        cout<<endl<<product_name<<":"<<price<<":"<<qty;
    }
};
int main()
{
    Product p1("Laptop", 75000, 5, "Electronics", 5, "TechStore", "www.techstore.com");
    
    p1.displayStore();
    cout<<endl<<"Store Constructor Called";
    p1.displayCategory();
    cout<<endl<<"Category Constructor Called";
    p1.displayProduct();

    return 0;
}
