
#include <iostream>

using namespace std;

int
main ()
{
  string array[] = { "dopamine releasing group activity ", " RSS deleted ",
    " that's not enjoyed by only one", " it",
    "i am pretty sure you need a pyschiatrist ",
    " Don't read array IDIOT or you will spoil the jokes ",
    " if you laughed at this joke, ", " 'Gang rape'", " Modi joke", "- Amit shah"
  };
  string array2[] = { " person in group is "," Rahul Gandhi" , " You want listen", " ,Jail jana hai kya lavde "};


  cout << "welcome to my retarded sense of humor- Yash Shelke" << endl <<
    endl;
  cout << "You have folllowing options" << endl << endl;
  cout << "1.Dark joke" << endl;
  cout << "2.Bjp joke" << endl;
  cout << "3.Rahul gandhi joke" << endl;
  cout << "4.Modi joke " << endl<<endl;
  cout << "If you want to see Modi joke press'4' " << endl << endl;
  int x;
  for (int i = 1; i < 5; i++)
    {
      cin >> x;
      switch (x)
	{
	case 1:
	  cout << "Dark joke-" << endl;
	  cout << array[0];
	  cout << array[2];
	  cout << array2[0];
	  cout << endl;
	  cout << array[7];
	  cout << endl;
	  cout << array[6];
	  cout << array[4];
	  cout << endl << endl;
	  cout << "Treat yourself with the next joke" << endl;

	  break;
	case 2:
	  cout << "Bjp joke-";
	  cout << array[1];
	  cout << array[3];
	  cout << endl << endl;
	  cout << "Treat yourself with the next joke" << endl;

	  break;

	case 3:
	cout << " Rahul Gandhi joke-";
	cout << array2[1];
	cout << endl << endl;
	  cout << "Treat yourself with the next joke" << endl;
    break;
	
	
	case 4 :
	cout << " Modi Joke-"<<endl;
	cout << array2[2];
	cout << array[8];
	cout << array2[3];
	cout << array[9];
	cout << endl << endl;
	  
    break;
    }
}

  return 0;
}