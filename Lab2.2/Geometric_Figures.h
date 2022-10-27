#ifndef GEOMETRIC_FIGURES
#define GEOMETRIC_FIGURES

#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class ALL 
{
public:
	
	virtual void Getname()const ;//виведення ім'я 

	virtual double Get_and_Modify_length() const ;//виведення довжини 

	virtual void Set_length(double Value);//зміна довжини 

	virtual double Get_and_Modify_radius() const;//виведення радіусу 

	virtual void Set_radius(double Value ); //зміна радусу 

	virtual double Get_and_Modify_Circumscribed_radius() const;//виведення радусу описаного кола 

	virtual void Set_Circumscribed_radius(double Value);//зміна радусу описаного кола

	virtual double Get_Num_of_Sides() const;//виведення кількості сторін 

	virtual double Get_Num_of_Vertices() const;//виведення кількості вершин 

	virtual double Square() const;//площа 

	virtual void Print_all_Data() const;
	

	//virtual ALL Copy_Method() const;

	virtual ALL* clone();
	virtual void Copy_Metod(ALL* d);
	
};
//////////////////////////////////////////////////////////////////////////////////////////

class Flat_Figures : public ALL
{
public:
	
	virtual double Perimeter() const;
	virtual void Print_all_Data() const override;
};


//////////////////////////////////////////////////////////////////////////////////////////

class Three_Dimensional_Figures : public ALL
{
public:
	
	virtual void Set_Volume(double Value);//зміна радусу 

	//int Num_of_Sides_in_Fase;//кількість сторін у грані 
	virtual double Volume() const; //об'єм

	virtual int Get_Num_of_Faces() const;  //виведення кількості граней 

	virtual int Get_Num_of_Faces_adjacent_to_vertex() const;  //виведення кількості граней суміжних з вершиною

	virtual int Get_Num_of_Sides_in_Fase() const; //виведення кількості сторін у грані

	//virtual void Get_flat_Figure(int status); //виведення грані об'ємної фігури
	virtual void Print_all_Data() const override;

	virtual void Print_all(Flat_Figures * all);
	virtual void Print_Facet() const;
	
};




/////////////////////////////////////////////////////////////////
 
//трикутник
class Triangle : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:
	
	Triangle(double value);
	//Triangle(const Triangle& other);


	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override  ;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	double Square() const override;
	double Perimeter() const override;
	void Set_length(double Value) override;


	virtual Triangle* clone();
	void Copy_Metod(ALL* d) override;
	
	//ALL Copy_Method() const ;
};
//
//квадрат
class Square_F : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Square_F(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	double Square() const override;
	double Perimeter() const override;
	void Set_length(double Value) override;



};

//п'ятикутник
class Pentagon : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Pentagon(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	double Square() const override;
	double Perimeter() const override;
	void Set_length(double Value) override;
};

//шестикутник
class Hexagon : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Hexagon(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	double Square() const override;
	double Perimeter() const override;
	void Set_length(double Value) override;

};

//коло
class Circle : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Circle(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	double Square() const override;
	double Perimeter() const override;
	void Set_length(double Value) override;

};



////////////////////////////////////////////////

//тетраедр
class Tetrahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;
	
public:

	Tetrahedron(double value);


	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	int Get_Num_of_Faces() const override;
	int Get_Num_of_Sides_in_Fase() const override;
	int Get_Num_of_Faces_adjacent_to_vertex() const override;
	double Square() const override;
	double Volume() const override;
	void Set_Volume(double Value) override;
	void Set_length(double Value) override;
	void Print_Facet() const override;

};

//гексаедр
class Hexahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;

public:

	Hexahedron(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	int Get_Num_of_Faces() const override;
	int Get_Num_of_Sides_in_Fase() const override;
	int Get_Num_of_Faces_adjacent_to_vertex() const override;
	double Square() const override;
	double Volume() const override;
	void Set_Volume(double Value) override;
	void Set_length(double Value) override;
	void Print_Facet() const override;

};

//октаедр 
class Octahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;
public:

	Octahedron(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	int Get_Num_of_Faces() const override;
	int Get_Num_of_Sides_in_Fase() const override;
	int Get_Num_of_Faces_adjacent_to_vertex() const override;
	double Square() const override;
	double Volume() const override;
	void Set_Volume(double Value) override;
	void Set_length(double Value) override;
	void Print_Facet() const override;

};

//додекаедр 
class Dodecahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;

public:

	Dodecahedron(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	int Get_Num_of_Faces() const override;
	int Get_Num_of_Sides_in_Fase() const override;
	int Get_Num_of_Faces_adjacent_to_vertex() const override;
	double Square() const override;
	double Volume() const override;
	void Set_Volume(double Value) override;
	void Set_length(double Value) override;
	void Print_Facet() const override;

};

//ікосаедр 
class Icosahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;

public:

	Icosahedron(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	int Get_Num_of_Faces() const override;
	int Get_Num_of_Sides_in_Fase() const override;
	int Get_Num_of_Faces_adjacent_to_vertex() const override;
	double Square() const override;
	double Volume() const override;
	void Set_Volume(double Value) override;
	void Set_length(double Value) override;
	void Print_Facet() const override;

};

//куля 
class Sphere : public Three_Dimensional_Figures
{
private:
	//double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;
public:

	Sphere(double value);

	void Getname()const;
	double Get_and_Modify_length() const override;
	double Get_and_Modify_radius() const override;
	void Set_radius(double Value) override;
	double Get_and_Modify_Circumscribed_radius() const override;
	void Set_Circumscribed_radius(double Value);
	double Get_Num_of_Sides() const override;
	double Get_Num_of_Vertices() const override;
	int Get_Num_of_Faces() const override;
	int Get_Num_of_Sides_in_Fase() const override;
	int Get_Num_of_Faces_adjacent_to_vertex() const override;
	double Square() const override;
	double Volume() const override;
	void Set_Volume(double Value) override;
	void Set_length(double Value) override;
	void Print_Facet() const override;

};

#endif