#include "Geometric_Figures.h"


/// /////////////////////////////////////////////////////////////////////////

void ALL::Getname()const {} //виведення ім'я 

double ALL::Get_and_Modify_length() const {
	return 0;
}//виведення довжини 

void ALL::Set_length(double Value) {} //зміна довжини 

double ALL::Get_and_Modify_radius() const//виведення радіусу 
{
	return 0;
}
void ALL::Set_radius(double Value) {} //зміна радусу 

double ALL::Get_and_Modify_Circumscribed_radius() const//виведення радусу описаного кола 
{
	return 0;
}
void ALL::Set_Circumscribed_radius(double Value) {}//зміна радусу описаного кола

double ALL::Get_Num_of_Sides() const//виведення кількості сторін (ребер)
{
	return 0;
}
double ALL::Get_Num_of_Vertices() const//виведення кількості вершин 
{
	return 0;
}
double ALL::Square() const//площа 
{	
	return 0;
}
//double ALL::Perimeter()const
//{
//	//perimeter = value;
//
//	//cout << "Perimeter : " << perimeter << endl;
//	/*if (perimeter == NULL)
//		return Null_Exception::NULLP;*/
//
//	return 0;
//}



void ALL::Print_all_Data() const {}

//////////////////////////////////////////////////////////////////////////////////////////

//об'єм
double Three_Dimensional_Figures::Volume() const
{
	return 0;
}

//зміна радусу 
void Three_Dimensional_Figures::Set_Volume(double Value) {}

//виведення кількості граней
int Three_Dimensional_Figures::Get_Num_of_Faces() const 
{
	/*cout << "Num of Faces : " << Num_of_Faces << endl;
	if (Num_of_Faces == NULL)
		return Null_Exception::NULLP;*/

	return 0;
}

//виведення кількості граней суміжних з вершиною
int Three_Dimensional_Figures::Get_Num_of_Faces_adjacent_to_vertex() const 
{
	/*cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	if (Num_of_Faces_adjacent_to_vertex == NULL)
		return Null_Exception::NULLP;*/

	return 0;
}

//виведення кількості сторін у грані
int Three_Dimensional_Figures::Get_Num_of_Sides_in_Fase() const 
{
	return 0;
}

void Three_Dimensional_Figures::Print_all(Flat_Figures *all)
{
	all->Print_all_Data();
	cout << "-------------------------------------------" << endl;
}

void Three_Dimensional_Figures::Print_Facet() const {};

void Three_Dimensional_Figures::Print_all_Data() const
{
	Getname();
	//cout << "Name : " << Getname() << endl;
	Get_and_Modify_length();
	//cout << "Length : " << length << endl;
	//cout << "Radius : " << radius << endl;
	Get_and_Modify_radius();
	//cout << "Circumscribed radius : " << Circumscribed_radius << endl;
	Get_and_Modify_Circumscribed_radius();
	//cout << "Num of Sides : " << Num_of_Sides << endl;
	Get_Num_of_Sides();
	//cout << "Number of Vertices : " << Number_of_Vertices << endl;
	Get_Num_of_Vertices();
	//if (Num_of_Faces != NULL)cout << "Num of Faces : " << Num_of_Faces << endl;
	Get_Num_of_Faces();
	Get_Num_of_Sides_in_Fase();
	//if (Num_of_Faces_adjacent_to_vertex != NULL)cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	Get_Num_of_Faces_adjacent_to_vertex();
	//cout << "Get Num of Sides in Fase : " << Num_of_Sides << endl;
	//cout << "Square : " << square  << endl;
	Square();
	//if(perimeter != NULL)cout << "Perimeter : " << perimeter  << endl;
	//Perimeter();
	//if (volume != NULL)cout << "Volume : " << volume << "\n" << endl;
	Volume();
	cout << "--------------------------------------------" << endl;
	Print_Facet();
}



//void Three_Dimensional_Figures::Get_flat_Figure(int staus)//виведення грані об'ємної фігури
//{
//
//	cout << "-------------------------------------------" << endl;
//	switch (staus)
//	{
//	case Status_of_3Dfigure::TRIANGLE:
//	{
//		Triangle trian(this->length);
//		trian.Print_all_Data();
//	}
//	break;
//	case Status_of_3Dfigure::SQUARE_F:
//	{
//		Square_F square_f(this->length);
//		square_f.Print_all_Data();
//	}
//	break;
//	case Status_of_3Dfigure::PENTAGON:
//	{
//		Pentagon pentagon(this->length);
//		pentagon.Print_all_Data();
//	}
//	break;
//	default:
//		break;
//	}
//	cout << "-------------------------------------------" << endl;
//}
///////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////
double Flat_Figures ::Perimeter() const
{
	//perimeter = value;
	
	//cout << "Perimeter : " << perimeter << endl;
	/*if (perimeter == NULL)
		return Null_Exception::NULLP;*/

	return 0;
}

void Flat_Figures::Print_all_Data() const
{
	Getname();
	//cout << "Name : " << Getname() << endl;
	Get_and_Modify_length();
	//cout << "Length : " << length << endl;
	//cout << "Radius : " << radius << endl;
	Get_and_Modify_radius();
	//cout << "Circumscribed radius : " << Circumscribed_radius << endl;
	Get_and_Modify_Circumscribed_radius();
	//cout << "Num of Sides : " << Num_of_Sides << endl;
	Get_Num_of_Sides();
	//cout << "Number of Vertices : " << Number_of_Vertices << endl;
	Get_Num_of_Vertices();
	//if (Num_of_Faces != NULL)cout << "Num of Faces : " << Num_of_Faces << endl;
	//if (Num_of_Faces_adjacent_to_vertex != NULL)cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	//cout << "Get Num of Sides in Fase : " << Num_of_Sides << endl;
	//cout << "Square : " << square  << endl;
	Square();
	//if(perimeter != NULL)cout << "Perimeter : " << perimeter  << endl;
	Perimeter();
	//if (volume != NULL)cout << "Volume : " << volume << "\n" << endl;
}


//////////////////////////////////////////////////////////////////////////////////////////
//трикутник


Triangle::Triangle(double value) 
{
	//string name = "Triangle";
	
	/*ALL all;
	Triangle tr;*/
	Length = value;
	
	/*ALL *All = & tr;
	tr.Get_and_Modify_length(Length);*/
	// Triangle tr(Length);

	//ALL all;
	//Triangle tr(length);
	//All.Get_and_Modify_length(&tr);

	/*Triangle tr(length);
	ALL* All = &tr;
	tr.Get_and_Modify_length(tr);*/

	//radius = value / (2 * sqrt(3));
	//Circumscribed_radius = value / sqrt(3);
	//Num_of_Sides = 3;
	//Number_of_Vertices = 3;
	//double perimeter = Length * Num_of_Sides;
	//Perimeter(perimeter);
	/*double square = (Length * Length * sqrt(3)) / 4;
	Square(square);*/

}



Triangle::Triangle(const Triangle& other)
{
	this->Length = other.Length;
}
void Triangle::Getname() const
{
	cout  << "Name :" << "Triangle" << endl;
}
double Triangle::Get_and_Modify_length() const//виведення довжини 
{
	cout <<"Length : " << Length << endl;
	return Length;
}
double Triangle::Get_and_Modify_radius() const
{
	double R = Radius;
	R = Length / (2 * sqrt(3));
	cout << "Radius : " << R << endl;
	return R;
}
void Triangle::Set_radius(double Value) 
{
	Radius = Value;
}

double Triangle::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = Length / sqrt(3);
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Triangle::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}

double Triangle::Get_Num_of_Sides() const
{
	int Num_of_Sides = 3;
	cout << "Num of Sides : " << Num_of_Sides << endl;
	return Num_of_Sides;
}

double Triangle::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 3;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}

double Triangle::Square() const
{
	double square = (Length * Length * sqrt(3)) / 4;
	cout << "Square : " << square << endl;
	return square;
}

double Triangle::Perimeter() const
{
	int Num_of_Sides = 3;
	double perimeter = Length * Num_of_Sides;
	cout << "Perimeter : " << perimeter << endl;
	if (perimeter == NULL)
		return Null_Exception::NULLP;
	return perimeter;

}

void Triangle::Set_length(double Value)
{
	Length = Value;

}



//квадрат
Square_F::Square_F(double value)
{
	//name = "Square";
	Length = value;
	//radius = value / 2;
	//Circumscribed_radius = value / sqrt(2);
	//Num_of_Sides = 4;
	//Number_of_Vertices = 4;

	//double perimeter = length * Num_of_Sides;
	//Perimeter(perimeter);
	//double square = length * length;
	//Square(square);


}

void Square_F::Getname() const
{
	cout << "Name :" << "Square" << endl;
}
double Square_F::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Square_F::Get_and_Modify_radius() const
{
	double R = Radius;
	R = Length / 2;
	cout << "Radius : " << R << endl;
	return R;
}
void Square_F::Set_radius(double Value)
{
	Radius = Value;
}

double Square_F::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = Length / sqrt(2);
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Square_F::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}

double Square_F::Get_Num_of_Sides() const
{
	int Num_of_Sides = 4;
	cout << "Num of Sides : " << Num_of_Sides << endl;
	return Num_of_Sides;
}

double Square_F::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 4;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}

double Square_F::Square() const
{
	double square = Length * Length ;
	cout << "Square : " << square << endl;
	return square;
}

double Square_F::Perimeter() const
{
	int Num_of_Sides = 4;
	double perimeter = Length * Num_of_Sides;
	cout << "Perimeter : " << perimeter << endl;
	if (perimeter == NULL)
		return Null_Exception::NULLP;
	return perimeter;

}

void Square_F::Set_length(double Value)
{
	Length = Value;

}


//п'ятикутник
Pentagon::Pentagon(double value)
{
	//name = "Pentagon";
	Length = value;
	//radius = ((sqrt(5) * sqrt(5 + (2 * sqrt(5)))) / 10) * value;
	//Circumscribed_radius = ((sqrt(10) * sqrt(5 + sqrt(5))) / 10) * value;
	//Num_of_Sides = 5;
	//Number_of_Vertices = 5;
	//double perimeter = length * Num_of_Sides;
	//Perimeter(perimeter);
	//double square = (Num_of_Sides * pow(length, 2)) / (4 * tan(180 / Num_of_Sides));
	//Square(square);
	

}

void Pentagon::Getname() const
{
	cout << "Name :" << "Pentagon" << endl;
}
double Pentagon::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Pentagon::Get_and_Modify_radius() const
{
	double R = Radius;
	R = ((sqrt(5) * sqrt(5 + (2 * sqrt(5)))) / 10) * Length;
	cout << "Radius : " << R << endl;
	return R;
}
void Pentagon::Set_radius(double Value)
{
	Radius = Value;
}

double Pentagon::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = ((sqrt(10) * sqrt(5 + sqrt(5))) / 10) * Length;
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Pentagon::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}

double Pentagon::Get_Num_of_Sides() const
{
	int Num_of_Sides = 5;
	cout << "Num of Sides : " << Num_of_Sides << endl;
	return Num_of_Sides;
}

double Pentagon::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 5;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}

double Pentagon::Square() const
{
	int Num_of_Sides = 5;
	double square = (Num_of_Sides * pow(Length, 2)) / (4 * tan(180 / Num_of_Sides));
	cout << "Square : " << square << endl;
	return square;
}

double Pentagon::Perimeter() const
{
	int Num_of_Sides = 5;
	double perimeter = Length * Num_of_Sides;
	cout << "Perimeter : " << perimeter << endl;
	if (perimeter == NULL)
		return Null_Exception::NULLP;
	return perimeter;

}

void Pentagon::Set_length(double Value)
{
	Length = Value;

}


//шестикутник
Hexagon::Hexagon(double value)
{
	//name = "Hexagon";
	Length = value;
	//radius = (sqrt(3) / 2) * value;
	//Circumscribed_radius = value / 2;
	//Num_of_Sides = 6;
	//Number_of_Vertices = 6;
	//double perimeter = length * Num_of_Sides;
	//Perimeter(perimeter);
	//double square = (Num_of_Sides * pow(length, 2)) / (4 * tan(180 / Num_of_Sides));
	//Square(square);
	
}

void Hexagon::Getname() const
{
	cout << "Name :" << "Hexagon" << endl;
}
double Hexagon::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Hexagon::Get_and_Modify_radius() const
{
	double R = Radius;
	R = (sqrt(3) / 2) * Length;
	cout << "Radius : " << R << endl;
	return R;
}
void Hexagon::Set_radius(double Value)
{
	Radius = Value;
}

double Hexagon::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = Length / 2;;
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Hexagon::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}

double Hexagon::Get_Num_of_Sides() const
{
	int Num_of_Sides = 6;
	cout << "Num of Sides : " << Num_of_Sides << endl;
	return Num_of_Sides;
}

double Hexagon::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 6;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}

double Hexagon::Square() const
{
	int Num_of_Sides = 6;
	double square = (Num_of_Sides * pow(Length, 2)) / (4 * tan(180 / Num_of_Sides));
	cout << "Square : " << square << endl;
	return square;
}

double Hexagon::Perimeter() const
{
	int Num_of_Sides = 6;
	double perimeter = Length * Num_of_Sides;
	cout << "Perimeter : " << perimeter << endl;
	if (perimeter == NULL)
		return Null_Exception::NULLP;
	return perimeter;

}

void Hexagon::Set_length(double Value)
{
	Length = Value;

}





//коло
Circle::Circle(double value)
{
	//name = "Sphere";
	//length = 0;
	Radius = value;
	//Circumscribed_radius = value;
	//Num_of_Sides = 0;
	//Number_of_Vertices = 0;
	//Num_of_Faces = 0;
	//Num_of_Faces_adjacent_to_vertex = 0;
	//double square = (4 * 3, 14 * pow(Radius, 2));
	//Square(square);

	//double volume = (4 * 3, 14 * pow(Radius, 3)) / 3;
	//Volume(volume);
	//Get_flat_Figure(Status_of_3Dfigure::TRIANGLE);

}


void Circle::Getname() const
{
	cout << "Name :" << "Circle" << endl;
}
double Circle::Get_and_Modify_length() const//виведення довжини 
{
	double length = (2 * 3, 14 * Radius);
	cout << "Length : " << length << endl;
	return length;
}
double Circle::Get_and_Modify_radius() const
{
	double R = Radius;
	cout << "Radius : " << R << endl;
	return R;
}
void Circle::Set_radius(double Value)
{
	Radius = Value;
}

double Circle::Get_and_Modify_Circumscribed_radius() const
{
	return 0;
}
void Circle::Set_Circumscribed_radius(double Value)
{
}

double Circle::Get_Num_of_Sides() const
{
	return 0;
}

double Circle::Get_Num_of_Vertices() const
{
	return 0;
}

double Circle::Square() const
{
	double square = (4 * 3, 14 * pow(Radius, 2));
	cout << "Square : " << square << endl;
	return square;
}

double Circle::Perimeter() const
{
	return 0;

}

void Circle::Set_length(double Value)
{
	Length = Value;

}





///////////////////////////////////////////////////////////////////////////////////////////////////

//тетраедр
Tetrahedron::Tetrahedron(double value)
{
	//string name = "Tetrahedron";
	Length = value;
	//length = value;
	//radius = value / (2 * sqrt(6));
	//Circumscribed_radius = (value * sqrt(6)) / 4;
	//Num_of_Sides = 3;
	//Number_of_Vertices = 4;
	//Num_of_Faces = 4;
	//Num_of_Faces_adjacent_to_vertex = 3;
	//double square = ((length * length * sqrt(3)) / 4) * Num_of_Faces;
	//Square(square);
	
	//double volume = (pow(length, 3) * 2) / 12;
	//Volume(volume);

	//Get_flat_Figure(Status_of_3Dfigure::TRIANGLE);
	/*Triangle tr(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&tr);*/
}

void Tetrahedron::Getname() const
{
	cout << "Name :" << "Tetrahedron" << endl;
}
double Tetrahedron::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Tetrahedron::Get_and_Modify_radius() const
{
	double R = Radius;
	R = Length  / (2 * sqrt(6));
	cout << "Radius : " << R << endl;
	return R;
}
void Tetrahedron::Set_radius(double Value)
{
	Radius = Value;
}
double Tetrahedron::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = (Length * sqrt(6)) / 4;
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Tetrahedron::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}
double Tetrahedron::Get_Num_of_Sides() const
{
	int Num_of_Sides = 6;
	cout << "Num of Sides(Edges) : " << Num_of_Sides << endl;
	return Num_of_Sides;
}
double Tetrahedron::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 4;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}
int Tetrahedron::Get_Num_of_Faces() const
{
	int Num_of_Faces = 4;
	cout << "Num of Faces : " << Num_of_Faces << endl;
	if (Num_of_Faces == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces;
}

int Tetrahedron::Get_Num_of_Sides_in_Fase() const
{
	int Get_Num_of_Sides_in_Fase = 3;
	cout << "Get Num of Sides in Fase : " << Get_Num_of_Sides_in_Fase << endl;
	return Get_Num_of_Sides_in_Fase;
}
int Tetrahedron::Get_Num_of_Faces_adjacent_to_vertex() const
{
	int Num_of_Faces_adjacent_to_vertex = 3;
	cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	if (Num_of_Faces_adjacent_to_vertex == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces_adjacent_to_vertex;
}

double Tetrahedron::Square() const
{
	double square = ((Length * Length * sqrt(3)) / 4) * 4;
	cout << "Square : " << square << endl;
	return square;
}
double Tetrahedron::Volume() const
{
	double V = volume;
	 V = (pow(Length, 3) * 2) / 12;
	 cout << "Volume : " << V << endl;

	//if (volume == NULL)
	//	return Null_Exception::NULLP;

	return V;
}
void Tetrahedron::Set_Volume(double Value)
{
	volume = Value;
}

void Tetrahedron::Set_length(double Value)
{
	Length = Value;

}

void Tetrahedron::Print_Facet() const
{
	Triangle tr(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&tr);
}



//гексаедр
Hexahedron::Hexahedron(double value)
{
	//name = "Hexahedron";
	Length = value;
	//radius = value / 2;
	//Circumscribed_radius = (sqrt(3) * value) / 2;
	//Num_of_Sides = 4;
	//Number_of_Vertices = 8;
	//Num_of_Faces = 6;
	//Num_of_Faces_adjacent_to_vertex = 3;
	//double square = (length * length) * Num_of_Faces;
	//Square(square);
	
	//double volume = pow(length, 3);
	//Volume(volume);
	//Get_flat_Figure(Status_of_3Dfigure::SQUARE_F);

	Square_F Sq(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&Sq);

}


void Hexahedron::Getname() const
{
	cout << "Name :" << "Hexahedron" << endl;
}
double Hexahedron::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Hexahedron::Get_and_Modify_radius() const
{
	double R = Radius;
	R = Length / 2;
	cout << "Radius : " << R << endl;
	return R;
}
void Hexahedron::Set_radius(double Value)
{
	Radius = Value;
}
double Hexahedron::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = (sqrt(3) * Length) / 2;
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Hexahedron::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}
double Hexahedron::Get_Num_of_Sides() const
{
	int Num_of_Sides = 12;
	cout << "Num of Sides(Edges) : " << Num_of_Sides << endl;
	return Num_of_Sides;
}
double Hexahedron::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 8;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}
int Hexahedron::Get_Num_of_Faces() const
{
	int Num_of_Faces = 6;
	cout << "Num of Faces : " << Num_of_Faces << endl;
	if (Num_of_Faces == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces;
}

int Hexahedron::Get_Num_of_Sides_in_Fase() const
{
	int Get_Num_of_Sides_in_Fase = 4;
	cout << "Get Num of Sides in Fase : " << Get_Num_of_Sides_in_Fase << endl;
	return Get_Num_of_Sides_in_Fase;
}
int Hexahedron::Get_Num_of_Faces_adjacent_to_vertex() const
{
	int Num_of_Faces_adjacent_to_vertex = 3;
	cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	if (Num_of_Faces_adjacent_to_vertex == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces_adjacent_to_vertex;
}

double Hexahedron::Square() const
{
	int Num_of_Faces = 6;
	double square = (Length * Length) * Num_of_Faces;
	cout << "Square : " << square << endl;
	return square;
}
double Hexahedron::Volume() const
{
	double V = volume;
	V = pow(Length, 3);
	cout << "Volume : " << V << endl;

	//if (volume == NULL)
	//	return Null_Exception::NULLP;

	return V;
}
void Hexahedron::Set_Volume(double Value)
{
	volume = Value;
}

void Hexahedron::Set_length(double Value)
{
	Length = Value;

}

void Hexahedron::Print_Facet() const
{
	Square_F sq(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&sq);
}



//октаедр 
Octahedron::Octahedron(double value)
{
	//name = "Octahedron";
	Length = value;
	//radius = (value * sqrt(6)) / 6;
	//Circumscribed_radius = (value * sqrt(2)) / 2;
	//Num_of_Sides = 3;
	//Number_of_Vertices = 6;
	//Num_of_Faces = 8;
	//Num_of_Faces_adjacent_to_vertex = 4;
	//double square = ((Num_of_Sides * pow(length, 2)) / (4 * tan(180 / Num_of_Sides))) * Num_of_Faces;
	//Square(square);
	
	//double volume = (pow(length, 3) * sqrt(2)) / 3;
	//Volume(volume);
	//Get_flat_Figure(Status_of_3Dfigure::TRIANGLE);

	Triangle tr(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&tr);

}

void Octahedron::Getname() const
{
	cout << "Name :" << "Octahedron" << endl;
}
double Octahedron::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Octahedron::Get_and_Modify_radius() const
{
	double R = Radius;
	R = (Length * sqrt(6)) / 6;
	cout << "Radius : " << R << endl;
	return R;
}
void Octahedron::Set_radius(double Value)
{
	Radius = Value;
}
double Octahedron::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = (Length * sqrt(2)) / 2;
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Octahedron::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}
double Octahedron::Get_Num_of_Sides() const
{
	int Num_of_Sides = 12;
	cout << "Num of Sides(Edges) : " << Num_of_Sides << endl;
	return Num_of_Sides;
}
double Octahedron::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 6;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}
int Octahedron::Get_Num_of_Faces() const
{
	int Num_of_Faces = 8;
	cout << "Num of Faces : " << Num_of_Faces << endl;
	if (Num_of_Faces == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces;
}

int Octahedron::Get_Num_of_Sides_in_Fase() const
{
	int Get_Num_of_Sides_in_Fase = 3;
	cout << "Get Num of Sides in Fase : " << Get_Num_of_Sides_in_Fase << endl;
	return Get_Num_of_Sides_in_Fase;
}
int Octahedron::Get_Num_of_Faces_adjacent_to_vertex() const
{
	int Num_of_Faces_adjacent_to_vertex = 4;
	cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	if (Num_of_Faces_adjacent_to_vertex == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces_adjacent_to_vertex;
}

double Octahedron::Square() const
{
	int Num_of_Faces = 8;
	int Get_Num_of_Sides_in_Fase = 3;
	double square = ((Get_Num_of_Sides_in_Fase * pow(Length, 2)) / (4 * tan(180 / Get_Num_of_Sides_in_Fase))) * Num_of_Faces;
	cout << "Square : " << square << endl;
	return square;
}
double Octahedron::Volume() const
{
	double V = volume;
	V = (pow(Length, 3) * sqrt(2)) / 3;
	cout << "Volume : " << V << endl;

	//if (volume == NULL)
	//	return Null_Exception::NULLP;

	return V;
}
void Octahedron::Set_Volume(double Value)
{
	volume = Value;
}

void Octahedron::Set_length(double Value)
{
	Length = Value;

}

void Octahedron::Print_Facet() const
{
	Triangle tr(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&tr);
}


//додекаедр
Dodecahedron::Dodecahedron(double value)
{
	//name = "Dodecahedron";
	Length = value;
	//radius = (value / 4) * sqrt(10 + (22 / sqrt(5)));
	//Circumscribed_radius = (value / 4) * (1 + sqrt(5)) * sqrt(3);
	//Num_of_Sides = 5;
	//Number_of_Vertices = 20;
	//Num_of_Faces = 12;
	//Num_of_Faces_adjacent_to_vertex = 3;
	//double square = ((Num_of_Sides * pow(length, 2)) / (4 * tan(180 / Num_of_Sides))) * Num_of_Faces;
	//Square(square);
	
	//double volume = (pow(length, 3) * (15 + (7 * sqrt(5)))) / 4;
	//Volume(volume);
	//Get_flat_Figure(Status_of_3Dfigure::PENTAGON);

	Pentagon pent(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&pent);

}

void Dodecahedron::Getname() const
{
	cout << "Name :" << "Dodecahedron" << endl;
}
double Dodecahedron::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Dodecahedron::Get_and_Modify_radius() const
{
	double R = Radius;
	R = (Length / 4) * sqrt(10 + (22 / sqrt(5)));
	cout << "Radius : " << R << endl;
	return R;
}
void Dodecahedron::Set_radius(double Value)
{
	Radius = Value;
}
double Dodecahedron::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = (Length / 4) * (1 + sqrt(5)) * sqrt(3);
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Dodecahedron::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}
double Dodecahedron::Get_Num_of_Sides() const
{
	int Num_of_Sides = 30;
	cout << "Num of Sides(Edges) : " << Num_of_Sides << endl;
	return Num_of_Sides;
}
double Dodecahedron::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 20;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}
int Dodecahedron::Get_Num_of_Faces() const
{
	int Num_of_Faces = 12;
	cout << "Num of Faces : " << Num_of_Faces << endl;
	if (Num_of_Faces == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces;
}

int Dodecahedron::Get_Num_of_Sides_in_Fase() const
{
	int Get_Num_of_Sides_in_Fase = 5;
	cout << "Get Num of Sides in Fase : " << Get_Num_of_Sides_in_Fase << endl;
	return Get_Num_of_Sides_in_Fase;
}
int Dodecahedron::Get_Num_of_Faces_adjacent_to_vertex() const
{
	int Num_of_Faces_adjacent_to_vertex = 3;
	cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	if (Num_of_Faces_adjacent_to_vertex == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces_adjacent_to_vertex;
}

double Dodecahedron::Square() const
{
	int Num_of_Faces = 12;
	int Get_Num_of_Sides_in_Fase = 5;
	double square = ((Get_Num_of_Sides_in_Fase * pow(Length, 2)) / (4 * tan(180 / Get_Num_of_Sides_in_Fase))) * Num_of_Faces;
	cout << "Square : " << square << endl;
	return square;
}
double Dodecahedron::Volume() const
{
	double V = volume;
	V = (pow(Length, 3) * (15 + (7 * sqrt(5)))) / 4;
	cout << "Volume : " << V << endl;

	//if (volume == NULL)
	//	return Null_Exception::NULLP;

	return V;
}
void Dodecahedron::Set_Volume(double Value)
{
	volume = Value;
}

void Dodecahedron::Set_length(double Value)
{
	Length = Value;

}

void Dodecahedron::Print_Facet() const
{
	Pentagon Pent(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&Pent);
}



//ікосаедр 
Icosahedron::Icosahedron(double value)
{
	//name = "Icosahedron";
	Length = value;
	//radius = (1 / (4 * sqrt(3))) * (3 + sqrt(5)) * value;
	//Circumscribed_radius = (1 / 4) * sqrt(2 * (5 + sqrt(5))) * value;
	//Num_of_Sides = 3;
	//Number_of_Vertices = 12;
	//Num_of_Faces = 20;
	//Num_of_Faces_adjacent_to_vertex = 5;
	//double square = ((Num_of_Sides * pow(length, 2)) / (4 * tan(180 / Num_of_Sides))) * Num_of_Faces;
	//Square(square);
	
	//double volume = ((5 * pow(length, 3)) * (3 + sqrt(5))) / 12;
	//Volume(volume);
	//Get_flat_Figure(Status_of_3Dfigure::TRIANGLE);

	Triangle tr(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&tr);

}

void Icosahedron::Getname() const
{
	cout << "Name :" << "Icosahedron" << endl;
}
double Icosahedron::Get_and_Modify_length() const//виведення довжини 
{
	cout << "Length : " << Length << endl;
	return Length;
}
double Icosahedron::Get_and_Modify_radius() const
{
	double R = Radius;
	R = (1 / (4 * sqrt(3))) * (3 + sqrt(5)) * Length;
	cout << "Radius : " << R << endl;
	return R;
}
void Icosahedron::Set_radius(double Value)
{
	Radius = Value;
}
double Icosahedron::Get_and_Modify_Circumscribed_radius() const
{
	double Circumscribed_radius = (1 / 4) * sqrt(2 * (5 + sqrt(5))) * Length;
	cout << "Circumscribed_radius : " << Circumscribed_radius << endl;
	return Circumscribed_radius;
}
void Icosahedron::Set_Circumscribed_radius(double Value)
{
	Circumscribed_radius = Value;
}
double Icosahedron::Get_Num_of_Sides() const
{
	int Num_of_Sides = 30;
	cout << "Num of Sides(Edges) : " << Num_of_Sides << endl;
	return Num_of_Sides;
}
double Icosahedron::Get_Num_of_Vertices() const
{
	int Number_of_Vertices = 12;
	cout << "Number_of_Vertices : " << Number_of_Vertices << endl;
	return Number_of_Vertices;
}
int Icosahedron::Get_Num_of_Faces() const
{
	int Num_of_Faces = 20;
	cout << "Num of Faces : " << Num_of_Faces << endl;
	if (Num_of_Faces == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces;
}

int Icosahedron::Get_Num_of_Sides_in_Fase() const
{
	int Get_Num_of_Sides_in_Fase = 3;
	cout << "Get Num of Sides in Fase : " << Get_Num_of_Sides_in_Fase << endl;
	return Get_Num_of_Sides_in_Fase;
}
int Icosahedron::Get_Num_of_Faces_adjacent_to_vertex() const
{
	int Num_of_Faces_adjacent_to_vertex = 5;
	cout << "Num of Faces adjacent to vertex : " << Num_of_Faces_adjacent_to_vertex << endl;
	if (Num_of_Faces_adjacent_to_vertex == NULL)
		return Null_Exception::NULLP;

	return Num_of_Faces_adjacent_to_vertex;
}

double Icosahedron::Square() const
{
	int Num_of_Faces = 12;
	int Get_Num_of_Sides_in_Fase = 5;
	double square = ((Get_Num_of_Sides_in_Fase * pow(Length, 2)) / (4 * tan(180 / Get_Num_of_Sides_in_Fase))) * Num_of_Faces;
	cout << "Square : " << square << endl;
	return square;
}
double Icosahedron::Volume() const
{
	double V = volume;
	V = ((5 * pow(Length, 3)) * (3 + sqrt(5))) / 12;
	cout << "Volume : " << V << endl;

	//if (volume == NULL)
	//	return Null_Exception::NULLP;

	return V;
}
void Icosahedron::Set_Volume(double Value)
{
	volume = Value;
}

void Icosahedron::Set_length(double Value)
{
	Length = Value;

}

void Icosahedron::Print_Facet() const
{
	Triangle tr(this->Length);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&tr);
}




//куля 
Sphere::Sphere(double value)
{
	//name = "Sphere";
	//length = 0;
	Radius = value;
	//Circumscribed_radius = value;
	//Num_of_Sides = 0;
	//Number_of_Vertices = 0;
	//Num_of_Faces = 0;
	//Num_of_Faces_adjacent_to_vertex = 0;
	//double square = (4 * 3,14 * pow(Radius, 2));
	//Square(square);
	
	//double volume = (4 * 3, 14 * pow(Radius, 3)) / 3;
	//Volume(volume);
	//Get_flat_Figure(Status_of_3Dfigure::TRIANGLE);

}


void Sphere::Getname() const
{
	cout << "Name :" << "Sphere" << endl;
}
double Sphere::Get_and_Modify_length() const//виведення довжини 
{
	
	return 0;
}
double Sphere::Get_and_Modify_radius() const
{
	double R = Radius;
	cout << "Radius : " << R << endl;
	return R;
}
void Sphere::Set_radius(double Value)
{
	Radius = Value;
}
double Sphere::Get_and_Modify_Circumscribed_radius() const
{
	return 0;
}
void Sphere::Set_Circumscribed_radius(double Value)
{
}
double Sphere::Get_Num_of_Sides() const
{
	return 0;
}
double Sphere::Get_Num_of_Vertices() const
{
	return 0;
}
int Sphere::Get_Num_of_Faces() const
{
	return 0;
}

int Sphere::Get_Num_of_Sides_in_Fase() const
{
	return 0;
}
int Sphere::Get_Num_of_Faces_adjacent_to_vertex() const
{
	return 0;
}

double Sphere::Square() const
{

	double square = (4 * 3, 14 * pow(Radius, 2));
	cout << "Square : " << square << endl;
	return square;
}
double Sphere::Volume() const
{
	double V = volume;
	V  = (4 * 3, 14 * pow(Radius, 3)) / 3;
	cout << "Volume : " << V << endl;

	//if (volume == NULL)
	//	return Null_Exception::NULLP;

	return V;
}
void Sphere::Set_Volume(double Value)
{
	volume = Value;
}

void Sphere::Set_length(double Value)
{

}

void Sphere::Print_Facet() const
{
	Circle Cir(this->Radius);

	Three_Dimensional_Figures threeD;
	threeD.Print_all(&Cir);
}

