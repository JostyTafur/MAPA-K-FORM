#pragma once

namespace MAPAKFORM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Integrantes
	/// </summary>
	public ref class Integrantes : public System::Windows::Forms::Form
	{
	public:
		Integrantes(String^name_foto, int integrante)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			if (integrante == 1) {
				pictureBox1->Image = gcnew Bitmap(name_foto);
				labelCarrera->Text = "Ingenieria de Software";
				labelcode->Text = "U202112272";
				labelCiclo->Text = "2do ciclo";
			}
			if (integrante == 2) {
				pictureBox1->Image = gcnew Bitmap(name_foto);
				labelCarrera->Text = "Ingenieria de Software";
				labelcode->Text = "U20201C579";
				labelCiclo->Text = "3er ciclo";
			}
			if (integrante == 3) {
				pictureBox1->Image = gcnew Bitmap(name_foto);
				labelCarrera->Text = "Ingenieria de Software";
				labelcode->Text = "U202023137";
				labelCiclo->Text = "2do ciclo";
			}
			if (integrante == 4) {
				pictureBox1->Image = gcnew Bitmap(name_foto);
				labelCarrera->Text = "Ingenieria de Sistemas \nde Información";
				labelcode->Text = "U20211B506";
				labelCiclo->Text = "2do ciclo";
			}
			if (integrante == 5) {
				pictureBox1->Image = gcnew Bitmap(name_foto);
				labelCarrera->Text = "Ingenieria de Software";
				labelcode->Text = "U20201C069";
				labelCiclo->Text = "3er ciclo";
			}
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Integrantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelcode;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelCarrera;
	private: System::Windows::Forms::Label^ labelCiclo;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelcode = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelCarrera = (gcnew System::Windows::Forms::Label());
			this->labelCiclo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(156, 65);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(372, 345);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(69, 472);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código: ";
			// 
			// labelcode
			// 
			this->labelcode->AutoSize = true;
			this->labelcode->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcode->ForeColor = System::Drawing::SystemColors::Control;
			this->labelcode->Location = System::Drawing::Point(265, 472);
			this->labelcode->Name = L"labelcode";
			this->labelcode->Size = System::Drawing::Size(0, 51);
			this->labelcode->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(63, 546);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 51);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Carrera: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(95, 655);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 51);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ciclo:";
			// 
			// labelCarrera
			// 
			this->labelCarrera->AutoSize = true;
			this->labelCarrera->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCarrera->ForeColor = System::Drawing::SystemColors::Control;
			this->labelCarrera->Location = System::Drawing::Point(265, 546);
			this->labelCarrera->Name = L"labelCarrera";
			this->labelCarrera->Size = System::Drawing::Size(0, 51);
			this->labelCarrera->TabIndex = 5;
			// 
			// labelCiclo
			// 
			this->labelCiclo->AutoSize = true;
			this->labelCiclo->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCiclo->ForeColor = System::Drawing::SystemColors::Control;
			this->labelCiclo->Location = System::Drawing::Point(265, 655);
			this->labelCiclo->Name = L"labelCiclo";
			this->labelCiclo->Size = System::Drawing::Size(0, 51);
			this->labelCiclo->TabIndex = 6;
			// 
			// Integrantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(722, 826);
			this->Controls->Add(this->labelCiclo);
			this->Controls->Add(this->labelCarrera);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelcode);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Integrantes";
			this->Text = L"Integrantes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
