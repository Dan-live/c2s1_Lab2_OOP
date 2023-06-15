#ifndef GEOMETRIC_FIGURES
#define GEOMETRIC_FIGURES

#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class ALL 
{
public:
	
	virtual void Getname()const ;//��������� ��'� 

	virtual double Get_and_Modify_length() const ;//��������� ������� 

	virtual void Set_length(double Value);//���� ������� 

	virtual double Get_and_Modify_radius() const;//��������� ������ 

	virtual void Set_radius(double Value ); //���� ������ 

	virtual double Get_and_Modify_Circumscribed_radius() const;//��������� ������ ��������� ���� 

	virtual void Set_Circumscribed_radius(double Value);//���� ������ ��������� ����

	virtual double Get_Num_of_Sides() const;//��������� ������� ����� 

	virtual double Get_Num_of_Vertices() const;//��������� ������� ������ 

	virtual double Square() const;//����� 

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
	
	virtual void Set_Volume(double Value);//���� ������ 

	//int Num_of_Sides_in_Fase;//������� ����� � ���� 
	virtual double Volume() const; //��'��

	virtual int Get_Num_of_Faces() const;  //��������� ������� ������ 

	virtual int Get_Num_of_Faces_adjacent_to_vertex() const;  //��������� ������� ������ ������� � ��������

	virtual int Get_Num_of_Sides_in_Fase() const; //��������� ������� ����� � ����

	//virtual void Get_flat_Figure(int status); //��������� ���� ��'���� ������
	virtual void Print_all_Data() const override;

	virtual void Print_all(Flat_Figures * all);
	virtual void Print_Facet() const;
	
};




/////////////////////////////////////////////////////////////////
 
//���������
class Triangle : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:
	
	Triangle(double value);
	//Triangle(const Triangle& other);
	virtual Triangle* clone();

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



};
////////////

//�������
class Square_F : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Square_F(double value);

	virtual Square_F* clone();

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

//�'���������
class Pentagon : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Pentagon(double value);

	virtual Pentagon* clone();

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

//�����������
class Hexagon : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Hexagon(double value);

	virtual Hexagon* clone();

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

//����
class Circle : public Flat_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;

public:

	Circle(double value);

	virtual Circle* clone();

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

//��������
class Tetrahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;
	
public:

	Tetrahedron(double value);

	virtual Tetrahedron* clone();

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

//��������
class Hexahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;

public:

	Hexahedron(double value);

	virtual Hexahedron* clone();

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

//������� 
class Octahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;
public:

	Octahedron(double value);

	virtual Octahedron* clone();

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

//��������� 
class Dodecahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;

public:

	Dodecahedron(double value);

	virtual Dodecahedron* clone();


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

//�������� 
class Icosahedron : public Three_Dimensional_Figures
{
private:
	double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;

public:

	Icosahedron(double value);

	virtual Icosahedron* clone();

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

//���� 
class Sphere : public Three_Dimensional_Figures
{
private:
	//double Length;
	double Radius;
	double Circumscribed_radius;
	double volume;
public:

	Sphere(double value);

	virtual Sphere* clone();

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