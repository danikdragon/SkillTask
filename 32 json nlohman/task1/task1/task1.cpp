#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "nlohmann/json.hpp"

using namespace std;

struct Movie
{
	string name;
	string country;
	string creationDate;
	string studio;
	string author;
	string director;
	string producer;
	vector<string> character;
	vector<string> actor;
};

int main()
{
	//1 и 2 задание в одном
	//создание кинолент
	Movie movies[5];
	//кинолента 1
	movies[0].name = "The Matrix";
	movies[0].country = "USA";
	movies[0].creationDate = "1999-03-31";
	movies[0].studio = "Warner Bros.";
	movies[0].author = "Lana Wachowski";
	movies[0].director = "Lana Wachowski";
	movies[0].producer = "Joel Silver";
	movies[0].character.push_back("Neo");
	movies[0].actor.push_back("for find test");
	//кинолента 2
	movies[1].name = "The Lord of the Rings: The Fellowship of the Ring";
	movies[1].country = "New Zealand";
	movies[1].creationDate = "2001-12-10";
	movies[1].studio = "New Line Cinema";
	movies[1].author = "J.R.R. Tolkien";
	movies[1].director = "Peter Jackson";
	movies[1].producer = "Peter Jackson";
	movies[1].character.push_back("Frodo Baggins");
	movies[1].character.push_back("Gandalf");
	movies[1].character.push_back("Aragorn");
	movies[1].actor.push_back("Elijah Wood");
	movies[1].actor.push_back("for find test");
	movies[1].actor.push_back("Viggo Mortensen");
	//кинолента 3
	movies[2].name = "Inception";
	movies[2].country = "USA";
	movies[2].creationDate = "2010-07-16";
	movies[2].studio = "Warner Bros.";
	movies[2].author = "Christopher Nolan";
	movies[2].director = "Christopher Nolan";
	movies[2].producer = "Emma Thomas";
	movies[2].character.push_back("Cobb");
	movies[2].character.push_back("Ariadne");
	movies[2].character.push_back("Arthur");
	movies[2].actor.push_back("Leonardo DiCaprio");
	movies[2].actor.push_back("Ellen Page");
	movies[2].actor.push_back("Joseph Gordon-Levitt");
	//кинолента 4
	movies[3].name = "Pulp Fiction";
	movies[3].country = "USA";
	movies[3].creationDate = "1994-10-14";
	movies[3].studio = "Miramax Films";
	movies[3].author = "Quentin Tarantino";
	movies[3].director = "Quentin Tarantino";
	movies[3].producer = "Lawrence Bender";
	//кинолента 5
	movies[4].name = "The Shawshank Redemption";
	movies[4].author = "Stephen King";
	movies[4].director = "Frank Darabont";
	movies[4].producer = "Niki Marvin";
	movies[4].character.push_back("Tim Robbins");
	movies[4].actor.push_back("for find test");
	
	//добавление всего в json
	ofstream w_file("films.json", ios::trunc);
	nlohmann::json Jfile;

	for (int i = 0; i < 5; i++)
	{
		Jfile.push_back(
		{
			{"name", movies[i].name},
			{"country", movies[i].country },
			{ "creationDate", movies[i].creationDate },
			{ "studio", movies[i].studio },
			{ "author", movies[i].author },
			{ "director", movies[i].director },
			{ "producer", movies[i].producer },
			{ "character", movies[i].character },
			{ "actor", movies[i].actor }
		});
	}
	w_file << Jfile.dump(4); // дамп для отступа, в 4 пробела
	Jfile.clear();
	w_file.close();

	//считка и работа с данными
	vector<Movie> movie;
	ifstream r_file("films.json");
	r_file >> Jfile;
	for (int i = 0; i < Jfile.size(); i++)
	{
		Movie temp;
		temp.name = Jfile[i]["name"];
		temp.character = Jfile[i]["character"];
		temp.actor = Jfile[i]["actor"];
		movie.push_back(temp);
	}

	string temp;
	while(temp != "exit")
	{
		cout << "Enter name actor\n";
		getline(cin,temp);
		for (int i = 0; i < movie.size(); i++)
		{
			for (int j = 0; j < movie[i].actor.size(); j++)
			{
				if (temp == movie[i].actor[j])
				{
					cout << "Movie : " << movie[i].name << "\n";
					cout << "Character : " << movie[i].character[j] << "\n";
					cout << "\n";
					break;
				}
			}
		}
	}
	r_file.close();
}