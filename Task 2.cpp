#include<iostream>
#include<list>
using namespace std;
void sort(list<int>& list)
{
	list.sort();
}
void print(list<int>& list)
{
	for (auto sortedlist : list)
	{
		cout << sortedlist << " ";
	}
	cout<< endl;
}
void merge(list<int>& list1 , list<int>& list2 , list<int>& merged_list)
{
  for(auto list1_elem : list1)
  {
	merged_list.push_back(list1_elem);
  }
  for(auto list2_elem : list2)
  {
	merged_list.push_back(list2_elem);
  }

}
int main()
{
	list<int>list1 = { 3,6,2,5,1,8,4,5 };
	list<int>list2 = {2,6,35,59,42,81,79,};
	list<int>merged_list;
	sort(list1);
	cout<<"Sorted List 1 = ";
	print(list1);
	sort(list2);
	cout<<"Sorted LIst 2 = ";
	print(list2);
    merge(list1,list2,merged_list);
	cout<<"Merged List = ";
	print(merged_list);
	sort(merged_list);
	cout<<"Sorted Merge List = ";
	print(merged_list);
	return 0;

}
