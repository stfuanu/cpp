#include<iostream>
using namespace std;
class book1
{ 
	char name[20];
	int bid;
public:
	void getdata()
	{ 
		cout<<"\nBook Name  --> ";
		cin>>name;
		cout<<"\nBook id --> ";
		cin>>bid;
	}

	void putdata()
	{ 
		cout<<"\nName of the Book is "<<name;
		cout<<"\nBook ID is "<<bid;
	}
};

class book2
{ 
	char author[20],publisher[20];
public:
	void getdata()
	{ 
		cout<<"\nAuthor --> ";
		cin>>author;
		cout<<"\nPublisher --> ";
		cin>>publisher;
	}

	void showdata()
	{ 
		cout<<"\nAuthor is "<<author;
		cout<<"\nPublisher is "<<publisher;
	}
};


class book3: public book1, public book2
{ 
	int page, year;
public:
	void takeall()
	{ 
		book1::getdata();
		book2::getdata();
		cout<<"\n No. of Pages --> ";
		cin>>page;
		cout<<"\nYear of Publish --> ";
		cin>>year;
	}
	
	void show()
	{ 
		putdata();
		showdata();
		cout<<"\nTotal Pages are  "<<page;
		cout<<"\nYear of publish is "<<year;
	}
};

int main()
{ 
	book3 book[34];
	int num;
	cout<<"\nEnter the number of books : ";
	cin>>num;
	for(int i=0;i<num;i++)
	{ 
		book[i].takeall();
	}

	for(int i=0;i<num;i++)
	{ 
		book[i].show();
	}
}
