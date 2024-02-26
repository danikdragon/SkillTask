#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Home
{
public:
	void setName()
	{
		string names[6] = {"Andrew", "Katya", "Jho", "Daniil", "Artem", "None"};
		name = names[rand()%6];
	}
	string getName()
	{
		return name;
	}
protected:
	string name = "None";
};

class Tree:public Home
{
public:
	vector<int> findElf(string name)
	{
		vector<int> needBranch;
		for (int i = 0; i < child.size(); i++)
		{
			if (child[i]->getName() == name)
			{
				needBranch.push_back(i);
				break;
			}
			for (int j = 0; j < child[i]->getChild().size(); j++)
			{
				if (child[i]->getChild()[j]->getName() == name)
				{
					needBranch.push_back(i);
					break;
				}
			}
		}
		return needBranch;
	}
	void printNeedBrach(vector<int> bigBranch)
	{
		for (int j = 0; j < bigBranch.size(); j++)
		{
			cout << "Big branch " << child[j]->getName() << "\n";
			for (int i = 0; i < child[j]->getChild().size(); i++)
			{
				cout << "Middle branch " << child[j]->getChild()[i]->getName() << "\n";
			}
		}
		if (bigBranch.size() == 0)
			cout << "Not find!\n";
	}
	void createTree(Tree* thisTree = nullptr)
	{
		for (int i = 0; i < (rand() % 3) + 3; i++)
		{
			child.push_back(createBranch(thisTree));

			for (int j = (rand() % 2) + 2; j > 0; j--)
			{
				child[i]->addChild(createBranch(child[i]));
			}
		}
	}
	Tree* createBranch(Tree* parent = nullptr)
	{
		Tree* temp = new Tree;
		temp->setName();
		temp->setParent(parent);
		if(parent->getParent() == nullptr)
			cout << "Big branch: " << temp->getName() << "\n";
		else
			cout << "Middle branch: " << temp->getName() << "\n";
		return temp;
	}

	void setParent(Tree* parent = nullptr)
	{
		this->parent = parent;
	}
	Tree* getParent()
	{
		return parent;
	}

	void addChild(Tree* branch)
	{
		child.push_back(branch);
	}
	vector<Tree*> getChild()
	{
		return child;
	}

private:
	Tree* parent = nullptr;
	vector<Tree*> child;
};
int main()
{
	Tree village[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Tree number: " << i + 1 << "\n";
		village[i].createTree(&village[i]);
		cout << "\n";
	}
	string buffer;
	while (buffer != "exit")
	{
		cout << "Enter name to search: ";
		cin >> buffer;
		for (int i = 0; i < 5; i++)
		{
			cout << "Tree number: " << i + 1 << "\n";
			village[i].printNeedBrach(village[i].findElf(buffer));
		}
	}
}