#pragma once
#include "Funcion3v.h"
#include "Bolsa.h"
#include "Busqueda.h" 

namespace MAPAKFORM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3v
	/// </summary>
	public ref class Form3v : public System::Windows::Forms::Form
	{
	public:
		Form3v(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dgvTablaV->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgvMapaK->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgvTablaV->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::LightSalmon;
			dgvTablaV->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::LightSalmon;
			dgvTablaV->Columns[2]->DefaultCellStyle->BackColor = System::Drawing::Color::LightSalmon;
			int n = 8;
			dgvTablaV->RowCount = n;
			for (int i = 0; i < n; i++) {
				dgvTablaV->Rows[i]->HeaderCell->Value = i.ToString();
			}
			for (int i = 0; i < n; i++) {
				if (i < n / 2)
					dgvTablaV->Rows[i]->Cells[0]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[0]->Value = "1";
				if (i < n/4 || i >= n/2 && i < (n*3)/4)
					dgvTablaV->Rows[i]->Cells[1]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[1]->Value = "1";
				if (i % 2 == 0) 
					dgvTablaV->Rows[i]->Cells[2]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[2]->Value = "1";
			}
			for (int i = 0; i < n; ++i) {
				dgvTablaV->Rows[i]->Cells[3]->Value = "0";
			}

			dgvMapaK->RowCount = 2;
			dgvMapaK->Rows[0]->HeaderCell->Value = "0";
			dgvMapaK->Rows[1]->HeaderCell->Value = "1";


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		Busqueda* obj_busca;
		bolsa** bolsa1;
		bolsa** bolsa2;
		bolsa** bolsa4;
		bolsa** bolsa8;
		funcion3v** matriz;
		bool btnvalidated=false;
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

		~Form3v()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dgvTablaV;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dgvMapaK;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ btnGrupo;
	private: System::Windows::Forms::Button^ btnSuma;
	private: System::Windows::Forms::Label^ labelSuma;



	private: System::Windows::Forms::Label^ labelGrupo;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ btnMapak;

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dgvTablaV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnMapak = (gcnew System::Windows::Forms::Button());
			this->dgvMapaK = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelGrupo = (gcnew System::Windows::Forms::Label());
			this->btnGrupo = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->labelSuma = (gcnew System::Windows::Forms::Label());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablaV))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMapaK))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dgvTablaV);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Location = System::Drawing::Point(25, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(246, 310);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"TABLA DE VERDAD";
			// 
			// dgvTablaV
			// 
			this->dgvTablaV->AllowUserToAddRows = false;
			this->dgvTablaV->AllowUserToDeleteRows = false;
			this->dgvTablaV->AllowUserToResizeColumns = false;
			this->dgvTablaV->AllowUserToResizeRows = false;
			this->dgvTablaV->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvTablaV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTablaV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvTablaV->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvTablaV->Location = System::Drawing::Point(6, 25);
			this->dgvTablaV->Name = L"dgvTablaV";
			this->dgvTablaV->RowHeadersVisible = false;
			this->dgvTablaV->RowHeadersWidth = 51;
			this->dgvTablaV->RowTemplate->Height = 24;
			this->dgvTablaV->Size = System::Drawing::Size(235, 280);
			this->dgvTablaV->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Z";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"f";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->btnMapak);
			this->groupBox2->Controls->Add(this->dgvMapaK);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Location = System::Drawing::Point(290, 125);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(383, 203);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"MAPA DE KARNAUGH";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(350, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(277, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(210, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(277, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(350, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(128, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(210, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(128, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"1";
			// 
			// btnMapak
			// 
			this->btnMapak->BackColor = System::Drawing::Color::White;
			this->btnMapak->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMapak->Location = System::Drawing::Point(280, 21);
			this->btnMapak->Name = L"btnMapak";
			this->btnMapak->Size = System::Drawing::Size(97, 30);
			this->btnMapak->TabIndex = 4;
			this->btnMapak->Text = L"Crear";
			this->btnMapak->UseVisualStyleBackColor = false;
			this->btnMapak->Click += gcnew System::EventHandler(this, &Form3v::btnMapak_Click);
			// 
			// dgvMapaK
			// 
			this->dgvMapaK->AllowUserToAddRows = false;
			this->dgvMapaK->AllowUserToDeleteRows = false;
			this->dgvMapaK->AllowUserToResizeColumns = false;
			this->dgvMapaK->AllowUserToResizeRows = false;
			this->dgvMapaK->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvMapaK->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMapaK->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5, this->Column6,
					this->Column7, this->Column8
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvMapaK->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvMapaK->Location = System::Drawing::Point(6, 62);
			this->dgvMapaK->Name = L"dgvMapaK";
			this->dgvMapaK->RowHeadersWidth = 51;
			this->dgvMapaK->RowTemplate->Height = 24;
			this->dgvMapaK->Size = System::Drawing::Size(371, 135);
			this->dgvMapaK->TabIndex = 0;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"00";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"01";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"11";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"10";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->labelGrupo);
			this->groupBox3->Controls->Add(this->btnGrupo);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox3->Location = System::Drawing::Point(12, 362);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(698, 173);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"AGRUPACIONES";
			// 
			// labelGrupo
			// 
			this->labelGrupo->AutoSize = true;
			this->labelGrupo->BackColor = System::Drawing::Color::White;
			this->labelGrupo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGrupo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelGrupo->Location = System::Drawing::Point(10, 54);
			this->labelGrupo->MinimumSize = System::Drawing::Size(680, 110);
			this->labelGrupo->Name = L"labelGrupo";
			this->labelGrupo->Padding = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->labelGrupo->Size = System::Drawing::Size(680, 110);
			this->labelGrupo->TabIndex = 3;
			// 
			// btnGrupo
			// 
			this->btnGrupo->BackColor = System::Drawing::Color::White;
			this->btnGrupo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnGrupo->Location = System::Drawing::Point(593, 21);
			this->btnGrupo->Name = L"btnGrupo";
			this->btnGrupo->Size = System::Drawing::Size(97, 30);
			this->btnGrupo->TabIndex = 0;
			this->btnGrupo->Text = L"Agrupar";
			this->btnGrupo->UseVisualStyleBackColor = false;
			this->btnGrupo->Click += gcnew System::EventHandler(this, &Form3v::btnGrupo_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->labelSuma);
			this->groupBox4->Controls->Add(this->btnSuma);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox4->Location = System::Drawing::Point(12, 582);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(698, 172);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"SUMA DE PRODUCTOS";
			// 
			// labelSuma
			// 
			this->labelSuma->AutoSize = true;
			this->labelSuma->BackColor = System::Drawing::Color::White;
			this->labelSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSuma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelSuma->Location = System::Drawing::Point(10, 54);
			this->labelSuma->MinimumSize = System::Drawing::Size(680, 110);
			this->labelSuma->Name = L"labelSuma";
			this->labelSuma->Padding = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->labelSuma->Size = System::Drawing::Size(680, 110);
			this->labelSuma->TabIndex = 2;
			// 
			// btnSuma
			// 
			this->btnSuma->BackColor = System::Drawing::Color::White;
			this->btnSuma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSuma->Location = System::Drawing::Point(593, 21);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(97, 30);
			this->btnSuma->TabIndex = 1;
			this->btnSuma->Text = L"Resolver";
			this->btnSuma->UseVisualStyleBackColor = false;
			this->btnSuma->Click += gcnew System::EventHandler(this, &Form3v::btnSuma_Click);
			// 
			// Form3v
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(722, 826);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form3v";
			this->Text = L"Form3v";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablaV))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMapaK))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}

		void TresVariables() {

			bolsa1 = new bolsa * [4];
			for (int i = 0; i < 4; i++)
				bolsa1[i] = new bolsa[3];

			bolsa2 = new bolsa * [10];
			for (int i = 0; i < 10; i++)
				bolsa2[i] = new bolsa[2];

			bolsa4 = new bolsa * [12];
			for (int i = 0; i < 12; i++)
				bolsa4[i] = new bolsa[4];

			bolsa8 = new bolsa * [1];
			for (int i = 0; i < 1; i++)
				bolsa8[i] = new bolsa[8];

			matriz = new funcion3v * [2];
			for (int i = 0; i < 2; i++)
				matriz[i] = new funcion3v[4];

			int auxX = 0;
			int auxY = 0;
			int auxZ = 0;
			int auxF = 0;
			int nr = 1;

			// Numero de referencia
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 4; j++) {
					if (j % 2 == 0) auxZ = 0;
					if (j % 2 != 0) auxZ = 1;
					matriz[i][j].setX(auxX);
					matriz[i][j].setY(auxY);
					matriz[i][j].setZ(auxZ);
					matriz[i][j].setR(nr);
					nr++;
					if (j == 1) auxY++;
				}
				auxY = 0;
				auxX++;
			}
			int cont = 0;
			for (int i = 0; i < 2; i++)
				for (int j = 0; j < 4; j++) {
					matriz[i][j].setF(Convert::ToInt32(dgvTablaV->Rows[cont]->Cells[3]->Value));
					cont++;
				}


			funcion3v* aux = new funcion3v();
			//cambiar valores 111 con 110
			aux->setX(matriz[0][3].getX());
			matriz[0][3].setX(matriz[0][2].getX());
			matriz[0][2].setX(aux->getX());
			aux->setY(matriz[0][3].getY());
			matriz[0][3].setY(matriz[0][2].getY());
			matriz[0][2].setY(aux->getY());
			aux->setZ(matriz[0][3].getZ());
			matriz[0][3].setZ(matriz[0][2].getZ());
			matriz[0][2].setZ(aux->getZ());
			aux->setF(matriz[0][3].getF());
			matriz[0][3].setF(matriz[0][2].getF());
			matriz[0][2].setF(aux->getF());

			aux->setX(matriz[1][3].getX());
			matriz[1][3].setX(matriz[1][2].getX());
			matriz[1][2].setX(aux->getX());
			aux->setY(matriz[1][3].getY());
			matriz[1][3].setY(matriz[1][2].getY());
			matriz[1][2].setY(aux->getY());
			aux->setZ(matriz[1][3].getZ());
			matriz[1][3].setZ(matriz[1][2].getZ());
			matriz[1][2].setZ(aux->getZ());
			aux->setF(matriz[1][3].getF());
			matriz[1][3].setF(matriz[1][2].getF());
			matriz[1][2].setF(aux->getF());
		}
		void Busqueda() {
			obj_busca->BuscarGrupos8_3v(bolsa8, matriz);
			obj_busca->BuscarGrupos4_3v(bolsa4, matriz);
			obj_busca->BuscarGrupos2_3v(bolsa2, matriz);
			obj_busca->BuscarGrupos1_3v(bolsa1, matriz);
			int num = 1;

			for (int i = 0; i < 1; i++) {
				if (bolsa8[i][0].getN() > 0 && bolsa8[i][0].getN() < 10) {
					labelGrupo->Text= labelGrupo->Text + "Grupo " + num + ": " + bolsa8[i][0].getN() + ", " + bolsa8[i][1].getN() + ", " + bolsa8[i][2].getN() + ", " + bolsa8[i][3].getN() + ", " + bolsa8[i][4].getN() + ", " + bolsa8[i][5].getN() + ", " + bolsa8[i][6].getN() + " y " + bolsa8[i][7].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 12; i++) {
				if (bolsa4[i][0].getN() > 0 && bolsa4[i][0].getN() < 10) {
					labelGrupo->Text= labelGrupo->Text +"Grupo " + num + ": " + bolsa4[i][0].getN() + ", " + bolsa4[i][1].getN() + ", " + bolsa4[i][2].getN() + " y " + bolsa4[i][3].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 10; i++) {
				if (bolsa2[i][0].getN() > 0 && bolsa2[i][0].getN() < 10) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa2[i][0].getN() + " y " + bolsa2[i][1].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 4; i++) {
				if (bolsa1[i][0].getN() > 0 && bolsa1[i][0].getN() < 10) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa1[i][0].getN() + "\n";
					num++;
				}
			}
		}
		void Suma_productos() {

			if (bolsa8[0][0].getCf() == true)
			{
				labelSuma->Text= labelSuma->Text + gcnew String(bolsa8[0][0].getS().c_str());
			}
			if (bolsa4[0][0].getCf() == true)
			{
				for (int i = 0; i < 12; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa4[i][0].getS().c_str());
					if (i != 11) {
						if (bolsa4[i + 1][0].getCf() == true)
						{
							labelSuma->Text = labelSuma->Text + " + ";
						}
					}
				}
				if (bolsa2[0][0].getCf() == true)
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa2[0][0].getCf() == true)
			{
				for (int i = 0; i < 10; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa2[i][0].getS().c_str()) + gcnew String(bolsa2[i][1].getS().c_str());
					if (i != 9) {
						if (bolsa2[i + 1][0].getCf() == true)
						{
							labelSuma->Text = labelSuma->Text + " + ";
						}
					}
				}
				if (bolsa1[0][0].getCf() == true)
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa1[0][0].getCf() == true)
			{
				for (int i = 0; i < 4; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa1[i][0].getS().c_str()) + gcnew String(bolsa1[i][1].getS().c_str()) + gcnew String(bolsa1[i][2].getS().c_str());
					if (i != 3) {
						if (bolsa1[i + 1][0].getCf() == true)
							labelSuma->Text = labelSuma->Text + " + ";
					}
				}
			}
		}

#pragma endregion
	private: System::Void btnMapak_Click(System::Object^ sender, System::EventArgs^ e) {
		int cont = 0;
		for (int i = 0; i < 2; ++i)
			for (int j = 0; j < 4; ++j) {
				dgvMapaK->Rows[i]->Cells[j]->Value = dgvTablaV->Rows[cont]->Cells[3]->Value;
				if (cont == 2) 
					dgvMapaK->Rows[i]->Cells[j]->Value = dgvTablaV->Rows[3]->Cells[3]->Value;
				if(cont == 3)
					dgvMapaK->Rows[i]->Cells[j]->Value = dgvTablaV->Rows[2]->Cells[3]->Value;
				if (cont == 6)
					dgvMapaK->Rows[i]->Cells[j]->Value = dgvTablaV->Rows[7]->Cells[3]->Value;
				if (cont == 7)
					dgvMapaK->Rows[i]->Cells[j]->Value = dgvTablaV->Rows[6]->Cells[3]->Value;

				cont++;
			}
		TresVariables();
		btnvalidated = true;
	}
private: System::Void btnGrupo_Click(System::Object^ sender, System::EventArgs^ e) {
	labelGrupo->Text = "";
	if (btnvalidated) 
		Busqueda();
}
private: System::Void btnSuma_Click(System::Object^ sender, System::EventArgs^ e) {
	labelSuma->Text = "";
	if (btnvalidated) {
		Suma_productos();
		btnvalidated = false;
	}
}
};
}
