#include <bits/stdc++.h>
using namespace std;
class CodeLearn {
public:
CodeLearn()
{/* TODO (Trong_Kha#1#): declared function of class CodeLearn{} */
	cout<<"Code Learn"<<endl;
}
};
typedef CodeLearn CL;// declared name of class;
struct codelearn {
	
void printf()
{
	/* TODO (Trong_Kha#2#): in struct codelearn you can see how to use 
	type of data - void printf() like class */
	cout<<"code learn"<<endl;
}
};
typedef codelearn cl;// declared name of struct;
int main()
{
	CL CL1;// call the object of class CodeLearn
	cl cl1;// call the object of struct codelearn.
	cl1.printf();// call the function of struct codelearn.
 return 0;
 }
