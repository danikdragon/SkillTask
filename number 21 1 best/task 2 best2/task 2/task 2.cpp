#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct plot 
{
	// размер территории
	int area;

	// начало блока с конструкциями
	const string name_constructions[4] = { "Home", "Garage", "Barn", "BathHouse" };
	enum constructions_type
	{
		HOME,
		GARAGE,
		BARN,
		BATHHOUSE
	};

	struct constructions
	{
		constructions_type construction_t;
		int area_constructions;
	} constructions_p;

	vector<constructions> construct;
	// конец блок с конструкциями

	// начало блока с комнатами
	const string name_rooms[5] = { "Bedroom", "Kitchen", "Bathroom", "Children", "Living" };
	enum room_type
	{
		BEDROOM,
		KITCHEN,
		BATHROOM,
		CHILDREN,
		LIVING
	};

	struct room
	{
		room_type room_t;
		int area_room;
	} room_p;
	//конец блока с комнатами

	struct store
	{
		vector<room> rooms;
		int ceilingHeight;
	} store_p;
	vector<store> floors;
	// печь
	bool furnace;
};

void CoutPlots(vector<plot>& plots)
{
	
	for (int i = 0; i < plots.size(); i++)
	{
		cout << "\n";
		cout << "Plot #" << i+1 << "\n";
		cout << "Area : " << plots[i].area << "\n";

		for (int j = 0; j < plots[i].construct.size(); j++)
		{
			cout << "Constructions : " << plots[i].name_constructions[plots[i].construct[j].construction_t] << "\n";
			cout << "Area construction : " << plots[i].construct[j].area_constructions << "\n";
		}

		cout << "\n";
		cout << "floor : " << plots[i].floors.size() << "\n";
		cout << "\n";

		for (int j = 0; j < plots[i].floors.size(); j++)
		{
			cout << "floor #" << j + 1 << "\n";
			cout << "ceiling height : " << plots[i].floors[j].ceilingHeight << "\n";
			cout << "\n";

			for (int k = 0; k < plots[i].floors[j].rooms.size(); k++)
			{
				cout << "Room : " << plots[i].name_rooms[ plots[i].floors[j].rooms[k].room_t] << "\n";
				cout << "Area room : " << plots[i].floors[j].rooms[k].area_room << "\n";
			}
			cout << "\n";
		}
		if (plots[i].furnace)
			cout << "furnace : " << plots[i].furnace << "\n";
	}
	cout << "\n";
}

void CinPlots(vector<plot>& plots)
{
	// 3 буфера данных
	plot plot_buffer;
	plot::constructions constructions_buffer;
	int buffer;

	// запись площади
	cout << "Area : ";
	cin >> plot_buffer.area;
	// запись количества строений
	int count = -1;
	while ( count < 1 || count > 3 )
	{
		cout << "Enter quantity construction (1-3): ";
		cin >> count;
	}
	// вывод названий строений
	cout << "\n";
	for (int i = 0; i < 4; i++)
		cout << plot_buffer.name_constructions[i] << "\n";
	cout << "\n";

	// цикл где i кол-во построек
	for (int i = 0; i < count; i++)
	{
		//запись и проверка на корректность индекса с индексом в списке
		while(true)
		{
			cout << "Enter construction #" << i + 1 << " (1-4): ";
			cin >> buffer;
			buffer--;
			if (buffer < 4)
			{
				constructions_buffer.construction_t = plot::constructions_type(buffer);
				break;
			}
			else
				cout << "Incorrect!\n";
		}
		cout << "Enter area construction :";
		cin >> constructions_buffer.area_constructions;
		plot_buffer.construct.push_back(constructions_buffer);
	}
	// этаж
	cout << "Enter floor (1-3): ";
	cin >> buffer;

	// вывод имен списка комнат
	cout << "\n";
	for (int i = 0; i < 5; i++)
		cout << plot_buffer.name_rooms[i] << "\n";
	cout << "\n";

	// запись комнат
	for (int i = 0; i < buffer; i++)
	{
		plot::store store_buffer;
		// высота потолков
		cout << "Enter ceiling height :";
		cin >> store_buffer.ceilingHeight;

		int copy_buffer_one = -1;
		while (copy_buffer_one < 0 || copy_buffer_one > 4)
		{
			cout << "Enter quantity room : ";
			cin >> copy_buffer_one;
		}

		for (int j = 0; j < copy_buffer_one; j++)
		{
			plot::room room_buffer;
			while (true)
			{
				int copy_buffer_two;
				cout << "Enter room #" << j + 1 << " (1-5): ";
				cin >> copy_buffer_two;
				copy_buffer_two--;

				if (copy_buffer_two < 5 || copy_buffer_two >= 0)
				{
					room_buffer.room_t = plot::room_type(copy_buffer_two);

					cout << "And size : ";
					cin >> room_buffer.area_room;
					break;
				}
				else
					cout << "Incorrect!\n";
			}
			store_buffer.rooms.push_back(room_buffer);
		}
		plot_buffer.floors.push_back(store_buffer);
	}
	cout << "Enter furnace (0-1): ";
	cin >> plot_buffer.furnace;
	plots.push_back(plot_buffer);
}

int main()
{
	vector<plot>plots;
	string action;
	while (action != "exit")
	{
		cout << "enter (exit - add - list) : ";
		cin >> action;
		if (action == "add")
			CinPlots(plots);
		if (action == "list")
			CoutPlots(plots);
	}
	CoutPlots(plots);
}