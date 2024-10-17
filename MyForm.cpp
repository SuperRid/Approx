#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //������� ��� main
int main(array<String^>^ args) //^ - ������ delete
{
	Application::SetCompatibleTextRenderingDefault(false); //�������� ������
	Application::EnableVisualStyles(); //��������� ���������� ������ 
	Approx::MyForm form; //��������� � ������ � �������� �������� form
	Application::Run(% form); // ��������� � ������ Run, �������� �� ������ form
}


double F(double x) //�������
{
	return exp(-1 * abs(x)) * x * x;
}
 
double Approx::MyForm::P(double x) //������� 
{
	double p = 0;
	Gauss(); // �������� ����� ������, ��� �������� C

	// ��������� �������� ��������
	for (int i = 0; i <= n; i++) {
		p += C[i] * pow(x, i);
	}

	
	return p;
}

void Approx::MyForm::GeneratePoints()
{
	x = new double[m + 1]; //����������� ������ ��� x
	f = new double[m + 1]; //����������� ������ ��� f ��� ������ �����
	srand(time(NULL)); // ����� ��������� ����� 
	for (int i = 0; i <= m; i++)
	{
		z = (double)(rand()) / RAND_MAX; //����� ���������� �����, static_cast<double> - ��� ������ ������� �����
		if (z < 0.5) k = -1;
		else k = 1;
		x[i] = a + i * (b - a) / (double)m; //�����
		f[i] = F(x[i]) * (1 + k * z / c); //����� ��� ��������� ���������� 
	}
}

void Approx::MyForm::Matrix() // ���������� ������ 
{
	D = new double[2 * n + 1]; //��������������� ������ ��� A
	B = new double[n + 1]; //������� ��������� ������
	A = new double* [n + 1];
	for (int i = 0; i <= n; i++)
	{
		A[i] = new double[n + 1];
	}

	for (int k = 0; k <= 2 * n; k++) //����������� D
	{
		D[k] = 0;
		for (int i = 0; i <= m; i++)
		{
			D[k] += pow(x[i], k);
		}
	}

	for (int k = 0; k <= n; k++) //���������� B
	{
		B[k] = 0;
		for (int i = 0; i <= m; i++)
		{
			B[k] += f[i] * pow(x[i], k);
		}
	}

	for (int i = 0; i <= n; i++) //��������� A ����� D
	{
		for (int j = 0; j <= n; j++)
		{
			A[i][j] = D[i + j];
		}
	}

}

void Approx::MyForm::Max()
{
	Matrix();
	for (int j = 0; j <= n; j++) {
		index = j; //index - � ����� ������ ������������� �����
		for (int k = j + 1; k <= n; k++) { //������� � 1 ������� 
			if (abs(A[k][j]) > abs(A[index][j])) {
				index = k;
			}
		}

		for (int i = 0; i <= n; i++) { //������������
			double temp = A[j][i];
			A[j][i] = A[index][i];
			A[index][i] = temp;
		}

		double tempB = B[j];
		B[j] = B[index];
		B[index] = tempB;
	}
}

double* Approx::MyForm::Gauss() //���������� ������ ������
{
	C = new double[n + 1];
	B1 = new double[n + 1];

	Max();
	// ��������� ����� ������ ��� �������������� �������

	for (int i = 0; i <= n - 1; i++) {
		for (int k = i + 1; k <= n; k++) {
			double coeff = A[k][i] / A[i][i];
			for (int j = i; j <= n; j++) {
				A[k][j] -= coeff * A[i][j];
			}
			B[k] -= coeff * B[i];
		}
	}

	for (int i = 0; i <= n; i++) // ������������ ���� B, �� ���������� ��������� ����
	{
		B1[i] = B[i];
	}

	// �������� ��� ������ ������
	for (int i = n; i >= 0; i--) {
		for (int k = i + 1; k <= n; k++) {
			B[i] -= A[i][k] * C[k];
		}
		C[i] = B[i] / A[i][i];
	}

	//�������� ������������ ������
	delete[] D;
	delete[] B;
	
    return C;
}

void Approx::MyForm::fail()
{
	std::ofstream outputFile("delta.txt");

	if (!outputFile.is_open())
	{
		// ��������� ������ �������� �����
		MessageBox::Show("������ �������� ����� ��� ������!");
		return;
	}

	d = new double[n + 1];
	for (int i = 0; i <= n; i++)
	{
		delta = 0;
			for (int j = 0; j <= n; j++)
			{
				delta += A[i][j] * C[j];
			}
			delta -= B1[i];
			d[i] = delta;
		// ���������� delta � ����
		outputFile << "Delta[" << i << "]: " << delta << "\n";
	}
	
	int l = 0;
	if (l <= n) TB1->Text = Convert::ToString(d[0]); l++;
	if (l <= n) TB2->Text = Convert::ToString(d[1]); l++;
	if (l <= n) TB3->Text = Convert::ToString(d[2]); l++;
	if (l <= n) TB4->Text = Convert::ToString(d[3]); l++;
	if (l <= n) TB5->Text = Convert::ToString(d[4]); l++;
	if (l <= n) TB6->Text = Convert::ToString(d[5]); l++;
	if (l <= n) TB7->Text = Convert::ToString(d[6]); l++;
	if (l <= n) TB8->Text = Convert::ToString(d[7]); l++;
	if (l <= n) TB9->Text = Convert::ToString(d[8]); l++;
	if (l <= n) TB10->Text = Convert::ToString(d[9]); l++;
	if (l <= n) TB11->Text = Convert::ToString(d[10]); l++;
	if (l <= n) TB12->Text = Convert::ToString(d[11]); l++;
	if (l <= n) TB13->Text = Convert::ToString(d[12]); l++;
	if (l <= n) TB14->Text = Convert::ToString(d[13]); l++;
	if (l <= n) TB15->Text = Convert::ToString(d[14]); l++;
	if (l <= n) TB16->Text = Convert::ToString(d[15]); l++;

	s = 0;
	for (int i = 0; i <= m; i++)
	{
		s += pow(P(x[i]) - f[i], 2);
	}
	outputFile << "S: " << s << "\n";

	TBS->Text = Convert::ToString(s);

	// ��������� ����
	outputFile.close();
	delete[] d;
	delete[] B1;
	delete[] C;//�������� ������������ ������
	for (int i = 0; i <= n; i++) {
		delete[] A[i];
	}
	delete[] A;
	
}

System::Void Approx::MyForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox_a->Text == "" || textBox_b->Text == "" || textBox_m->Text == "" || textBox_n->Text == "" || textBox_c->Text == "")
	{
		MessageBox::Show("������ ������ �������� �� ���������!");
		DefaultParams();
		textBox_a->Text = Convert::ToString(a);
		textBox_b->Text = Convert::ToString(b);
		textBox_m->Text = Convert::ToString(m);
		textBox_n->Text = Convert::ToString(n);
		textBox_c->Text = Convert::ToString(c);
	}
	else
	{
		a = Convert::ToDouble(textBox_a->Text);
		b = Convert::ToDouble(textBox_b->Text);
		m = Convert::ToInt32(textBox_m->Text);
		n = Convert::ToInt32(textBox_n->Text);
		c = Convert::ToDouble(textBox_c->Text);
	}
	p = new double[m + 1]; //����������� ������ p ��� ������ �������� 
	GeneratePoints();

	this->chart->Series[0]->Points->Clear(); //� ������ ������ ����� ��������� 
	this->chart->Series[1]->Points->Clear(); //� ������ ������ ����� ��������� 
	this->chart->Series[2]->Points->Clear(); //� ������ ������ ����� ��������� 
	
	for (int i = 0; i <= m; i++)
	{
		p[i] = P(x[i]); //����� ��������
		fail();
		this->chart->Series[0]->Points->AddXY(x[i], f[i]); //���������� ����� 
		this->chart->Series[1]->Points->AddXY(x[i], F(x[i])); //���������� �������
		this->chart->Series[2]->Points->AddXY(x[i], p[i]); //���������� ��������
	}

	//if (TB1->Text != "" || TB2->Text != "" || TB3->Text != "" || TB4->Text != "" || TB5->Text != "" || TB6->Text != "" || TB7->Text != "" || TB8->Text != "" || TB9->Text != "" || TB10->Text != "" || TB11->Text != "" || TB12->Text != "" || TB13->Text != "" || TB14->Text != "" || TB15->Text != "")
	delete[] x;
	delete[] f;
	delete[] p;
}

System::Void Approx::MyForm::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart->Series[0]->Points->Clear();
	this->chart->Series[1]->Points->Clear(); 
	this->chart->Series[2]->Points->Clear();

	TB1->Text = "";
	TB2->Text = "";
	TB3->Text = "";
	TB4->Text = "";
	TB5->Text = "";
	TB6->Text = "";
	TB7->Text = "";
	TB8->Text = "";
	TB9->Text = "";
	TB10->Text = "";
	TB11->Text = "";
	TB12->Text = "";
	TB13->Text = "";
	TB14->Text = "";
	TB15->Text = "";
	TB15->Text = "";

	textBox_a->Text = "";
	textBox_b->Text = "";
	textBox_n->Text = "";
	textBox_m->Text = "";
	textBox_c->Text = "";

	TBS->Text = "";
}


void Approx::MyForm::DefaultParams()
{
	a = -2;
	b = 2;
	m = 25;
	n = 6;
	c = 5;
}
