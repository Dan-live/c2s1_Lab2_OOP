#ifndef GEOMETRIC_FIGURES
#define GEOMETRIC_FIGURES

#include <iostream>
#include <string>
#include <math.h>


using namespace std;

enum Null_Exception
{
	NULLP
};

//enum Status_of_3Dfigure
//{
//	
//	TRIANGLE,
//	SQUARE_F,
//	PENTAGON,
//	HEXAGON,
//
//};


class ALL 
{
public:
	//string name;
	//int length;
	//double radius;
	//double Circumscribed_radius;//�������� ����� 
	//int Num_of_Sides;//������� ����� ��� ������� ����� � �����  
	//int Number_of_Vertices;//ʳ������ ������ 
	//int Num_of_Faces = NULL;//������� ������	
	//int Num_of_Faces_adjacent_to_vertex = NULL;//������� ������ ������� � �������� 
	////mutable double volume = NULL;//��'��
	//mutable double square;//�����
	//mutable double perimeter = NULL;
	//
	
	
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
	//virtual double Perimeter() const;

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

	//int Num_of_Sides_in_Fase;//������� ����� � ����� 
	virtual double Volume() const; //��'��

	virtual int Get_Num_of_Faces() const;  //��������� ������� ������ 

	virtual int Get_Num_of_Faces_adjacent_to_vertex() const;  //��������� ������� ������ ������� � ��������

	virtual int Get_Num_of_Sides_in_Fase() const; //��������� ������� ����� � �����

	//virtual void Get_flat_Figure(int status); //��������� ����� ��'���� ������
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
	Triangle(const Triangle& other);


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

//�������
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

//�'���������
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

//�����������
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

//����
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