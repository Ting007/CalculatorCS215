#pragma once
#include <math.h>  
namespace PA4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 20);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(100, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(5, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(60, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(115, 170);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 34);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(5, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(43, 34);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(60, 130);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(43, 34);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(115, 130);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(43, 34);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(5, 90);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(43, 34);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(60, 90);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(43, 34);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(115, 90);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(43, 34);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(5, 210);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(43, 34);
			this->button10->TabIndex = 11;
			this->button10->Text = L"C";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(60, 210);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(43, 34);
			this->button11->TabIndex = 12;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(115, 210);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(43, 34);
			this->button12->TabIndex = 13;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(170, 90);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(43, 34);
			this->button13->TabIndex = 14;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(170, 130);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(43, 34);
			this->button14->TabIndex = 15;
			this->button14->Text = L"X";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(170, 170);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(43, 34);
			this->button15->TabIndex = 16;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(170, 210);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(43, 34);
			this->button16->TabIndex = 17;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(225, 90);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(43, 34);
			this->button17->TabIndex = 18;
			this->button17->Text = L"1/x";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(225, 130);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(43, 34);
			this->button18->TabIndex = 19;
			this->button18->Text = L"sqr";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(225, 170);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(43, 34);
			this->button19->TabIndex = 20;
			this->button19->Text = L"+/-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(225, 211);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(43, 34);
			this->button20->TabIndex = 21;
			this->button20->Text = L".";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 257);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double number1 = 0.0;//store the first number
		double number2 = 0.0;//store the second number
		double result = 0.0;//store the results
		char operators = ' ';//the operator + - * /
		int counter = 1;//count how many operators in the calculator
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "1";
				 }
				 else{
					 textBox1->Text += "1";
				 }
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text = "0";
				 label1->Text = "";
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "2";
				 }
				 else{
					 textBox1->Text += "2";
				 }
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "3";
				 }
				 else{
					 textBox1->Text += "3";
				 }
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "4";
				 }
				 else{
					 textBox1->Text += "4";
				 }
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "5";
				 }
				 else{
					 textBox1->Text += "5";
				 }
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "6";
				 }
				 else{
					 textBox1->Text += "6";
				 }
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "7";
				 }
				 else{
					 textBox1->Text += "7";
				 }
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "8";
				 }
				 else{
					 textBox1->Text += "8";
				 }
	}

	private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "9";
				 }
				 else{
					 textBox1->Text += "9";
				 }
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == "0"){
					 textBox1->Text = "0";
				 }
				 else{
					 textBox1->Text += "0";
				 }
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e){
				 if (counter = 1){
					 //convert the number of textbox1 to an double 
					 number1 = Convert::ToDouble(textBox1->Text);
					 //add the operator to the textbox1
					 
				 }
				 else if (counter > 1){
					 number2 = Convert::ToDouble(textBox1->Text);
					 number1 = number1*number2;
				 }
				 operators = '*';
				 textBox1->Text += "x";
				 //transfer number and operator to the lable1
				 label1->Text += textBox1->Text;
				 //clear the textbox1
				 textBox1->Text = "";
				 //if the operator is not the first operator
				 counter += 1;
	}



			 //valid data input from the keyboard
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar < '0' || e->KeyChar > '9'){
				 textBox1->Text = "0";
			 }
			 
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 number2 = Convert::ToDouble(textBox1->Text);
			 if (operators == '*'){
				 result = number1 * number2;
			 }
			 else if (operators == '+'){
				 result = number1 + number2;
			 }
			 else if (operators == '-'){
				 result = number1 - number2;
			 }
			 else if (operators == '/'){
				 result = number1 / number2;
			 }
		     label1->Text = Convert::ToString(result);
			 textBox1->Text = "";
			 if (operators = '/' && number2 == 0){
				 label1->Text = "Error";
			 }

	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 number1 = Convert::ToDouble(textBox1->Text);
			 operators = '-';
			 textBox1->Text += "-";
			 label1->Text = textBox1->Text;
			 textBox1->Text = "";
	}

	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 number1 = Convert::ToDouble(textBox1->Text);
			 operators = '+';
			 textBox1->Text += "+";
			 label1->Text = textBox1->Text;
			 textBox1->Text = "";
	}

	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 number1 = Convert::ToDouble(textBox1->Text);
			 operators = '/';
			 textBox1->Text += "/";
			 label1->Text = textBox1->Text;
			 textBox1->Text = "";
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
				 number1 = Convert::ToDouble(textBox1->Text);
				 result = 1 / number1;
				 label1->Text = Convert::ToString(result);
				 textBox1->Text = "";

	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == ""){
				 textBox1->Text = "0.";
			 }
			 else{
				 textBox1->Text += ".";
			 }
	}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 number1 = Convert::ToDouble(textBox1->Text);
			 result = sqrt(number1);
			 label1->Text = Convert::ToString(result);
			 textBox1->Text = "";
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 double number = Convert::ToDouble(textBox1->Text);
			 number *= (-1);
			 textBox1->Text = Convert::ToString(number);
}
};
}
