#pragma once
#include "Funcion4v.h"
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
	/// Summary for Form4v
	/// </summary>
	public ref class Form4v : public System::Windows::Forms::Form
	{
	public:
		Form4v(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dgvTablaV->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgvMapaK->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgvTablaV->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGreen;
			dgvTablaV->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGreen;
			dgvTablaV->Columns[2]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGreen;
			dgvTablaV->Columns[3]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGreen;
			int n = 16;
			dgvTablaV->RowCount = n;
			for (int i = 0; i < n; i++) {
				dgvTablaV->Rows[i]->HeaderCell->Value = i.ToString();
			}
			for (int i = 0; i < n; i++) {
				if (i < n / 2)
					dgvTablaV->Rows[i]->Cells[0]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[0]->Value = "1";
				if (i < n / 4 || i >= n / 2 && i < (n * 3) / 4)
					dgvTablaV->Rows[i]->Cells[1]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[1]->Value = "1";
				if (i <n/8 || i>=n/4 && i<(n*3)/8 || i >= n -8 && i < n-6 || i>=n-4 && i<n-2)
					dgvTablaV->Rows[i]->Cells[2]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[2]->Value = "1";
				if (i % 2 == 0)
					dgvTablaV->Rows[i]->Cells[3]->Value = "0";
				else
					dgvTablaV->Rows[i]->Cells[3]->Value = "1";
			}

			for (int i = 0; i < n; ++i) {
				dgvTablaV->Rows[i]->Cells[4]->Value = "0";
			}

			dgvMapaK->RowCount = 4;
			dgvMapaK->Rows[0]->HeaderCell->Value = "00";
			dgvMapaK->Rows[1]->HeaderCell->Value = "01";
			dgvMapaK->Rows[2]->HeaderCell->Value = "11";
			dgvMapaK->Rows[3]->HeaderCell->Value = "10";
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
		bolsa** bolsa16;
		funcion4v** matriz;
		bool btnvalidated = false;
		~Form4v()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dgvTablaV;

	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dgvMapaK;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ labelGrupo;
	private: System::Windows::Forms::Label^ labelSuma;
	private: System::Windows::Forms::Button^ btnSuma;
	private: System::Windows::Forms::Button^ btnGrupo;
	private: System::Windows::Forms::Button^ btnMapaK;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dgvTablaV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnMapaK = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dgvMapaK = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnGrupo = (gcnew System::Windows::Forms::Button());
			this->labelGrupo = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->labelSuma = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(27, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 563);
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
			this->dgvTablaV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvTablaV->DefaultCellStyle = dataGridViewCellStyle5;
			this->dgvTablaV->Location = System::Drawing::Point(6, 33);
			this->dgvTablaV->Name = L"dgvTablaV";
			this->dgvTablaV->RowHeadersVisible = false;
			this->dgvTablaV->RowHeadersWidth = 51;
			this->dgvTablaV->RowTemplate->Height = 24;
			this->dgvTablaV->Size = System::Drawing::Size(255, 515);
			this->dgvTablaV->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"A";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"B";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"C";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"D";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"f";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->btnMapaK);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->dgvMapaK);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox2->Location = System::Drawing::Point(319, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(334, 229);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"MAPA DE KARNAUGH";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label18->Location = System::Drawing::Point(240, 168);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 17);
			this->label18->TabIndex = 30;
			this->label18->Text = L"15";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label17->Location = System::Drawing::Point(175, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 17);
			this->label17->TabIndex = 29;
			this->label17->Text = L"14";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label16->Location = System::Drawing::Point(108, 168);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 17);
			this->label16->TabIndex = 28;
			this->label16->Text = L"13";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label15->Location = System::Drawing::Point(301, 139);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 17);
			this->label15->TabIndex = 27;
			this->label15->Text = L"12";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label14->Location = System::Drawing::Point(240, 139);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 17);
			this->label14->TabIndex = 26;
			this->label14->Text = L"11";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label13->Location = System::Drawing::Point(175, 139);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 17);
			this->label13->TabIndex = 25;
			this->label13->Text = L"10";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label12->Location = System::Drawing::Point(301, 168);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"16";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label11->Location = System::Drawing::Point(116, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(309, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"8";
			// 
			// btnMapaK
			// 
			this->btnMapaK->BackColor = System::Drawing::Color::White;
			this->btnMapaK->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMapaK->Location = System::Drawing::Point(231, 16);
			this->btnMapaK->Name = L"btnMapaK";
			this->btnMapaK->Size = System::Drawing::Size(97, 30);
			this->btnMapaK->TabIndex = 3;
			this->btnMapaK->Text = L"Crear";
			this->btnMapaK->UseVisualStyleBackColor = false;
			this->btnMapaK->Click += gcnew System::EventHandler(this, &Form4v::btnMapaK_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(248, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(183, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(248, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Location = System::Drawing::Point(116, 82);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 17);
			this->label10->TabIndex = 15;
			this->label10->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(309, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label9->Location = System::Drawing::Point(183, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(116, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"5";
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
				this->Column6, this->Column7,
					this->Column8, this->Column9
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvMapaK->DefaultCellStyle = dataGridViewCellStyle6;
			this->dgvMapaK->Location = System::Drawing::Point(6, 52);
			this->dgvMapaK->Name = L"dgvMapaK";
			this->dgvMapaK->RowHeadersWidth = 51;
			this->dgvMapaK->RowTemplate->Height = 24;
			this->dgvMapaK->Size = System::Drawing::Size(322, 171);
			this->dgvMapaK->TabIndex = 0;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"00";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"01";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"11";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"10";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnGrupo);
			this->groupBox3->Controls->Add(this->labelGrupo);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox3->Location = System::Drawing::Point(319, 259);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(391, 328);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"AGRUPACIONES";
			// 
			// btnGrupo
			// 
			this->btnGrupo->BackColor = System::Drawing::Color::White;
			this->btnGrupo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnGrupo->Location = System::Drawing::Point(288, 9);
			this->btnGrupo->Name = L"btnGrupo";
			this->btnGrupo->Size = System::Drawing::Size(97, 30);
			this->btnGrupo->TabIndex = 2;
			this->btnGrupo->Text = L"Agrupar";
			this->btnGrupo->UseVisualStyleBackColor = false;
			this->btnGrupo->Click += gcnew System::EventHandler(this, &Form4v::btnGrupo_Click);
			// 
			// labelGrupo
			// 
			this->labelGrupo->AutoSize = true;
			this->labelGrupo->BackColor = System::Drawing::Color::White;
			this->labelGrupo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGrupo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelGrupo->Location = System::Drawing::Point(6, 42);
			this->labelGrupo->MinimumSize = System::Drawing::Size(380, 280);
			this->labelGrupo->Name = L"labelGrupo";
			this->labelGrupo->Padding = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->labelGrupo->Size = System::Drawing::Size(380, 280);
			this->labelGrupo->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnSuma);
			this->groupBox4->Controls->Add(this->labelSuma);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox4->Location = System::Drawing::Point(12, 605);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(698, 183);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"SUMA DE PRODUCTOS";
			// 
			// btnSuma
			// 
			this->btnSuma->BackColor = System::Drawing::Color::White;
			this->btnSuma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSuma->Location = System::Drawing::Point(595, 21);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(97, 30);
			this->btnSuma->TabIndex = 1;
			this->btnSuma->Text = L"Resolver";
			this->btnSuma->UseVisualStyleBackColor = false;
			this->btnSuma->Click += gcnew System::EventHandler(this, &Form4v::btnSuma_Click);
			// 
			// labelSuma
			// 
			this->labelSuma->AutoSize = true;
			this->labelSuma->BackColor = System::Drawing::Color::White;
			this->labelSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSuma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelSuma->Location = System::Drawing::Point(12, 61);
			this->labelSuma->MinimumSize = System::Drawing::Size(680, 110);
			this->labelSuma->Name = L"labelSuma";
			this->labelSuma->Padding = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->labelSuma->Size = System::Drawing::Size(680, 110);
			this->labelSuma->TabIndex = 0;
			// 
			// Form4v
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(722, 826);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form4v";
			this->Text = L"Form4v";
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

		void CuatroVariables() {

			bolsa1 = new bolsa * [9];
			for (int i = 0; i < 9; i++)
				bolsa1[i] = new bolsa[4];

			bolsa2 = new bolsa * [24];
			for (int i = 0; i < 24; i++)
				bolsa2[i] = new bolsa[3];

			bolsa4 = new bolsa * [18];
			for (int i = 0; i < 18; i++)
				bolsa4[i] = new bolsa[4];

			bolsa8 = new bolsa * [7];
			for (int i = 0; i < 7; i++)
				bolsa8[i] = new bolsa[8];

			bolsa16 = new bolsa * [1];
			for (int i = 0; i < 1; i++)
				bolsa16[i] = new bolsa[16];

			matriz = new funcion4v * [4];
			for (int i = 0; i < 4; i++)
				matriz[i] = new funcion4v[4];

			int auxX = 0;
			int auxY = 0;
			int auxZ = 0;
			int auxW = 0;
			int auxF = 0;
			int nr = 1;
			// Numero de referencia
			for (int i = 0; i < 4; i++) {
				if (i == 1 || i == 3) auxY = 1;
				if (i == 0 || i == 2) auxY = 0;
				for (int j = 0; j < 4; j++) {
					if (j % 2 == 0) auxW = 0;
					if (j % 2 != 0) auxW = 1;
					matriz[i][j].setX(auxX);
					matriz[i][j].setY(auxY);
					matriz[i][j].setZ(auxZ);
					matriz[i][j].setW(auxW);
					matriz[i][j].setR(nr);
					nr++;
					if (j == 1) auxZ++;
				}
				auxZ = 0;
				if (i == 1)	auxX++;
			}
			int cont = 0;
			for (int i = 0; i < 4; i++)
				for (int j = 0; j < 4; j++) {
					matriz[i][j].setF(Convert::ToInt32(dgvTablaV->Rows[cont]->Cells[4]->Value));
					cont++;
				}

			funcion4v* aux = new funcion4v();
			// cambiar valores
			for (int i = 0; i < 4; i++) {
				//x
				aux->setX(matriz[i][3].getX());
				matriz[i][3].setX(matriz[i][2].getX());
				matriz[i][2].setX(aux->getX());
				//y
				aux->setY(matriz[i][3].getY());
				matriz[i][3].setY(matriz[i][2].getY());
				matriz[i][2].setY(aux->getY());
				//z
				aux->setZ(matriz[i][3].getZ());
				matriz[i][3].setZ(matriz[i][2].getZ());
				matriz[i][2].setZ(aux->getZ());
				//w
				aux->setW(matriz[i][3].getW());
				matriz[i][3].setW(matriz[i][2].getW());
				matriz[i][2].setW(aux->getW());
				//f
				aux->setF(matriz[i][3].getF());
				matriz[i][3].setF(matriz[i][2].getF());
				matriz[i][2].setF(aux->getF());
			}

			for (int j = 0; j < 4; j++) {
				//x
				aux->setX(matriz[2][j].getX());
				matriz[2][j].setX(matriz[3][j].getX());
				matriz[3][j].setX(aux->getX());
				//y
				aux->setY(matriz[2][j].getY());
				matriz[2][j].setY(matriz[3][j].getY());
				matriz[3][j].setY(aux->getY());
				//z
				aux->setZ(matriz[2][j].getZ());
				matriz[2][j].setZ(matriz[3][j].getZ());
				matriz[3][j].setZ(aux->getZ());
				//w
				aux->setW(matriz[2][j].getW());
				matriz[2][j].setW(matriz[3][j].getW());
				matriz[3][j].setW(aux->getW());
				//f
				aux->setF(matriz[2][j].getF());
				matriz[2][j].setF(matriz[3][j].getF());
				matriz[3][j].setF(aux->getF());
			}


		}
		void Busqueda() {
			obj_busca->BuscarGrupos16_4v(bolsa16, matriz);
			obj_busca->BuscarGrupos8_4v(bolsa8, matriz);
			obj_busca->BuscarGrupos4_4v(bolsa4, matriz);
			obj_busca->BuscarGrupos2_4v(bolsa2, matriz);
			obj_busca->BuscarGrupos1_4v(bolsa1, matriz);


			int num = 1;
			for (int i = 0; i < 1; i++) {
				if (bolsa16[i][0].getN() > 0 && bolsa16[i][0].getN() < 17) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa16[i][0].getN() + ", " + bolsa16[i][1].getN() + ", " + bolsa16[i][2].getN() + ", " + bolsa16[i][3].getN() + ", " + bolsa16[i][4].getN() + ", " + bolsa16[i][5].getN() + ", " + bolsa16[i][6].getN() + ", " + bolsa16[i][7].getN() + ", " + bolsa16[i][8].getN() + ", " + bolsa16[i][9].getN() + ", " + bolsa16[i][10].getN() + ", " + bolsa16[i][11].getN() + ", " + bolsa16[i][12].getN() + ", " + bolsa16[i][13].getN() + ", " + bolsa16[i][14].getN() + " y " + bolsa16[i][15].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 7; i++) {
				if (bolsa8[i][0].getN() > 0 && bolsa8[i][0].getN() < 17) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa8[i][0].getN() + ", " + bolsa8[i][1].getN() + ", " + bolsa8[i][2].getN() + ", " + bolsa8[i][3].getN() + ", " + bolsa8[i][4].getN() + ", " + bolsa8[i][5].getN() + ", " + bolsa8[i][6].getN() + " y " + bolsa8[i][7].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 18; i++) {
				if (bolsa4[i][0].getN() > 0 && bolsa4[i][0].getN() < 17) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa4[i][0].getN() + ", " + bolsa4[i][1].getN() + ", " + bolsa4[i][2].getN() + " y " + bolsa4[i][3].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 24; i++) {
				if (bolsa2[i][0].getN() > 0 && bolsa2[i][0].getN() < 17) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa2[i][0].getN() + " y " + bolsa2[i][1].getN() + "\n";
					num++;
				}

			}
			for (int i = 0; i < 9; i++) {
				if (bolsa1[i][0].getN() > 0 && bolsa1[i][0].getN() < 17) {
					labelGrupo->Text = labelGrupo->Text + "Grupo " + num + ": " + bolsa1[i][0].getN() + "\n";
					num++;
				}
			}
		}
			

		void Suma_productos(){
			if (bolsa16[0][0].getCf() == true)
			{
				for (int i = 0; i < 1; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa16[i][0].getS().c_str());
				}
			}
			if (bolsa8[0][0].getCf() == true) {
				for (int i = 0; i < 7; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa8[i][0].getS().c_str());
					if (i != 6 && bolsa8[i + 1][0].getCf() == true)
						labelSuma->Text = labelSuma->Text + " + ";
				}
				if (bolsa4[0][0].getCf() == true)
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa4[0][0].getCf() == true) {
				for (int i = 0; i < 12; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa4[i][0].getS().c_str()) + gcnew String(bolsa4[i][1].getS().c_str());
					if (i != 11 && bolsa4[i + 1][0].getCf() == true)
						labelSuma->Text = labelSuma->Text + " + ";
				}
				if (bolsa2[0][0].getCf() == true)
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa2[0][0].getCf() == true) {
				for (int i = 0; i < 24; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa2[i][0].getS().c_str()) + gcnew String(bolsa2[i][1].getS().c_str()) + gcnew String(bolsa2[i][2].getS().c_str());
					if (i != 23 && bolsa2[i + 1][0].getCf() == true)
						labelSuma->Text = labelSuma->Text + " + ";
				}
				if (bolsa1[0][0].getCf() == true)
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa1[0][0].getCf() == true)
				for (int i = 0; i < 9; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa1[i][0].getS().c_str()) + gcnew String(bolsa1[i][1].getS().c_str()) + gcnew String(bolsa1[i][2].getS().c_str()) + gcnew String(bolsa1[i][3].getS().c_str());
					if (i != 8 && bolsa1[i + 1][0].getCf() == true)
						labelSuma->Text = labelSuma->Text + " + ";
				}
			_getch();

		}
#pragma endregion
	private: System::Void btnMapaK_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvMapaK->Rows[0]->Cells[0]->Value = dgvTablaV->Rows[0]->Cells[4]->Value;
		dgvMapaK->Rows[0]->Cells[1]->Value = dgvTablaV->Rows[1]->Cells[4]->Value;
		dgvMapaK->Rows[0]->Cells[2]->Value = dgvTablaV->Rows[3]->Cells[4]->Value;
		dgvMapaK->Rows[0]->Cells[3]->Value = dgvTablaV->Rows[2]->Cells[4]->Value;
		dgvMapaK->Rows[1]->Cells[0]->Value = dgvTablaV->Rows[4]->Cells[4]->Value;
		dgvMapaK->Rows[1]->Cells[1]->Value = dgvTablaV->Rows[5]->Cells[4]->Value;
		dgvMapaK->Rows[1]->Cells[2]->Value = dgvTablaV->Rows[7]->Cells[4]->Value;
		dgvMapaK->Rows[1]->Cells[3]->Value = dgvTablaV->Rows[6]->Cells[4]->Value;
		dgvMapaK->Rows[2]->Cells[0]->Value = dgvTablaV->Rows[12]->Cells[4]->Value;
		dgvMapaK->Rows[2]->Cells[1]->Value = dgvTablaV->Rows[13]->Cells[4]->Value;
		dgvMapaK->Rows[2]->Cells[2]->Value = dgvTablaV->Rows[15]->Cells[4]->Value;
		dgvMapaK->Rows[2]->Cells[3]->Value = dgvTablaV->Rows[14]->Cells[4]->Value;
		dgvMapaK->Rows[3]->Cells[0]->Value = dgvTablaV->Rows[8]->Cells[4]->Value;
		dgvMapaK->Rows[3]->Cells[1]->Value = dgvTablaV->Rows[9]->Cells[4]->Value;
		dgvMapaK->Rows[3]->Cells[2]->Value = dgvTablaV->Rows[11]->Cells[4]->Value;
		dgvMapaK->Rows[3]->Cells[3]->Value = dgvTablaV->Rows[10]->Cells[4]->Value;
		CuatroVariables();
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
