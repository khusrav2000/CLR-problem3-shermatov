#pragma once

namespace CLRProblem3Shermatov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Vkey;
	private: System::Windows::Forms::Label^ nkey;
	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ M2key;
	private: System::Windows::Forms::Label^ M3key;


	private: System::Windows::Forms::Label^ V4key;
	private: System::Windows::Forms::Label^ M4key;


	private: System::Windows::Forms::Label^ V3key;

	private: System::Windows::Forms::Label^ V2key;

	private: System::Windows::Forms::Label^ V1key;

	private: System::Windows::Forms::Label^ hkey;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Vkey = (gcnew System::Windows::Forms::TextBox());
			this->nkey = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->M2key = (gcnew System::Windows::Forms::Label());
			this->M3key = (gcnew System::Windows::Forms::Label());
			this->V4key = (gcnew System::Windows::Forms::Label());
			this->M4key = (gcnew System::Windows::Forms::Label());
			this->V3key = (gcnew System::Windows::Forms::Label());
			this->V2key = (gcnew System::Windows::Forms::Label());
			this->V1key = (gcnew System::Windows::Forms::Label());
			this->hkey = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"V=";
			// 
			// Vkey
			// 
			this->Vkey->Location = System::Drawing::Point(48, 13);
			this->Vkey->Name = L"Vkey";
			this->Vkey->Size = System::Drawing::Size(100, 20);
			this->Vkey->TabIndex = 1;
			// 
			// nkey
			// 
			this->nkey->AutoSize = true;
			this->nkey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nkey->Location = System::Drawing::Point(13, 156);
			this->nkey->Name = L"nkey";
			this->nkey->Size = System::Drawing::Size(51, 20);
			this->nkey->TabIndex = 2;
			this->nkey->Text = L"label2";
			this->nkey->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->nkey->Visible = false;
			this->nkey->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(668, 97);
			this->dataGridView1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(610, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Solve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// M2key
			// 
			this->M2key->AutoSize = true;
			this->M2key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->M2key->Location = System::Drawing::Point(226, 186);
			this->M2key->Name = L"M2key";
			this->M2key->Size = System::Drawing::Size(51, 20);
			this->M2key->TabIndex = 5;
			this->M2key->Text = L"label3";
			this->M2key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->M2key->Visible = false;
			// 
			// M3key
			// 
			this->M3key->AutoSize = true;
			this->M3key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->M3key->Location = System::Drawing::Point(226, 219);
			this->M3key->Name = L"M3key";
			this->M3key->Size = System::Drawing::Size(51, 20);
			this->M3key->TabIndex = 6;
			this->M3key->Text = L"label4";
			this->M3key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->M3key->Visible = false;
			// 
			// V4key
			// 
			this->V4key->AutoSize = true;
			this->V4key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->V4key->Location = System::Drawing::Point(13, 281);
			this->V4key->Name = L"V4key";
			this->V4key->Size = System::Drawing::Size(51, 20);
			this->V4key->TabIndex = 7;
			this->V4key->Text = L"label5";
			this->V4key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->V4key->Visible = false;
			// 
			// M4key
			// 
			this->M4key->AutoSize = true;
			this->M4key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->M4key->Location = System::Drawing::Point(226, 252);
			this->M4key->Name = L"M4key";
			this->M4key->Size = System::Drawing::Size(51, 20);
			this->M4key->TabIndex = 8;
			this->M4key->Text = L"label6";
			this->M4key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->M4key->Visible = false;
			// 
			// V3key
			// 
			this->V3key->AutoSize = true;
			this->V3key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->V3key->Location = System::Drawing::Point(13, 252);
			this->V3key->Name = L"V3key";
			this->V3key->Size = System::Drawing::Size(51, 20);
			this->V3key->TabIndex = 9;
			this->V3key->Text = L"label7";
			this->V3key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->V3key->Visible = false;
			// 
			// V2key
			// 
			this->V2key->AutoSize = true;
			this->V2key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->V2key->Location = System::Drawing::Point(13, 219);
			this->V2key->Name = L"V2key";
			this->V2key->Size = System::Drawing::Size(51, 20);
			this->V2key->TabIndex = 10;
			this->V2key->Text = L"label8";
			this->V2key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->V2key->Visible = false;
			// 
			// V1key
			// 
			this->V1key->AutoSize = true;
			this->V1key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->V1key->Location = System::Drawing::Point(13, 186);
			this->V1key->Name = L"V1key";
			this->V1key->Size = System::Drawing::Size(51, 20);
			this->V1key->TabIndex = 11;
			this->V1key->Text = L"label9";
			this->V1key->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->V1key->Visible = false;
			// 
			// hkey
			// 
			this->hkey->AutoSize = true;
			this->hkey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hkey->Location = System::Drawing::Point(226, 156);
			this->hkey->Name = L"hkey";
			this->hkey->Size = System::Drawing::Size(60, 20);
			this->hkey->TabIndex = 12;
			this->hkey->Text = L"label10";
			this->hkey->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->hkey->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 458);
			this->Controls->Add(this->hkey);
			this->Controls->Add(this->V1key);
			this->Controls->Add(this->V2key);
			this->Controls->Add(this->V3key);
			this->Controls->Add(this->M4key);
			this->Controls->Add(this->V4key);
			this->Controls->Add(this->M3key);
			this->Controls->Add(this->M2key);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->nkey);
			this->Controls->Add(this->Vkey);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int V;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			V = Int32::Parse(Vkey->Text);
		}
		catch (...)
		{
			return;
		}
		solve();
	}

	private: System::Void solve() {
		int count = System::Math::Abs(3 * V - 143) % 7 + 7;
		int h = System::Math::Abs(V + 64) % 4 + 2;
		int n[10000], x[10000], nn = 0;
		double w[10000];
		double V1, V2, V3, V4, M2, M3, M4;
		for (int i = 1; i <= count; i++) {
			if (i % 2 == 0) {
				int taq = 6, vTaq = V + 12 * i;
				int g = gcd(taq, vTaq);
				taq = taq / g;
				vTaq = vTaq / g;
				n[i] = System::Math::Abs(vTaq % taq - 3 * i);
			}
			else {
				n[i] = System::Math::Abs(System::Math::Abs(V - 13 * i) % 5 - 2 * i);
			}
			int taq = 12, vTaq = V + 15 * i;
			int g = gcd(taq, vTaq);
			taq = taq / g;
			vTaq = vTaq / g;
			x[i] = System::Math::Abs(vTaq % taq - 3 * i) + h;
			nn += n[i];
		}
		dataGridView1->ColumnCount = count + 1;
		dataGridView1->RowCount = 2;

		dataGridView1->Rows[0]->Cells[0]->Value = "xi";
		dataGridView1->Rows[1]->Cells[0]->Value = "ni";
		for (int i = 1; i <= count; i++) {
			dataGridView1->Rows[0]->Cells[i]->Value = System::Convert::ToString(x[i]);
			dataGridView1->Rows[1]->Cells[i]->Value = System::Convert::ToString(n[i]);
		}

		for (int i = 1; i <= count; i++) {
			w[i] = (n[i] * 1.0) / (nn * 1.0);
			V1 += (x[i] * 1.0) * w[i];
			V2 += (x[i] * x[i] * 1.0) * w[i];
			V3 += (x[i] * x[i] * x[i] * 1.0) * w[i];
			V4 += (x[i] * x[i] * x[i] * x[i] * 1.0) * w[i];
		}
		M2 = V2 - V1 * V1;
		M3 = V3 - 3 * V1 * V2 + 2 * V1 * V1 * V1;
		M4 = V4 - 4 * V1 * V3 + 6 * V1 * V1 * V2 - 3 * V1 * V1 * V1 * V1;

		nkey->Text = "n= " + System::Convert::ToString(nn);
		hkey->Text = "h= " + System::Convert::ToString(h);
		V1key->Text = "V1= " + System::Convert::ToString(V1);
		V2key->Text = "V2= " + System::Convert::ToString(V2);
		V3key->Text = "V3= " + System::Convert::ToString(V3);
		V4key->Text = "V4= " + System::Convert::ToString(V4);
		M2key->Text = "M2= " + System::Convert::ToString(M2);
		M3key->Text = "M3= " + System::Convert::ToString(M3);
		M4key->Text = "M4= " + System::Convert::ToString(M4);

		nkey->Visible = true;
		hkey->Visible = true;
		V1key->Visible = true;
		V2key->Visible = true;
		V3key->Visible = true;
		V4key->Visible = true;
		M2key->Visible = true;
		M3key->Visible = true;
		M4key->Visible = true;
	}
		   private: int gcd(int a, int b) {
			   while (a && b) {
				   if (a > b)
					   a %= b;
				   else
					   b %= a;
			   }
			   return a + b;
		   }
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
