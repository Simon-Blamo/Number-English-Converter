#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <msclr\marshal_cppstd.h>
namespace NumEng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	vector<string> validWords = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
	"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifthteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen",
	"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety", "Hundred", "Thousand", "Million",
	"Billion", "Trillion", "Quadrillion", "Quintillion", "-", "And", "Point" };

	vector<string> mSet1 = { "0","1", "2", "3", "4", "5", "6", "7", "8", "9", "11", "12", "13", "14", "15", "16", "17", "18", "19" };

	vector<string> mSet2 = { "Zero ", "One ","Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ",
	"Fifthteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

	vector<pair <string, string>> sets = { {"0", "Zero "}, {"1", "One "}, {"2", "Two "}, {"3", "Three "}, {"4", "Four "}, {"5", "Five "}, {"6", "Six "}, {"7", "Seven "},
	{"8", "Eight "}, {"9", "Nine "}, {"11", "Eleven "}, {"12", "Twelve "}, {"13", "Thirteen "}, {"14", "Fourteen "}, {"15", "Fifthteen "}, {"16", "Sixteen "}, {"17", "Seventeen "},
	{"18", "Eighteen "}, {"19", "Nineteen "} };

	vector<string> digits = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "." };

	vector<string> tens = { "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety " };

	vector<pair <int, string>> units = { {0, "Hundred "}, {1, "Thousand "}, {2, "Million "}, {3, "Billion "}, {4, "Trillion "}, {5, "Quadrillion "}, {6, "Quintillion "} };

	vector<string> mUnits2 = { "Hundred ", "Thousand ", "Million ", "Billion ", "Trillion ", "Quadrillion ", "Quintillion " };

	vector<string> specInserts = { "-", "and ", "point " };

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1_Inner;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ userText1;

	private: System::Windows::Forms::Button^ tab1_E2N;
	private: System::Windows::Forms::Button^ tab2_N2E;
	private: System::Windows::Forms::TextBox^ userText2;

	private: System::Windows::Forms::Button^ tab1_C2E;
	private: System::Windows::Forms::Button^ tab2_C2N;
	private: System::Windows::Forms::Button^ HelpButton1;
	private: System::Windows::Forms::Button^ HelpButton2;
	private: System::Windows::Forms::PictureBox^ pictureBoxInner1;
	private: System::Windows::Forms::PictureBox^ pictureBoxBorder1;
	private: System::Windows::Forms::PictureBox^ pictureBoxInner2;
	private: System::Windows::Forms::PictureBox^ pictureBoxBorder2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ ClearButton1;
	private: System::Windows::Forms::Button^ ClearButton2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	public:

	public:
		void setRichBoxText1(String^ w) {
			this->richTextBox1->Text = w;
		}
		void setRichBoxText2(String^ w) {
			this->richTextBox2->Text = w;
		}
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ClearButton1 = (gcnew System::Windows::Forms::Button());
			this->HelpButton1 = (gcnew System::Windows::Forms::Button());
			this->tab1_E2N = (gcnew System::Windows::Forms::Button());
			this->tab1_C2E = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBoxInner1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBorder1 = (gcnew System::Windows::Forms::PictureBox());
			this->userText1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->ClearButton2 = (gcnew System::Windows::Forms::Button());
			this->HelpButton2 = (gcnew System::Windows::Forms::Button());
			this->tab2_N2E = (gcnew System::Windows::Forms::Button());
			this->tab2_C2N = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBoxInner2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBorder2 = (gcnew System::Windows::Forms::PictureBox());
			this->userText2 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInner1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBorder1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInner2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBorder2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(382, 559);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Menu;
			this->tabPage1->Controls->Add(this->ClearButton1);
			this->tabPage1->Controls->Add(this->HelpButton1);
			this->tabPage1->Controls->Add(this->tab1_E2N);
			this->tabPage1->Controls->Add(this->tab1_C2E);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->pictureBoxInner1);
			this->tabPage1->Controls->Add(this->pictureBoxBorder1);
			this->tabPage1->Controls->Add(this->userText1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(374, 533);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"N2E";
			// 
			// ClearButton1
			// 
			this->ClearButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton1->Location = System::Drawing::Point(10, 461);
			this->ClearButton1->Name = L"ClearButton1";
			this->ClearButton1->Size = System::Drawing::Size(75, 23);
			this->ClearButton1->TabIndex = 6;
			this->ClearButton1->Text = L"Clear";
			this->ClearButton1->UseVisualStyleBackColor = true;
			this->ClearButton1->Click += gcnew System::EventHandler(this, &MainForm::ClearButton1_Click);
			// 
			// HelpButton1
			// 
			this->HelpButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->HelpButton1->Location = System::Drawing::Point(10, 490);
			this->HelpButton1->Name = L"HelpButton1";
			this->HelpButton1->Size = System::Drawing::Size(75, 23);
			this->HelpButton1->TabIndex = 1;
			this->HelpButton1->Text = L"Help";
			this->HelpButton1->UseVisualStyleBackColor = true;
			this->HelpButton1->Click += gcnew System::EventHandler(this, &MainForm::HelpButton1_Click);
			// 
			// tab1_E2N
			// 
			this->tab1_E2N->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->tab1_E2N->Enabled = false;
			this->tab1_E2N->Location = System::Drawing::Point(125, 465);
			this->tab1_E2N->Name = L"tab1_E2N";
			this->tab1_E2N->Size = System::Drawing::Size(113, 23);
			this->tab1_E2N->TabIndex = 2;
			this->tab1_E2N->Text = L"Convert E2N";
			this->tab1_E2N->UseVisualStyleBackColor = true;
			this->tab1_E2N->Click += gcnew System::EventHandler(this, &MainForm::tab1_E2N_Click);
			// 
			// tab1_C2E
			// 
			this->tab1_C2E->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->tab1_C2E->Enabled = false;
			this->tab1_C2E->Location = System::Drawing::Point(125, 436);
			this->tab1_C2E->Name = L"tab1_C2E";
			this->tab1_C2E->Size = System::Drawing::Size(113, 23);
			this->tab1_C2E->TabIndex = 2;
			this->tab1_C2E->Text = L"Convert to English";
			this->tab1_C2E->UseVisualStyleBackColor = true;
			this->tab1_C2E->Click += gcnew System::EventHandler(this, &MainForm::tab1_C2E_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(35, 110);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(293, 309);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// pictureBoxInner1
			// 
			this->pictureBoxInner1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxInner1->BackColor = System::Drawing::SystemColors::Menu;
			this->pictureBoxInner1->Location = System::Drawing::Point(35, 110);
			this->pictureBoxInner1->Name = L"pictureBoxInner1";
			this->pictureBoxInner1->Size = System::Drawing::Size(293, 309);
			this->pictureBoxInner1->TabIndex = 3;
			this->pictureBoxInner1->TabStop = false;
			// 
			// pictureBoxBorder1
			// 
			this->pictureBoxBorder1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxBorder1->BackColor = System::Drawing::Color::Black;
			this->pictureBoxBorder1->Location = System::Drawing::Point(33, 108);
			this->pictureBoxBorder1->Name = L"pictureBoxBorder1";
			this->pictureBoxBorder1->Size = System::Drawing::Size(297, 313);
			this->pictureBoxBorder1->TabIndex = 4;
			this->pictureBoxBorder1->TabStop = false;
			// 
			// userText1
			// 
			this->userText1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userText1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userText1->Location = System::Drawing::Point(8, 6);
			this->userText1->Name = L"userText1";
			this->userText1->Size = System::Drawing::Size(360, 51);
			this->userText1->TabIndex = 0;
			this->userText1->TextChanged += gcnew System::EventHandler(this, &MainForm::userText1_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Menu;
			this->tabPage2->Controls->Add(this->ClearButton2);
			this->tabPage2->Controls->Add(this->HelpButton2);
			this->tabPage2->Controls->Add(this->tab2_N2E);
			this->tabPage2->Controls->Add(this->tab2_C2N);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->pictureBoxInner2);
			this->tabPage2->Controls->Add(this->pictureBoxBorder2);
			this->tabPage2->Controls->Add(this->userText2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(374, 533);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"E2N";
			// 
			// ClearButton2
			// 
			this->ClearButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton2->Location = System::Drawing::Point(10, 461);
			this->ClearButton2->Name = L"ClearButton2";
			this->ClearButton2->Size = System::Drawing::Size(75, 23);
			this->ClearButton2->TabIndex = 8;
			this->ClearButton2->Text = L"Clear";
			this->ClearButton2->UseVisualStyleBackColor = true;
			this->ClearButton2->Click += gcnew System::EventHandler(this, &MainForm::ClearButton2_Click);
			// 
			// HelpButton2
			// 
			this->HelpButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->HelpButton2->Location = System::Drawing::Point(10, 490);
			this->HelpButton2->Name = L"HelpButton2";
			this->HelpButton2->Size = System::Drawing::Size(75, 23);
			this->HelpButton2->TabIndex = 2;
			this->HelpButton2->Text = L"Help";
			this->HelpButton2->UseVisualStyleBackColor = true;
			this->HelpButton2->Click += gcnew System::EventHandler(this, &MainForm::HelpButton2_Click);
			// 
			// tab2_N2E
			// 
			this->tab2_N2E->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->tab2_N2E->Enabled = false;
			this->tab2_N2E->Location = System::Drawing::Point(125, 465);
			this->tab2_N2E->Name = L"tab2_N2E";
			this->tab2_N2E->Size = System::Drawing::Size(113, 23);
			this->tab2_N2E->TabIndex = 1;
			this->tab2_N2E->Text = L"Convert N2E";
			this->tab2_N2E->UseVisualStyleBackColor = true;
			this->tab2_N2E->Click += gcnew System::EventHandler(this, &MainForm::tab2_N2E_Click);
			// 
			// tab2_C2N
			// 
			this->tab2_C2N->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->tab2_C2N->Enabled = false;
			this->tab2_C2N->Location = System::Drawing::Point(125, 436);
			this->tab2_C2N->Name = L"tab2_C2N";
			this->tab2_C2N->Size = System::Drawing::Size(113, 23);
			this->tab2_C2N->TabIndex = 1;
			this->tab2_C2N->Text = L"Convert to Number";
			this->tab2_C2N->UseVisualStyleBackColor = true;
			this->tab2_C2N->Click += gcnew System::EventHandler(this, &MainForm::tab2_C2N_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->Location = System::Drawing::Point(35, 110);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(293, 309);
			this->richTextBox2->TabIndex = 7;
			this->richTextBox2->Text = L"";
			// 
			// pictureBoxInner2
			// 
			this->pictureBoxInner2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxInner2->BackColor = System::Drawing::SystemColors::Menu;
			this->pictureBoxInner2->Location = System::Drawing::Point(35, 110);
			this->pictureBoxInner2->Name = L"pictureBoxInner2";
			this->pictureBoxInner2->Size = System::Drawing::Size(293, 309);
			this->pictureBoxInner2->TabIndex = 6;
			this->pictureBoxInner2->TabStop = false;
			// 
			// pictureBoxBorder2
			// 
			this->pictureBoxBorder2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxBorder2->BackColor = System::Drawing::Color::Black;
			this->pictureBoxBorder2->Location = System::Drawing::Point(33, 108);
			this->pictureBoxBorder2->Name = L"pictureBoxBorder2";
			this->pictureBoxBorder2->Size = System::Drawing::Size(297, 313);
			this->pictureBoxBorder2->TabIndex = 5;
			this->pictureBoxBorder2->TabStop = false;
			// 
			// userText2
			// 
			this->userText2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userText2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userText2->Location = System::Drawing::Point(8, 6);
			this->userText2->Name = L"userText2";
			this->userText2->Size = System::Drawing::Size(360, 51);
			this->userText2->TabIndex = 0;
			this->userText2->TextChanged += gcnew System::EventHandler(this, &MainForm::userText2_TextChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 556);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"Converter";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInner1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBorder1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInner2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBorder2))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion


		void errorMessage() {
			String^ msg = "Invalid Input.\nCheck the Help option in the window, to brush up on required format.";
			MessageBox::Show(msg, "Error");


		}

		bool pointUsed(string num) {
			string number = num;
			if (!(number.find(".") == string::npos)) return true;
			return false;
		}

		int findPointPosition1(string num) {
			string number = num;
			return number.find(".");
		}

		bool correctLength(string num) {
			int x = num.length();
			if (pointUsed(num)) {
				x = findPointPosition1(num);
			}
			string number0 = num.substr(0, x);
			if (stoull(number0) > LLONG_MAX) {
				return false;
			}
			string number = num;
			if (pointUsed(num)) {
				if ((number.length() - 1) - findPointPosition1(num) <= 5) {
					if (number.length() <= 27) {
						return true;
					}
				}
			}
			else if (!pointUsed(num)) {
				if (number.length() <= 21) {
					return true;
				}
			}
			return false;
		}

		bool correctPointUsage1(string num) {
			if (pointUsed(num)) {
				string number = num;
				if (number.at(number.length() - 1) == '.') { return false; }
				for (int i = 0; i < number.length(); i++) {
					if (number.at(i) == '.') {
						for (int j = i + 1; j < number.length(); j++) {
							if (number.at(j) == '.') {
								return false;
							}
						}
					}
				}
			}
			return true;
		}

		bool correctChar(string num) {
			int check = 0;
			for (int i = 0; i < num.length(); i++) {
				for (int j = 0; j < digits.size(); j++) {
					if (num.at(i) == digits[j].at(0)) {
						check++;
					}
				}
				if (check == 0) {
					return false;
				}
				check = 0;
			}
			return true;
		}

		bool validInput1(string num) {
			if (correctPointUsage1(num) == false) { return false; }
			if (correctLength(num) == false) { return false; }
			if (correctChar(num) == false) { return false; }
			return true;
		}

		vector<string> splitingNum(string num) {
			string number = num;
			vector<string> groupOfNumbers;
			string holder = "";
			int unitCounter = 0;
			int numOfDigits = 0;

			if (pointUsed(num) == true) {
				for (int i = findPointPosition1(num) + 1; i < number.length(); i++) {
					holder = holder + number.at(i);
					numOfDigits++;
				}
				numOfDigits++;
				groupOfNumbers.insert(groupOfNumbers.begin(), holder);
				holder = "";
			}
			for (int i = (number.length() - 1) - (numOfDigits); i >= 0; i--) {
				holder = number.at(i) + holder;
				unitCounter++;
				if (unitCounter == 3) {
					groupOfNumbers.insert(groupOfNumbers.begin(), holder);
					unitCounter = 0;
					holder = "";
				}
			}

			if (holder.length() != 0) {
				groupOfNumbers.insert(groupOfNumbers.begin(), holder);
			}
			return groupOfNumbers;
		}

		string conversion(string num) {
			vector<string> groupOfNum = splitingNum(num);
			string numb = "";
			string holder = "";
			string converted = "";
			string decimal = "";
			int checkCount = 0;
			if (pointUsed(num)) {
				numb = groupOfNum[groupOfNum.size() - 1];
				for (int i = 0; i < numb.length(); i++) {
					for (int j = 0; j < 10; j++) {
						if (numb.at(i) == sets[j].first.at(0)) {
							decimal = decimal + sets[j].second;
						}
					}
				}
				decimal = specInserts[2] + decimal;
				groupOfNum.pop_back();
			}

			//loops through each pairing of three digits starting from the last index
			for (int i = groupOfNum.size() - 1; i >= 0; i--) {
				//if the length is equal to three
				if (groupOfNum[i].length() == 3) {
					for (int q = 1; q < 10; q++) {
						if (groupOfNum[i].at(0) == sets[q].first.at(0)) {
							holder = sets[q].second + units[0].second;
						}
					}

					//if the second digit is equal to zero
					if (groupOfNum[i].at(1) == sets[0].first.at(0)) {
						if (groupOfNum[i].at(2) != sets[0].first.at(0)) {
							for (int r = 1; r < 10; r++) {
								if (groupOfNum[i].at(0) == '0' && groupOfNum[i].at(2) == sets[r].first.at(0)) {
									holder = holder + sets[r].second;
								}
								else if (groupOfNum[i].at(2) == sets[r].first.at(0)) {
									holder = holder + specInserts[1] + sets[r].second;
								}
							}
						}

						//if the second digit is equal to one
					}
					else if (groupOfNum[i].at(1) == sets[1].first.at(0)) {
						if (groupOfNum[i].at(2) != sets[0].first.at(0)) {
							for (int s = 10; s < 19; s++) {
								if (groupOfNum[i].at(0) == '0' && groupOfNum[i].substr(1) == sets[s].first) {
									holder = holder + sets[s].second;
								} else if (groupOfNum[i].substr(1) == sets[s].first) {
									holder = holder + specInserts[1] + sets[s].second;
								}
							}
						}
						else {
							if (groupOfNum[i].at(0) == '0') {
								holder = holder + tens[0];
							}
							else {
								holder = holder + specInserts[1] + tens[0];
							}
						}
						//if the second digit is greater than one
					}
					else {
						for (int t = 2; t < 10; t++) {
							if (groupOfNum[i].at(0) == '0' && groupOfNum[i].at(1) == sets[t].first.at(0)) {
								holder = holder + tens[t - 1];
							}
							else if (groupOfNum[i].at(1) == sets[t].first.at(0)) {
								holder = holder + specInserts[1] + tens[t - 1];
							}
						}
						//finding the last digit within the third place
						if (groupOfNum[i].at(2) != sets[0].first.at(0)) {
							for (int u = 1; u < 10; u++) {
								if (groupOfNum[i].at(2) == sets[u].first.at(0)) {
									holder = holder.substr(0, holder.length() - 1) + specInserts[0] + sets[u].second;
								}
							}
						}
					}
					//if length is equal to 2
				}
				else if (groupOfNum[i].length() == 2) {
					if (groupOfNum[i].at(0) == sets[1].first.at(0)) {
						if (groupOfNum[i].at(1) != sets[0].first.at(0)) {
							for (int v = 10; v < 19; v++) {
								if (groupOfNum[i] == sets[v].first) {
									holder = sets[v].second;
								}
							}
						}
						else {
							holder = tens[0];
						}
						//if the second digit is greater than one
					}
					else {
						for (int w = 2; w < 10; w++) {
							if (groupOfNum[i].at(0) == sets[w].first.at(0)) {
								holder = tens[w - 1];
							}
						}
						//finding the last digit within the third place
						if (groupOfNum[i].at(1) != sets[0].first.at(0)) {
							for (int x = 1; x < 10; x++) {
								if (groupOfNum[i].at(1) == sets[x].first.at(0)) {
									holder = holder.substr(0, holder.length() - 1) + specInserts[0] + sets[x].second;
								}
							}
						}
					}

					//if length is equal to 1
				}
				else if (groupOfNum[i].length() == 1) {
					if (groupOfNum[i].at(0) != sets[0].first.at(0)) {
						for (int y = 1; y < 10; y++) {
							if (groupOfNum[i].at(0) == sets[y].first.at(0)) {
								holder = sets[y].second;
							}
						}
					}
				}

				if (groupOfNum[i] != "000") {
					for (int z = 1; z < units.size(); z++) {
						if (checkCount == z) {
							holder = holder + units[z].second;
						}
					}
				}
				checkCount++;
				converted = holder + converted;
				holder = "";
			}
			converted = converted + decimal;
			return converted;
		}

		void DoIt(string num) {
			if (!validInput1(num)) {
				errorMessage();
				tab1_E2N->Enabled = false;
			}
			else {
				string output1 = conversion(num);
				output1 = output1.substr(0, output1.length() - 1);
				String^ output1_Final = msclr::interop::marshal_as<String^>(output1);
				richTextBox1->Text = output1_Final;
				updateButton_tab1_E2N();
			}
		}

		//E2N Methods

			//works!
		string ignoreCase(string w) {
			for (int i = 0; i < w.length(); i++) {
				w.at(i) = tolower(w.at(i));
			}
			return w;
		}

		//works!
		string spaceHyphen(string w) {
			vector<int> hyphenPositions;
			int startPos = 0;
			for (int i = 0; i < w.length(); i++) {
				if (w.at(i) == '-') {
					hyphenPositions.push_back(i);
				}
			}
			for (int i = 0; i < hyphenPositions.size(); i++) {
				w = w.substr(startPos, (hyphenPositions.at(i) - startPos)) + " " + w.at(hyphenPositions[i]) + " " + w.substr(hyphenPositions[i] + 1);
				if (i < hyphenPositions.size() - 1) {
					hyphenPositions[i + 1] += (i + 1) * 2;
				}
			}
			return w;
		}

		//works!
		string popHyphen(string w) {
			for (int i = 0; i < w.length(); i++) {
				if (w.at(i) == '-') {
					w.at(i) = ' ';
				}
			}
			return w;
		}

		//works!
		vector<string> splitWords(string w) {
			vector<string> usersWords;
			string temp = spaceHyphen(w);
			string holder = "";
			int wordStartPos = 0;
			int wordEndPos = 0;

			while (temp.find(" ") != string::npos) {
				wordEndPos = temp.find(" ");
				holder = temp.substr(wordStartPos, wordEndPos);
				usersWords.push_back(holder);
				temp = temp.substr(temp.find(" ") + 1);
			}
			usersWords.push_back(temp);
			return usersWords;
		}

		//works!
		bool pointFound(string w) {
			vector<string> words = splitWords(w);
			for (int i = 0; i < words.size(); i++) {
				if (ignoreCase(words[i]) == ignoreCase(validWords[validWords.size() - 1])) {
					return true;
				}
			}
			return false;
		}

		//works!
		int findPointPosition2(string w) {
			vector<string> words = splitWords(w);
			for (int i = 0; i < words.size(); i++) {
				if (ignoreCase(words[i]) == ignoreCase(validWords[validWords.size() - 1])) {
					return i;
				}
			}
			return -1;
		}

		//works!
		bool correctPointUsage2(string w) {
			if (pointFound(w)) {
				vector<string> words = splitWords(w);
				int x = findPointPosition2(w);
				int checkPass = 0;
				if ((words.size() - x) > 6) {
					return false;
				}
				x++;
				for (int i = x; i < words.size(); i++) {
					for (int j = 0; j < 10; j++) {
						if (ignoreCase(words[x]) == ignoreCase(validWords[j])) {
							checkPass++;
						}
					}
					if (checkPass != 1) {
						return false;
					}
					checkPass = 0;
				}
			}
			return true;
		}

		//works!
		bool wordsAreValid(string w) {
			int check = 0;
			vector<string> userWords = splitWords(w);
			for (int i = 0; i < userWords.size(); i++) {
				for (int j = 0; j < validWords.size(); j++) {
					if (ignoreCase(userWords[i]) == ignoreCase(validWords[j])) {
						check++;
					}
				}
				if (check != 1) {
					return false;
				}
				check = 0;
			}
			return true;
		}

		//works!
		bool unitCheck(string w) {
			vector<string> words = splitWords(w);
			int wCounter = 0;
			int x = words.size();
			if (pointFound(w)) {
				x = findPointPosition2(w);
			}
			for (int i = 28; i < 35; i++) {
				if (ignoreCase(words[0]) == ignoreCase(validWords[i])) {
					return false;
				}
			}
			if (x > 1) {
				for (int i = 1; i < x; i++) {
					for (int j = 10; j < 28; j++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[j])) {
							for (int k = 1; k < 28; k++) {
								if (ignoreCase(words[i - 1]) == ignoreCase(validWords[k])) {
									return false;
								}
							}
						}
					}
					for (int l = 29; l < 35; l++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[l])) {
							while (wCounter < i) {
								if (ignoreCase(words[wCounter]) == ignoreCase(validWords[l])) {
									return false;
								}
								wCounter++;
							}
							wCounter = 0;
						}
					}
					wCounter = i;
					for (int m = 29; m < 35; m++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[m])) {
							for (int n = m + 1; n < 35; n++) {
								while (wCounter < x) {
									if (ignoreCase(words[wCounter]) == ignoreCase(validWords[n])) {
										return false;
									}
									wCounter++;
								}
							}
						}
					}
					wCounter = 0;
					for (int o = 1; o < 10; o++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[o])) {
							for (int p = 1; p < 10; p++) {
								if (ignoreCase(words[i - 1]) == ignoreCase(validWords[p])) {
									return false;
								}
							}
						}
					}
					if (ignoreCase(words[i]) == ignoreCase(validWords[28])) {
						for (int q = 10; q < 27; q++) {
							if (ignoreCase(words[i - 1]) == ignoreCase(validWords[q])) {
								return false;
							}
						}
					}
					for (int r = 28; r < 36; r++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[r])) {
							for (int s = 29; s < validWords.size(); s++) {
								if (ignoreCase(words[i - 1]) == ignoreCase(validWords[s])) {
									return false;
								}
							}
						}
					}
				}
			}
			return true;
		}

		//works!
		bool repeatingWords(string w) {
			vector<string> words = splitWords(w);
			int x = words.size();
			if (pointFound(w)) {
				x = findPointPosition2(w);
			}
			if (x > 1) {
				for (int i = 1; i < x; i++) {
					for (int j = 0; j < validWords.size(); j++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[j])) {
							if (ignoreCase(words[i - 1]) == ignoreCase(words[i])) {
								return false;
							}
						}
					}
				}
			}
			return true;
		}

		//works!
		bool correctHyphenUsage(string w) {
			vector<string> words = splitWords(w);
			int check = 0;
			int x = words.size();
			if (pointFound(w)) {
				x = findPointPosition2(w);
			}
			if (words.front() == "-" || words.back() == "-") {
				return 0;
			}
			for (int i = 1; i < x; i++) {
				if (words[i] == "-") {
					for (int j = 20; j < 28; j++) {
						if (ignoreCase(words[i - 1]) == ignoreCase(validWords[j])) {
							check++;
						}
					}
					if (check == 0) return false;
				}
				check = 0;
			}

			for (int i = 0; i < x; i++) {
				for (int j = 21; j < 29; j++) {
					if (ignoreCase(words[i]) == ignoreCase(validWords[j])) {
						if (i < x - 1) {
							for (int k = 1; k < 10; k++) {
								if (ignoreCase(words[i + 1]) == ignoreCase(validWords[k])) {
									return false;
								}
							}
						}
					}
				}
			}

			return true;
		}

		//works!
		bool correctAndUsage(string w) {
			vector<string> words = splitWords(w);
			int x = words.size();
			if (pointFound(w)) {
				x = findPointPosition2(w);
			}
			if (words.size() > 1) {
				for (int i = 1; i < x; i++) {
					if (ignoreCase(words[i]) == ignoreCase(validWords[36])) {
						if (ignoreCase(words[i - 1]) != ignoreCase(validWords[28])) {
							return false;
						}
					}
				}
			}
			return true;
		}

		//works!
		bool correctSpecialWordsUsage(string w) {
			vector<string> userWords = splitWords(w);
			if ((userWords.size() == 1 && (ignoreCase(userWords[0]) == ignoreCase("Point") || ignoreCase(userWords[0]) == ignoreCase("And"))) ||
				userWords[userWords.size() - 1] == ignoreCase("Point") || userWords[userWords.size() - 1] == ignoreCase("and")) {
				return false;
			}
			return true;
		}

		//works!
		bool validInput2(string w) {
			if (wordsAreValid(w) == false) return false;
			if (unitCheck(w) == false) return false;
			if (repeatingWords(w) == false) return false;
			if (correctHyphenUsage(w) == false) return false;
			if (correctAndUsage(w) == false) return false;
			if (correctSpecialWordsUsage(w) == false) return false;
			if (correctPointUsage2(w) == false) return false;
			return true;
		}

		//works
		long long Calculations(string w) {
			vector<string> words = splitWords(w);
			long long sum = 0;
			long long total = 0;
			int x = words.size();
			if (pointFound(w)) {
				x = findPointPosition2(w);
			}
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < validWords.size(); ++j) {
					if (ignoreCase(words.at(i)) == ignoreCase(validWords.at(j))) {
						switch (j) {
						case 0:
							sum += j;
							break;
						case 1:
							sum += j;
							break;
						case 2:
							sum += j;
							break;
						case 3:
							sum += j;
							break;
						case 4:
							sum += j;
							break;
						case 5:
							sum += j;
							break;
						case 6:
							sum += j;
							break;
						case 7:
							sum += j;
							break;
						case 8:
							sum += j;
							break;
						case 9:
							sum += j;
							break;
						case 10:
							sum += j;
							break;
						case 11:
							sum += j;
							break;
						case 12:
							sum += j;
							break;
						case 13:
							sum += j;
							break;
						case 14:
							sum += j;
							break;
						case 15:
							sum += j;
							break;
						case 16:
							sum += j;
							break;
						case 17:
							sum += j;
							break;
						case 18:
							sum += j;
							break;
						case 19:
							sum += j;
							break;
						case 20:
							sum += j;
							break;
						case 21:
							sum += 30;
							break;
						case 22:
							sum += 40;
							break;
						case 23:
							sum += 50;
							break;
						case 24:
							sum += 60;
							break;
						case 25:
							sum += 70;
							break;
						case 26:
							sum += 80;
							break;
						case 27:
							sum += 90;
							break;
						case 28:
							sum *= 100;
							break;
						case 29:
							sum *= 1000;
							total += sum;
							sum = 0;
							break;
						case 30:
							sum *= 1000000;
							total += sum;
							sum = 0;
							break;
						case 31:
							sum *= 1000000000;
							total += sum;
							sum = 0;
							break;
						case 32:
							sum *= 1000000000000;
							total += sum;
							sum = 0;
							break;
						case 33:
							sum *= 1000000000000000;
							total += sum;
							sum = 0;
							break;
						case 34:
							sum *= 1000000000000000000;
							total += sum;
							sum = 0;
							break;
						}
					}
				}
			}
			total += sum;
			return total;
		}

		bool validInput3(string w) {
			unsigned long long n = Calculations(w);
			if (n > LLONG_MAX) { return false; }
			return true;
		}

		//works!
		string pointAdder(string w) {
			string decimal = "";
			if (pointFound(w)) {
				decimal = ".";
				vector<string> words = splitWords(w);
				for (int i = findPointPosition2(w) + 1; i < words.size(); i++) {
					for (int j = 0; j < 10; j++) {
						if (ignoreCase(words[i]) == ignoreCase(validWords[j])) {
							decimal = decimal + to_string(j);
						}
					}
				}
			}
			return decimal;
		}

		void DoIt2(string w) {
			if (!validInput2(w) || !validInput3(w)) {
				errorMessage();
				tab2_N2E->Enabled = false;
			}
			else {
				long long n = Calculations(w);
				string wholeNum = to_string(n);
				string Decimal = pointAdder(w);
				string num = wholeNum + Decimal;
				string output2 = num;
				String^ output2_Final = msclr::interop::marshal_as<String^>(output2);
				richTextBox2->Text = output2_Final;
				updateButton_tab2_N2E();
			}
		}


	private: System::Void userText1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		updateButtonC2E();
	}

	private: System::Void userText2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		updateButtonC2N();
	}

	private: System::Void updateButtonC2E() {
		tab1_C2E->Enabled = (userText1->Text != userText1->Text->Empty);
	}

	private: System::Void updateButton_tab1_E2N() {
		tab1_E2N->Enabled = (richTextBox1->Text != richTextBox1->Text->Empty);
	}

	private: System::Void updateButtonC2N() {
		tab2_C2N->Enabled = (userText2->Text != userText2->Text->Empty);
	}

	private: System::Void updateButton_tab2_N2E() {
		tab2_N2E->Enabled = (richTextBox2->Text != richTextBox2->Text->Empty);
	}

	private: System::Void tab1_C2E_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userInput1 = userText1->Text;
		string userInput1_Final = msclr::interop::marshal_as<string>(userInput1);
		DoIt(userInput1_Final);
	}

	private: System::Void tab2_C2N_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userInput2 = userText2->Text;
		string userInput2_Final = msclr::interop::marshal_as<string>(userInput2);
		DoIt2(userInput2_Final);
	}

	private: System::Void tab1_E2N_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ holder1 = richTextBox1->Text;
		string holder1_Final = msclr::interop::marshal_as<string>(holder1);
		DoIt2(holder1_Final);
		userText2->Text = holder1;
		tabControl1->SelectedIndex = 1;
	}

	private: System::Void tab2_N2E_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ holder2 = richTextBox2->Text;
		string holder2_Final = msclr::interop::marshal_as<string>(holder2);
		DoIt(holder2_Final);
		userText1->Text = holder2;
		tabControl1->SelectedIndex = 0;
	}
	private: System::Void HelpButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ msg = "Use:\nConvert a number to a US English word Representation. \nLimited to range of 0 to 9,223,372,036,854,775,807. \nDecimals are supported up to the hundred thousandths place.\nDo not use any separators.";
		MessageBox::Show(msg, "Help");
	}
	private: System::Void HelpButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ msg = "Use: \nConvert a US English word value representation to its numeric form. \nLimited to range of Zero to Nine Quintillion Two Hundred and Twenty-Three Quadrillion Three Hundred and Seventy-Two Trillion \nThirty-Six Billion Eight Hundred and Fifty-Four Million Seven Hundred and Seventy-Five Thousand Eight Hundred and Seven. \nInputs are not case-sensitive. \nTens place must have a hyphen if a value ones place is present afterward. \nHundreds place must have an \"and\" if a value in tens and/or ones place is present afterward.";
		MessageBox::Show(msg, "Help");
	}
	private: System::Void ClearButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		userText1->Text = "";
		richTextBox1->Text = "";
		tab1_E2N->Enabled = false;
	}
	private: System::Void ClearButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		userText2->Text = "";
		richTextBox2->Text = "";
		tab2_N2E->Enabled = false;
	}
};
}
