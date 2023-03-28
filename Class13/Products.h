#include<iostream>
using namespace std;
    
class Category
{
	int catId;
    string Catname;
    public:
    	void setCategory();
    	void showCategory();
    	
    	void setCatId();
    	int getCatId() const;
    	void displayCatName();
};
int Category::getCatId() const
{
	return catId;
}
void Category::setCatId()
{
	cout<<"\n Enter Cat Id = ";
	cin>>catId;
}
void Category::setCategory()
{
	cout<<"\n Enter Cat Name = ";
	cin>>Catname;	
}
void Category::showCategory()
{
	cout<<"\n CAT ID          = "<<catId;
	cout<<"\n CAT NAME        = "<<Catname<<endl;
}
void Category::displayCatName()
{
	cout<<"\n CAT NAME        = "<<Catname;
}


class Product
{
	int pid,catId;
    string pname;
    float price;
    public:
    	void setProduct();
    	void display();
    	void setCatId();
    	void setProdId();
    	int getProdId();
    	int getCatId() const;
};
int Product::getCatId() const
{
	return catId;
}
int Product::getProdId()
{
	return pid;
}
void Product::setCatId()
{
	cout<<"\n Enter Cat Id = ";
	cin>>catId;
}
void Product::setProdId()
{
	cout<<"\n Enter Prod Id = ";
	cin>>pid;
}
void Product::setProduct()
{
	cout<<"\n Enter Prod Name = ";
	cin>>pname;
	cout<<"\n Enter Prod price = ";
	cin>>price;
}
void Product::display()
{
	cout<<"\n PRODUCT ID      = "<<pid;
	cout<<"\n PRODUCT NAME    = "<<pname;
	cout<<"\n PRODUCT PRICE   = "<<price;
	cout<<"\n CAT ID          = "<<catId;
}
