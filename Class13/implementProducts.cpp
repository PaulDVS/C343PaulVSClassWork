#include<iostream>
#include<vector>
#include "Products.h"
using namespace std;

int main()
{
	int ch,i,j,flagProd;
	vector<Category> c;
	vector<Product> p;
	Category cobj;
	Product pobj;
	do
	{
		cout<<"\n 1 Add Category "<<endl;
		cout<<"\n 2 Add Products "<<endl;
		cout<<"\n 3 Display Products "<<endl;
		cout<<"\n 4 Display Categories "<<endl;
		cout<<"\n 5 Exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: do
					{
						cobj.setCatId();
						for( i=0;i<c.size();i++)
						{
							if(c.at(i).getCatId() == cobj.getCatId())
							{
								cout<<"\n Error!! The id exists \n";
								break;
							}
						}	
					}while(i<c.size());
					cobj.setCategory();
					c.push_back(cobj);						
			       break;
			
			case 2: if(c.size()==0)
					{
						cout<<"\n Add the category! as its empty \n";
						cobj.setCatId();
						cobj.setCategory();
						c.push_back(cobj);
					}
			
			
			
					 do
					{
						flagProd=0;
						pobj.setCatId();
						for( i=0;i<c.size();i++)
						{
							
							if(c.at(i).getCatId() == pobj.getCatId())
							{
								flagProd=1;
								break;
							}
						}	
					}while(flagProd==0);
					do
					{
						pobj.setProdId();
						for( i=0;i<p.size();i++)
						{
							if(p.at(i).getProdId() == pobj.getProdId())
							{
								cout<<"\nError! Pid exists\n";
								break;
							}
						}	
					}while(i<p.size());
					pobj.setProduct();
					p.push_back(pobj);
					break;
			case 3:for(i=0;i<p.size();i++)
					{
						p.at(i).display();
						
						for( j=0;j<c.size();j++)
						{
							if(c.at(j).getCatId() == p.at(i).getCatId())
							{
								c.at(j).displayCatName();
								cout<<endl;
								break;
							}
						}
						
						cout<<endl;
					}	
					break;
			case 4:for(i=0;i<c.size();i++)
					{
						
						c.at(i).showCategory();
						cout<<endl;
					}
					break;
					
			case 5:break;
			
		}
	}while(ch!=5);
}
