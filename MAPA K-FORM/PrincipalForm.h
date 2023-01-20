#pragma once
#include "Form2v.h"
#include "Form3v.h"
#include "Form4v.h"
#include "PagePrincipal.h"
#include "Integrantes.h"
using namespace std;
namespace MAPAKFORM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PrincipalForm
	/// </summary>
	public ref class PrincipalForm : public System::Windows::Forms::Form
	{
	public:
		PrincipalForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panelIntegrantes->Visible = false;
			panelMenu->Visible = false;
			panelVariables->Visible = false;
			this->AbrirPanel(gcnew MAPAKFORM::PagePrincipal);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PrincipalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelSideMenu;
	private: System::Windows::Forms::Button^ button2v;
	private: System::Windows::Forms::Button^ button3v;
	private: System::Windows::Forms::Button^ button4v;
	protected:







	private: System::Windows::Forms::Button^ buttonMenu;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelVariables;

	private: System::Windows::Forms::Button^ buttonCantv;
	private: System::Windows::Forms::Panel^ panelMenu;


	private: System::Windows::Forms::Button^ buttonPagPri;





	private: System::Windows::Forms::Panel^ panelIntegrantes;
	private: System::Windows::Forms::Button^ buttonJT;


	private: System::Windows::Forms::Button^ buttonAS;

	private: System::Windows::Forms::Button^ buttonRP;

	private: System::Windows::Forms::Button^ buttonHD;

	private: System::Windows::Forms::Button^ buttonWR;

	private: System::Windows::Forms::Button^ buttonIntegrantes;
	private: System::Windows::Forms::Panel^ panelForm;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrincipalForm::typeid));
			this->panelSideMenu = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelIntegrantes = (gcnew System::Windows::Forms::Panel());
			this->buttonJT = (gcnew System::Windows::Forms::Button());
			this->buttonAS = (gcnew System::Windows::Forms::Button());
			this->buttonRP = (gcnew System::Windows::Forms::Button());
			this->buttonHD = (gcnew System::Windows::Forms::Button());
			this->buttonWR = (gcnew System::Windows::Forms::Button());
			this->buttonIntegrantes = (gcnew System::Windows::Forms::Button());
			this->panelVariables = (gcnew System::Windows::Forms::Panel());
			this->button4v = (gcnew System::Windows::Forms::Button());
			this->button3v = (gcnew System::Windows::Forms::Button());
			this->button2v = (gcnew System::Windows::Forms::Button());
			this->buttonCantv = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->buttonPagPri = (gcnew System::Windows::Forms::Button());
			this->buttonMenu = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelForm = (gcnew System::Windows::Forms::Panel());
			this->panelSideMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelIntegrantes->SuspendLayout();
			this->panelVariables->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelSideMenu
			// 
			this->panelSideMenu->BackColor = System::Drawing::Color::Black;
			this->panelSideMenu->Controls->Add(this->pictureBox1);
			this->panelSideMenu->Controls->Add(this->panelIntegrantes);
			this->panelSideMenu->Controls->Add(this->buttonIntegrantes);
			this->panelSideMenu->Controls->Add(this->panelVariables);
			this->panelSideMenu->Controls->Add(this->buttonCantv);
			this->panelSideMenu->Controls->Add(this->panelMenu);
			this->panelSideMenu->Controls->Add(this->buttonMenu);
			this->panelSideMenu->Controls->Add(this->panel1);
			this->panelSideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSideMenu->Location = System::Drawing::Point(0, 0);
			this->panelSideMenu->Name = L"panelSideMenu";
			this->panelSideMenu->Size = System::Drawing::Size(286, 826);
			this->panelSideMenu->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(62, 639);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(161, 156);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelIntegrantes
			// 
			this->panelIntegrantes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->panelIntegrantes->Controls->Add(this->buttonJT);
			this->panelIntegrantes->Controls->Add(this->buttonAS);
			this->panelIntegrantes->Controls->Add(this->buttonRP);
			this->panelIntegrantes->Controls->Add(this->buttonHD);
			this->panelIntegrantes->Controls->Add(this->buttonWR);
			this->panelIntegrantes->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelIntegrantes->Location = System::Drawing::Point(0, 404);
			this->panelIntegrantes->Name = L"panelIntegrantes";
			this->panelIntegrantes->Size = System::Drawing::Size(286, 210);
			this->panelIntegrantes->TabIndex = 8;
			// 
			// buttonJT
			// 
			this->buttonJT->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonJT->FlatAppearance->BorderSize = 0;
			this->buttonJT->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonJT->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonJT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonJT->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonJT->Location = System::Drawing::Point(0, 160);
			this->buttonJT->Name = L"buttonJT";
			this->buttonJT->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->buttonJT->Size = System::Drawing::Size(286, 40);
			this->buttonJT->TabIndex = 7;
			this->buttonJT->Text = L"Josty Gerardo Tafur Gonzales";
			this->buttonJT->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonJT->UseVisualStyleBackColor = true;
			this->buttonJT->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonJT_Click);
			// 
			// buttonAS
			// 
			this->buttonAS->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAS->FlatAppearance->BorderSize = 0;
			this->buttonAS->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonAS->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonAS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAS->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonAS->Location = System::Drawing::Point(0, 120);
			this->buttonAS->Name = L"buttonAS";
			this->buttonAS->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->buttonAS->Size = System::Drawing::Size(286, 40);
			this->buttonAS->TabIndex = 6;
			this->buttonAS->Text = L"Alexander Josue Suclupe Paucar";
			this->buttonAS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAS->UseVisualStyleBackColor = true;
			this->buttonAS->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonAS_Click);
			// 
			// buttonRP
			// 
			this->buttonRP->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonRP->FlatAppearance->BorderSize = 0;
			this->buttonRP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonRP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonRP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRP->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonRP->Location = System::Drawing::Point(0, 80);
			this->buttonRP->Name = L"buttonRP";
			this->buttonRP->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->buttonRP->Size = System::Drawing::Size(286, 40);
			this->buttonRP->TabIndex = 5;
			this->buttonRP->Text = L"Rafael Wimer Primo Estrada";
			this->buttonRP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRP->UseVisualStyleBackColor = true;
			this->buttonRP->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonRP_Click);
			// 
			// buttonHD
			// 
			this->buttonHD->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonHD->FlatAppearance->BorderSize = 0;
			this->buttonHD->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonHD->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonHD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHD->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonHD->Location = System::Drawing::Point(0, 40);
			this->buttonHD->Name = L"buttonHD";
			this->buttonHD->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->buttonHD->Size = System::Drawing::Size(286, 40);
			this->buttonHD->TabIndex = 4;
			this->buttonHD->Text = L"Henry Josué Diaz Huarcaya";
			this->buttonHD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonHD->UseVisualStyleBackColor = true;
			this->buttonHD->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonHD_Click);
			// 
			// buttonWR
			// 
			this->buttonWR->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonWR->FlatAppearance->BorderSize = 0;
			this->buttonWR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonWR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonWR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWR->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonWR->Location = System::Drawing::Point(0, 0);
			this->buttonWR->Name = L"buttonWR";
			this->buttonWR->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->buttonWR->Size = System::Drawing::Size(286, 40);
			this->buttonWR->TabIndex = 3;
			this->buttonWR->Text = L"William Martin Riega Ocharan";
			this->buttonWR->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonWR->UseVisualStyleBackColor = true;
			this->buttonWR->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonWR_Click);
			// 
			// buttonIntegrantes
			// 
			this->buttonIntegrantes->BackColor = System::Drawing::Color::Black;
			this->buttonIntegrantes->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonIntegrantes->FlatAppearance->BorderSize = 0;
			this->buttonIntegrantes->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonIntegrantes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->buttonIntegrantes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonIntegrantes->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonIntegrantes->ForeColor = System::Drawing::Color::White;
			this->buttonIntegrantes->Location = System::Drawing::Point(0, 359);
			this->buttonIntegrantes->Name = L"buttonIntegrantes";
			this->buttonIntegrantes->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->buttonIntegrantes->Size = System::Drawing::Size(286, 45);
			this->buttonIntegrantes->TabIndex = 7;
			this->buttonIntegrantes->Text = L"Integrantes";
			this->buttonIntegrantes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonIntegrantes->UseVisualStyleBackColor = false;
			this->buttonIntegrantes->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonIntegrantes_Click);
			// 
			// panelVariables
			// 
			this->panelVariables->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->panelVariables->Controls->Add(this->button4v);
			this->panelVariables->Controls->Add(this->button3v);
			this->panelVariables->Controls->Add(this->button2v);
			this->panelVariables->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelVariables->Location = System::Drawing::Point(0, 239);
			this->panelVariables->Name = L"panelVariables";
			this->panelVariables->Size = System::Drawing::Size(286, 120);
			this->panelVariables->TabIndex = 6;
			// 
			// button4v
			// 
			this->button4v->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4v->FlatAppearance->BorderSize = 0;
			this->button4v->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button4v->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4v->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4v->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4v->Location = System::Drawing::Point(0, 80);
			this->button4v->Name = L"button4v";
			this->button4v->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button4v->Size = System::Drawing::Size(286, 40);
			this->button4v->TabIndex = 0;
			this->button4v->Text = L"4 Variables";
			this->button4v->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4v->UseVisualStyleBackColor = true;
			this->button4v->Click += gcnew System::EventHandler(this, &PrincipalForm::button4v_Click);
			// 
			// button3v
			// 
			this->button3v->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3v->FlatAppearance->BorderSize = 0;
			this->button3v->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button3v->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3v->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3v->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3v->Location = System::Drawing::Point(0, 40);
			this->button3v->Name = L"button3v";
			this->button3v->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button3v->Size = System::Drawing::Size(286, 40);
			this->button3v->TabIndex = 1;
			this->button3v->Text = L"3 Variables";
			this->button3v->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3v->UseVisualStyleBackColor = true;
			this->button3v->Click += gcnew System::EventHandler(this, &PrincipalForm::button3v_Click);
			// 
			// button2v
			// 
			this->button2v->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2v->FlatAppearance->BorderSize = 0;
			this->button2v->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button2v->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2v->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2v->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2v->Location = System::Drawing::Point(0, 0);
			this->button2v->Name = L"button2v";
			this->button2v->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button2v->Size = System::Drawing::Size(286, 40);
			this->button2v->TabIndex = 2;
			this->button2v->Text = L"2 Variables";
			this->button2v->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2v->UseVisualStyleBackColor = true;
			this->button2v->Click += gcnew System::EventHandler(this, &PrincipalForm::button2v_Click);
			// 
			// buttonCantv
			// 
			this->buttonCantv->BackColor = System::Drawing::Color::Black;
			this->buttonCantv->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonCantv->FlatAppearance->BorderSize = 0;
			this->buttonCantv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonCantv->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->buttonCantv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCantv->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCantv->ForeColor = System::Drawing::Color::White;
			this->buttonCantv->Location = System::Drawing::Point(0, 194);
			this->buttonCantv->Name = L"buttonCantv";
			this->buttonCantv->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->buttonCantv->Size = System::Drawing::Size(286, 45);
			this->buttonCantv->TabIndex = 3;
			this->buttonCantv->Text = L"Variables";
			this->buttonCantv->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonCantv->UseVisualStyleBackColor = false;
			this->buttonCantv->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonCantv_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->panelMenu->Controls->Add(this->buttonPagPri);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelMenu->Location = System::Drawing::Point(0, 154);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(286, 40);
			this->panelMenu->TabIndex = 5;
			// 
			// buttonPagPri
			// 
			this->buttonPagPri->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonPagPri->FlatAppearance->BorderSize = 0;
			this->buttonPagPri->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonPagPri->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonPagPri->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPagPri->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonPagPri->Location = System::Drawing::Point(0, 0);
			this->buttonPagPri->Name = L"buttonPagPri";
			this->buttonPagPri->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->buttonPagPri->Size = System::Drawing::Size(286, 40);
			this->buttonPagPri->TabIndex = 4;
			this->buttonPagPri->Text = L"Pagina Principal";
			this->buttonPagPri->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPagPri->UseVisualStyleBackColor = true;
			this->buttonPagPri->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonPagPri_Click);
			// 
			// buttonMenu
			// 
			this->buttonMenu->BackColor = System::Drawing::Color::Black;
			this->buttonMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonMenu->FlatAppearance->BorderSize = 0;
			this->buttonMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->buttonMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->buttonMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMenu->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMenu->ForeColor = System::Drawing::Color::White;
			this->buttonMenu->Location = System::Drawing::Point(0, 109);
			this->buttonMenu->Name = L"buttonMenu";
			this->buttonMenu->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->buttonMenu->Size = System::Drawing::Size(286, 45);
			this->buttonMenu->TabIndex = 1;
			this->buttonMenu->Text = L"Menu";
			this->buttonMenu->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonMenu->UseVisualStyleBackColor = false;
			this->buttonMenu->Click += gcnew System::EventHandler(this, &PrincipalForm::buttonMenu_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 109);
			this->panel1->TabIndex = 0;
			// 
			// panelForm
			// 
			this->panelForm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelForm->Location = System::Drawing::Point(292, 0);
			this->panelForm->Name = L"panelForm";
			this->panelForm->Size = System::Drawing::Size(722, 826);
			this->panelForm->TabIndex = 0;
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1011, 826);
			this->Controls->Add(this->panelForm);
			this->Controls->Add(this->panelSideMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PrincipalForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MAPA - K";
			this->panelSideMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelIntegrantes->ResumeLayout(false);
			this->panelVariables->ResumeLayout(false);
			this->panelMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
private: System::Void buttonMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panelMenu->Visible == false) {
		if (panelIntegrantes->Visible == true) panelIntegrantes->Visible = false;
		if (panelVariables->Visible == true) panelVariables->Visible = false;
		panelMenu->Visible = true;
	}
	else
		panelMenu->Visible = false;
    }
private: System::Void buttonCantv_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panelVariables->Visible == false) {
		if (panelIntegrantes->Visible == true) panelIntegrantes->Visible = false;
		if (panelMenu->Visible == true) panelMenu->Visible = false;
		panelVariables->Visible = true;
	}
	else
		panelVariables->Visible = false;
}
private: System::Void buttonIntegrantes_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panelIntegrantes->Visible == false) {
		if (panelVariables->Visible == true) panelVariables->Visible = false;
		if (panelMenu->Visible == true) panelMenu->Visible = false;
		panelIntegrantes->Visible = true;
	}
	else
		panelIntegrantes->Visible = false;
}
	template<class T>
	void AbrirPanel(T formHijo) {
		if (this->panelForm->Controls->Count > 0) {
			this->panelForm->Controls->RemoveAt(0);
		}
		formHijo->TopLevel = false;
	    formHijo->Dock = DockStyle::Fill;
	    this->panelForm->Controls->Add(formHijo);
	    this->panelForm->Tag = formHijo;
		formHijo->Show();
	   }
private: System::Void button2v_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Form2v);
}
private: System::Void button3v_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Form3v);
}
private: System::Void button4v_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Form4v);
}
private: System::Void buttonPagPri_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::PagePrincipal);
}
private: System::Void buttonWR_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Integrantes("Foto_William.jpeg", 1));
}
private: System::Void buttonHD_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Integrantes("Foto_Henry.jpeg", 2));
}
private: System::Void buttonRP_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Integrantes("Foto_Rafael.jpeg", 3));
}
private: System::Void buttonAS_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Integrantes("Foto_Alexander.jpeg", 4));
}
private: System::Void buttonJT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew MAPAKFORM::Integrantes("Foto_Josty.jpeg", 5));
}
};

}
