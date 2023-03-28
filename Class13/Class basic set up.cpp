#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Category
{
	public:
		int catId;
		string catName;
		
		void setData(int id, string name);
		int getCatId();
};

void Category::setData(int id, string name){
	catId = id;
	catName = name;
}

int Category::getCatId(){
	return catId;
}

class Product
{
	public:
		int pid;
		string pname;
		double price;
		int catId;
		
		void setData(int id, string name, double inputPrice, int catId);
		double getPrice();
		void printData();
};

void Product::setData(int id, string name, double inputPrice, int catId){
	pid = id;
	pname = name;
	price = inputPrice;
	catId = catId;
}

double Product::getPrice(){
	return price;
}

void Product::printData(){
	cout<<"Product id: "<<pid<<" Product Name: "<<pname<<" Product Price: $"<<price<<" Category ID: "<<catId<<endl;
}

vector<Category> categoryList;
vector<Product> productList;

int main()
{
	Product *temp = new Product();
	Category tempCategory;
	int inputID;
	string inputName;
	double inputPrice;
	int inputCatId;
	
	tempCategory.setData(1, "Car");
	categoryList.push_back(tempCategory);
	
	//categoryList(0)->setData(1, "Car");
	
	//categoryList(1)->setData(3, "Plumbing");
	
	categoryList(2) = new Category();
	categoryList(2).setData(6, "Cutlery");
	
	categoryList(3) = new Category();
	categoryList(3).setData(17, "Food");
	
	
	for(int i=0; i<productList.size(); i++){
		cout<<"Create a new product :"<<endl;
		cout<<"Input product ID"<<endl;
		cin>>inputID
		cout<<"Input product name"<<endl;
		cin>>inputName
		cout<<"Input price for product"<<endl;
		cin>>inputPrice
		cout<<"Input category ID for product"<<endl;
		cin>>inputCatId
		
		temp.setData(inputID, inputName, inputPrice, inputCatId);
		productList(i) = temp;
	}
	
	for(int i=0; i<productList.size(); i++){
		productList(i).printData();
	}
	
}


