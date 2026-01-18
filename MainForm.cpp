#include "MainForm.h"
#include <iostream>
#include "card-value.h"
#include "card-value-tostring.h"
#include "card-color.h"
#include "card-color-tostring.h"
#include "card.h"
#include "node.h"
#include "node-list.h"
#include "test-function.h"
#include "deck.h"
#include "board.h"
#include "player.h"
#include "player_slot.h"
#include "table.h"
#include <thread>
#include <chrono>

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    pokerGUI::MainForm form;

    Application::Run(% form);

}

pokerGUI::MainForm::MainForm(void)
{
	InitializeComponent();
	table = new Table();
}







void pokerGUI::MainForm::InitializeComponent(void)
{
	resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
	this->GameButton = (gcnew System::Windows::Forms::Button());
	this->ShowHandButton = (gcnew System::Windows::Forms::Button());//!!
	this->AnalysisButton = (gcnew System::Windows::Forms::Button());
	this->ExitButton = (gcnew System::Windows::Forms::Button());
	this->TablePictureBox = (gcnew System::Windows::Forms::PictureBox());
	this->DeckPictureBox = (gcnew System::Windows::Forms::PictureBox());
	this->Player3Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player4Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player5Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player6Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player7Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player8Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player9Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player10Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player1Picture = (gcnew System::Windows::Forms::PictureBox());
	this->Player2Picture = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
	this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
	this->BoardFlop1 = (gcnew System::Windows::Forms::PictureBox());
	this->BoardFlop2 = (gcnew System::Windows::Forms::PictureBox());
	this->BoardFlop3 = (gcnew System::Windows::Forms::PictureBox());
	this->BoardTurn = (gcnew System::Windows::Forms::PictureBox());
	this->BoardRiver = (gcnew System::Windows::Forms::PictureBox());
	this->NextStepButton = (gcnew System::Windows::Forms::Button());
	this->CheckButton = (gcnew System::Windows::Forms::Button());
	this->CallButton = (gcnew System::Windows::Forms::Button());
	this->RaiseButton = (gcnew System::Windows::Forms::Button());
	this->FoldButton = (gcnew System::Windows::Forms::Button());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablePictureBox))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeckPictureBox))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player3Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player4Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player5Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player6Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player7Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player8Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player9Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player10Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player1Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player2Picture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardFlop1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardFlop2))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardFlop3))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardTurn))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardRiver))->BeginInit();
	this->SuspendLayout();
	// 
	// button1
	// 
	this->GameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->GameButton->Location = System::Drawing::Point(219, 135);
	this->GameButton->Name = L"button1";
	this->GameButton->Size = System::Drawing::Size(242, 78);
	this->GameButton->TabIndex = 0;
	this->GameButton->Text = L"Game";
	this->GameButton->UseVisualStyleBackColor = true;
	this->GameButton->Click += gcnew System::EventHandler(this, &MainForm::GameButton_Click);
	//
	//
	//button deal my hand
	this->ShowHandButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->ShowHandButton->Location = System::Drawing::Point(219, 250);
	this->ShowHandButton->Name = L"button10";
	this->ShowHandButton->Size = System::Drawing::Size(242, 78);
	this->ShowHandButton->TabIndex = 0;
	this->ShowHandButton->Text = L"Get My Hand";
	this->ShowHandButton->UseVisualStyleBackColor = true;
	this->ShowHandButton->Click += gcnew System::EventHandler(this, &MainForm::ShowHandButton_Click);
	this->ShowHandButton->Visible = false;
	// button2
	// 
	this->AnalysisButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->AnalysisButton->Location = System::Drawing::Point(219, 282);
	this->AnalysisButton->Name = L"button2";
	this->AnalysisButton->Size = System::Drawing::Size(242, 78);
	this->AnalysisButton->TabIndex = 1;
	this->AnalysisButton->Text = L"Analysis";
	this->AnalysisButton->UseVisualStyleBackColor = true;
	this->AnalysisButton->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
	// 
	// button3
	// 
	this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->ExitButton->Location = System::Drawing::Point(1629, 535);
	this->ExitButton->Name = L"button3";
	this->ExitButton->Size = System::Drawing::Size(242, 78);
	this->ExitButton->TabIndex = 2;
	this->ExitButton->Text = L"EXIT";
	this->ExitButton->UseVisualStyleBackColor = true;
	this->ExitButton->Visible = false;
	this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click);
	// 
	// TablePictureBox
	// 
	this->TablePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TablePictureBox.Image")));
	this->TablePictureBox->Location = System::Drawing::Point(503, 12);
	this->TablePictureBox->Name = L"TablePictureBox";
	this->TablePictureBox->Size = System::Drawing::Size(1097, 667);
	this->TablePictureBox->TabIndex = 3;
	this->TablePictureBox->TabStop = false;
	this->TablePictureBox->Visible = false;
	// 
	// DeckPictureBox
	// 
	this->DeckPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeckPictureBox.Image")));
	this->DeckPictureBox->Location = System::Drawing::Point(819, 310);
	this->DeckPictureBox->Name = L"DeckPictureBox";
	this->DeckPictureBox->Size = System::Drawing::Size(104, 147);
	this->DeckPictureBox->TabIndex = 4;
	this->DeckPictureBox->TabStop = false;
	this->DeckPictureBox->Visible = false;
	// 
	// Player3Picture
	// 
	this->Player3Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player3Picture.Image")));
	this->Player3Picture->Location = System::Drawing::Point(894, 535);
	this->Player3Picture->Name = L"Player3Picture";
	this->Player3Picture->Size = System::Drawing::Size(109, 118);
	this->Player3Picture->TabIndex = 5;
	this->Player3Picture->TabStop = false;
	this->Player3Picture->Visible = false;
	// 
	// Player4Picture
	// 
	this->Player4Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player4Picture.Image")));
	this->Player4Picture->Location = System::Drawing::Point(653, 495);
	this->Player4Picture->Name = L"Player4Picture";
	this->Player4Picture->Size = System::Drawing::Size(109, 118);
	this->Player4Picture->TabIndex = 6;
	this->Player4Picture->TabStop = false;
	this->Player4Picture->Visible = false;
	// 
	// Player5Picture
	// 
	this->Player5Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player5Picture.Image")));
	this->Player5Picture->Location = System::Drawing::Point(549, 282);
	this->Player5Picture->Name = L"Player5Picture";
	this->Player5Picture->Size = System::Drawing::Size(109, 118);
	this->Player5Picture->TabIndex = 7;
	this->Player5Picture->TabStop = false;
	this->Player5Picture->Visible = false;
	// 
	// Player6Picture
	// 
	this->Player6Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player6Picture.Image")));
	this->Player6Picture->Location = System::Drawing::Point(643, 104);
	this->Player6Picture->Name = L"Player6Picture";
	this->Player6Picture->Size = System::Drawing::Size(109, 118);
	this->Player6Picture->TabIndex = 8;
	this->Player6Picture->TabStop = false;
	this->Player6Picture->Visible = false;
	// 
	// Player7Picture
	// 
	this->Player7Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player7Picture.Image")));
	this->Player7Picture->Location = System::Drawing::Point(894, 47);
	this->Player7Picture->Name = L"Player7Picture";
	this->Player7Picture->Size = System::Drawing::Size(109, 118);
	this->Player7Picture->TabIndex = 9;
	this->Player7Picture->TabStop = false;
	this->Player7Picture->Visible = false;
	// 
	// Player8Picture
	// 
	this->Player8Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player8Picture.Image")));
	this->Player8Picture->Location = System::Drawing::Point(1156, 47);
	this->Player8Picture->Name = L"Player8Picture";
	this->Player8Picture->Size = System::Drawing::Size(109, 118);
	this->Player8Picture->TabIndex = 10;
	this->Player8Picture->TabStop = false;
	this->Player8Picture->Visible = false;
	// 
	// Player9Picture
	// 
	this->Player9Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player9Picture.Image")));
	this->Player9Picture->Location = System::Drawing::Point(1410, 69);
	this->Player9Picture->Name = L"Player9Picture";
	this->Player9Picture->Size = System::Drawing::Size(109, 118);
	this->Player9Picture->TabIndex = 11;
	this->Player9Picture->TabStop = false;
	this->Player9Picture->Visible = false;
	// 
	// Player10Picture
	// 
	this->Player10Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player10Picture.Image")));
	this->Player10Picture->Location = System::Drawing::Point(1491, 293);
	this->Player10Picture->Name = L"Player10Picture";
	this->Player10Picture->Size = System::Drawing::Size(109, 118);
	this->Player10Picture->TabIndex = 12;
	this->Player10Picture->TabStop = false;
	this->Player10Picture->Visible = false;
	// 
	// Player1Picture
	// 
	this->Player1Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player1Picture.Image")));
	this->Player1Picture->Location = System::Drawing::Point(1410, 535);
	this->Player1Picture->Name = L"Player1Picture";
	this->Player1Picture->Size = System::Drawing::Size(109, 118);
	this->Player1Picture->TabIndex = 13;
	this->Player1Picture->TabStop = false;
	this->Player1Picture->Visible = false;
	// 
	// Player2Picture
	// 
	this->Player2Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player2Picture.Image")));
	this->Player2Picture->Location = System::Drawing::Point(1170, 535);
	this->Player2Picture->Name = L"Player2Picture";
	this->Player2Picture->Size = System::Drawing::Size(109, 118);
	this->Player2Picture->TabIndex = 14;
	this->Player2Picture->TabStop = false;
	this->Player2Picture->Visible = false;
	// 
	// pictureBox11
	// 
	this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
	this->pictureBox11->Location = System::Drawing::Point(764, 545);
	this->pictureBox11->Name = L"pictureBox11";
	this->pictureBox11->Size = System::Drawing::Size(43, 67);
	this->pictureBox11->TabIndex = 15;
	this->pictureBox11->TabStop = false;
	this->pictureBox11->Visible = false;
	// 
	// pictureBox12
	// 
	this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
	this->pictureBox12->Location = System::Drawing::Point(813, 546);
	this->pictureBox12->Name = L"pictureBox12";
	this->pictureBox12->Size = System::Drawing::Size(43, 67);
	this->pictureBox12->TabIndex = 16;
	this->pictureBox12->TabStop = false;
	this->pictureBox12->Visible = false;
	// 
	// pictureBox13
	// 
	this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
	this->pictureBox13->Location = System::Drawing::Point(1009, 561);
	this->pictureBox13->Name = L"pictureBox13";
	this->pictureBox13->Size = System::Drawing::Size(43, 67);
	this->pictureBox13->TabIndex = 17;
	this->pictureBox13->TabStop = false;
	this->pictureBox13->Visible = false;
	// 
	// pictureBox14
	// 
	this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
	this->pictureBox14->Location = System::Drawing::Point(1058, 561);
	this->pictureBox14->Name = L"pictureBox14";
	this->pictureBox14->Size = System::Drawing::Size(43, 67);
	this->pictureBox14->TabIndex = 18;
	this->pictureBox14->TabStop = false;
	this->pictureBox14->Visible = false;
	// 
	// pictureBox15
	// 
	this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
	this->pictureBox15->Location = System::Drawing::Point(1285, 561);
	this->pictureBox15->Name = L"pictureBox15";
	this->pictureBox15->Size = System::Drawing::Size(43, 67);
	this->pictureBox15->TabIndex = 19;
	this->pictureBox15->TabStop = false;
	this->pictureBox15->Visible = false;
	// 
	// pictureBox16
	// 
	this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
	this->pictureBox16->Location = System::Drawing::Point(1334, 561);
	this->pictureBox16->Name = L"pictureBox16";
	this->pictureBox16->Size = System::Drawing::Size(43, 67);
	this->pictureBox16->TabIndex = 20;
	this->pictureBox16->TabStop = false;
	this->pictureBox16->Visible = false;
	// 
	// pictureBox17
	// 
	this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
	this->pictureBox17->Location = System::Drawing::Point(1420, 462);
	this->pictureBox17->Name = L"pictureBox17";
	this->pictureBox17->Size = System::Drawing::Size(43, 67);
	this->pictureBox17->TabIndex = 21;
	this->pictureBox17->TabStop = false;
	this->pictureBox17->Visible = false;
	// 
	// pictureBox18
	// 
	this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
	this->pictureBox18->Location = System::Drawing::Point(1469, 462);
	this->pictureBox18->Name = L"pictureBox18";
	this->pictureBox18->Size = System::Drawing::Size(43, 67);
	this->pictureBox18->TabIndex = 22;
	this->pictureBox18->TabStop = false;
	this->pictureBox18->Visible = false;
	// 
	// pictureBox19
	// 
	this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
	this->pictureBox19->Location = System::Drawing::Point(1393, 293);
	this->pictureBox19->Name = L"pictureBox19";
	this->pictureBox19->Size = System::Drawing::Size(43, 67);
	this->pictureBox19->TabIndex = 23;
	this->pictureBox19->TabStop = false;
	this->pictureBox19->Visible = false;
	// 
	// pictureBox20
	// 
	this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
	this->pictureBox20->Location = System::Drawing::Point(1442, 293);
	this->pictureBox20->Name = L"pictureBox20";
	this->pictureBox20->Size = System::Drawing::Size(43, 67);
	this->pictureBox20->TabIndex = 24;
	this->pictureBox20->TabStop = false;
	this->pictureBox20->Visible = false;
	// 
	// pictureBox21
	// 
	this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
	this->pictureBox21->Location = System::Drawing::Point(1352, 191);
	this->pictureBox21->Name = L"pictureBox21";
	this->pictureBox21->Size = System::Drawing::Size(43, 67);
	this->pictureBox21->TabIndex = 25;
	this->pictureBox21->TabStop = false;
	this->pictureBox21->Visible = false;
	// 
	// pictureBox22
	// 
	this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
	this->pictureBox22->Location = System::Drawing::Point(1401, 193);
	this->pictureBox22->Name = L"pictureBox22";
	this->pictureBox22->Size = System::Drawing::Size(43, 67);
	this->pictureBox22->TabIndex = 26;
	this->pictureBox22->TabStop = false;
	this->pictureBox22->Visible = false;
	// 
	// pictureBox23
	// 
	this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
	this->pictureBox23->Location = System::Drawing::Point(1222, 171);
	this->pictureBox23->Name = L"pictureBox23";
	this->pictureBox23->Size = System::Drawing::Size(43, 67);
	this->pictureBox23->TabIndex = 27;
	this->pictureBox23->TabStop = false;
	this->pictureBox23->Visible = false;
	// 
	// pictureBox24
	// 
	this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
	this->pictureBox24->Location = System::Drawing::Point(1156, 171);
	this->pictureBox24->Name = L"pictureBox24";
	this->pictureBox24->Size = System::Drawing::Size(43, 67);
	this->pictureBox24->TabIndex = 28;
	this->pictureBox24->TabStop = false;
	this->pictureBox24->Visible = false;
	// 
	// pictureBox25
	// 
	this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
	this->pictureBox25->Location = System::Drawing::Point(960, 171);
	this->pictureBox25->Name = L"pictureBox25";
	this->pictureBox25->Size = System::Drawing::Size(43, 67);
	this->pictureBox25->TabIndex = 29;
	this->pictureBox25->TabStop = false;
	this->pictureBox25->Visible = false;
	// 
	// pictureBox26
	// 
	this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
	this->pictureBox26->Location = System::Drawing::Point(911, 171);
	this->pictureBox26->Name = L"pictureBox26";
	this->pictureBox26->Size = System::Drawing::Size(43, 67);
	this->pictureBox26->TabIndex = 30;
	this->pictureBox26->TabStop = false;
	this->pictureBox26->Visible = false;
	// 
	// pictureBox27
	// 
	this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
	this->pictureBox27->Location = System::Drawing::Point(764, 207);
	this->pictureBox27->Name = L"pictureBox27";
	this->pictureBox27->Size = System::Drawing::Size(43, 67);
	this->pictureBox27->TabIndex = 31;
	this->pictureBox27->TabStop = false;
	this->pictureBox27->Visible = false;
	// 
	// pictureBox28
	// 
	this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
	this->pictureBox28->Location = System::Drawing::Point(813, 207);
	this->pictureBox28->Name = L"pictureBox28";
	this->pictureBox28->Size = System::Drawing::Size(43, 67);
	this->pictureBox28->TabIndex = 32;
	this->pictureBox28->TabStop = false;
	this->pictureBox28->Visible = false;
	// 
	// pictureBox29
	// 
	this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
	this->pictureBox29->Location = System::Drawing::Point(686, 333);
	this->pictureBox29->Name = L"pictureBox29";
	this->pictureBox29->Size = System::Drawing::Size(43, 67);
	this->pictureBox29->TabIndex = 33;
	this->pictureBox29->TabStop = false;
	this->pictureBox29->Visible = false;
	// 
	// pictureBox30
	// 
	this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
	this->pictureBox30->Location = System::Drawing::Point(735, 333);
	this->pictureBox30->Name = L"pictureBox30";
	this->pictureBox30->Size = System::Drawing::Size(43, 67);
	this->pictureBox30->TabIndex = 34;
	this->pictureBox30->TabStop = false;
	this->pictureBox30->Visible = false;
	// 
	// pictureBox31
	// 
	this->BoardFlop1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
	this->BoardFlop1->Location = System::Drawing::Point(960, 360);
	this->BoardFlop1->Name = L"pictureBox31";
	this->BoardFlop1->Size = System::Drawing::Size(43, 67);
	this->BoardFlop1->TabIndex = 35;
	this->BoardFlop1->TabStop = false;
	this->BoardFlop1->Visible = false;
	// 
	// pictureBox32
	// 
	this->BoardFlop2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
	this->BoardFlop2->Location = System::Drawing::Point(1032, 360);
	this->BoardFlop2->Name = L"pictureBox32";
	this->BoardFlop2->Size = System::Drawing::Size(43, 67);
	this->BoardFlop2->TabIndex = 36;
	this->BoardFlop2->TabStop = false;
	this->BoardFlop2->Visible = false;
	// 
	// pictureBox33
	// 
	this->BoardFlop3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
	this->BoardFlop3->Location = System::Drawing::Point(1095, 360);
	this->BoardFlop3->Name = L"pictureBox33";
	this->BoardFlop3->Size = System::Drawing::Size(43, 67);
	this->BoardFlop3->TabIndex = 37;
	this->BoardFlop3->TabStop = false;
	this->BoardFlop3->Visible = false;
	// 
	// pictureBox34
	// 
	this->BoardTurn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
	this->BoardTurn->Location = System::Drawing::Point(1156, 360);
	this->BoardTurn->Name = L"pictureBox34";
	this->BoardTurn->Size = System::Drawing::Size(43, 67);
	this->BoardTurn->TabIndex = 38;
	this->BoardTurn->TabStop = false;
	this->BoardTurn->Visible = false;
	// 
	// pictureBox35
	// 
	this->BoardRiver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
	this->BoardRiver->Location = System::Drawing::Point(1222, 360);
	this->BoardRiver->Name = L"pictureBox35";
	this->BoardRiver->Size = System::Drawing::Size(43, 67);
	this->BoardRiver->TabIndex = 39;
	this->BoardRiver->TabStop = false;
	this->BoardRiver->Visible = false;
	// 
	// button4
	// 
	this->NextStepButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->NextStepButton->Location = System::Drawing::Point(1633, 130);
	this->NextStepButton->Name = L"button4";
	this->NextStepButton->Size = System::Drawing::Size(197, 63);
	this->NextStepButton->TabIndex = 40;
	this->NextStepButton->Text = L"Next Step";
	this->NextStepButton->UseVisualStyleBackColor = true;
	this->NextStepButton->Click += gcnew System::EventHandler(this, &MainForm::NextStep_Click);
	this->NextStepButton->Visible = false;
	// 
	// button ShowAllHands

	this->ShowAllHandsButton = (gcnew System::Windows::Forms::Button());
	this->ShowAllHandsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->ShowAllHandsButton->Location = System::Drawing::Point(219, 340);
	this->ShowAllHandsButton->Name = L"ShowAllHandsButton";
	this->ShowAllHandsButton->Size = System::Drawing::Size(242, 50);
	this->ShowAllHandsButton->TabIndex = 41;
	this->ShowAllHandsButton->Text = L"Show All Hands";
	this->ShowAllHandsButton->UseVisualStyleBackColor = true;
	this->ShowAllHandsButton->Click += gcnew System::EventHandler(this, &MainForm::ShowAllHandsButton_Click);
	this->ShowAllHandsButton->Visible = false;
	
	//button HideAllHands
	this->HideAllHandsButton = (gcnew System::Windows::Forms::Button());
	this->HideAllHandsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->HideAllHandsButton->Location = System::Drawing::Point(219, 400); // adjust Y if you want different spacing
	this->HideAllHandsButton->Name = L"HideAllHandsButton";
	this->HideAllHandsButton->Size = System::Drawing::Size(242, 50);
	this->HideAllHandsButton->TabIndex = 42;
	this->HideAllHandsButton->Text = L"Hide All Hands";
	this->HideAllHandsButton->UseVisualStyleBackColor = true;
	this->HideAllHandsButton->Click += gcnew System::EventHandler(this, &MainForm::HideAllHandsButton_Click);
	this->HideAllHandsButton->Visible = false;

	// CheckButton
	this->CheckButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->CheckButton->Location = System::Drawing::Point(219, 460);
	this->CheckButton->Name = L"CheckButton";
	this->CheckButton->Size = System::Drawing::Size(115, 40);
	this->CheckButton->TabIndex = 43;
	this->CheckButton->Text = L"Check";
	this->CheckButton->UseVisualStyleBackColor = true;
	this->CheckButton->Click += gcnew System::EventHandler(this, &MainForm::CheckButton_Click);
	this->CheckButton->Visible = false;

	// CallButton
	this->CallButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->CallButton->Location = System::Drawing::Point(346, 460);
	this->CallButton->Name = L"CallButton";
	this->CallButton->Size = System::Drawing::Size(115, 40);
	this->CallButton->TabIndex = 44;
	this->CallButton->Text = L"Call";
	this->CallButton->UseVisualStyleBackColor = true;
	this->CallButton->Click += gcnew System::EventHandler(this, &MainForm::CallButton_Click);
	this->CallButton->Visible = false;

	// RaiseButton
	this->RaiseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->RaiseButton->Location = System::Drawing::Point(219, 506);
	this->RaiseButton->Name = L"RaiseButton";
	this->RaiseButton->Size = System::Drawing::Size(115, 40);
	this->RaiseButton->TabIndex = 45;
	this->RaiseButton->Text = L"Raise";
	this->RaiseButton->UseVisualStyleBackColor = true;
	this->RaiseButton->Click += gcnew System::EventHandler(this, &MainForm::RaiseButton_Click);
	this->RaiseButton->Visible = false;

	// FoldButton
	this->FoldButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->FoldButton->Location = System::Drawing::Point(346, 506);
	this->FoldButton->Name = L"FoldButton";
	this->FoldButton->Size = System::Drawing::Size(115, 40);
	this->FoldButton->TabIndex = 46;
	this->FoldButton->Text = L"Fold";
	this->FoldButton->UseVisualStyleBackColor = true;
	this->FoldButton->Click += gcnew System::EventHandler(this, &MainForm::FoldButton_Click);
	this->FoldButton->Visible = false;

	// MainForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(2121, 691);
	this->Controls->Add(this->ShowHandButton);
	this->Controls->Add(this->NextStepButton);
	this->Controls->Add(this->ShowAllHandsButton);
	this->Controls->Add(this->BoardRiver);
	this->Controls->Add(this->BoardTurn);
	this->Controls->Add(this->BoardFlop3);
	this->Controls->Add(this->BoardFlop2);
	this->Controls->Add(this->BoardFlop1);
	this->Controls->Add(this->pictureBox30);
	this->Controls->Add(this->pictureBox29);
	this->Controls->Add(this->pictureBox28);
	this->Controls->Add(this->pictureBox27);
	this->Controls->Add(this->pictureBox26);
	this->Controls->Add(this->pictureBox25);
	this->Controls->Add(this->pictureBox24);
	this->Controls->Add(this->pictureBox23);
	this->Controls->Add(this->pictureBox22);
	this->Controls->Add(this->pictureBox21);
	this->Controls->Add(this->pictureBox20);
	this->Controls->Add(this->pictureBox19);
	this->Controls->Add(this->pictureBox18);
	this->Controls->Add(this->pictureBox17);
	this->Controls->Add(this->pictureBox16);
	this->Controls->Add(this->pictureBox15);
	this->Controls->Add(this->pictureBox14);
	this->Controls->Add(this->pictureBox13);
	this->Controls->Add(this->pictureBox12);
	this->Controls->Add(this->pictureBox11);
	this->Controls->Add(this->Player2Picture);
	this->Controls->Add(this->Player1Picture);
	this->Controls->Add(this->Player10Picture);
	this->Controls->Add(this->Player9Picture);
	this->Controls->Add(this->Player8Picture);
	this->Controls->Add(this->Player7Picture);
	this->Controls->Add(this->Player6Picture);
	this->Controls->Add(this->Player5Picture);
	this->Controls->Add(this->Player4Picture);
	this->Controls->Add(this->Player3Picture);
	this->Controls->Add(this->DeckPictureBox);
	this->Controls->Add(this->TablePictureBox);
	this->Controls->Add(this->ExitButton);
	this->Controls->Add(this->AnalysisButton);
	this->Controls->Add(this->GameButton);
	this->Controls->Add(this->HideAllHandsButton);
	this->Controls->Add(this->CheckButton);
	this->Controls->Add(this->CallButton);
	this->Controls->Add(this->RaiseButton);
	this->Controls->Add(this->FoldButton);
	this->Name = L"MainForm";
	this->Text = L"MainForm";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablePictureBox))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeckPictureBox))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player3Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player4Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player5Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player6Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player7Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player8Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player9Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player10Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player1Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player2Picture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardFlop1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardFlop2))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardFlop3))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardTurn))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BoardRiver))->EndInit();
	this->ResumeLayout(false);

}

System::Void pokerGUI::MainForm::GameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	//game button
	if (table->getRoundInProgress() == false)
	{
		table->roundStart();
		table->getDeck().createDeck();
		table->getDeck().shuffleDeckGood();
	}

	AnalysisButton->Visible = false;
	GameButton->Visible = false;
	ExitButton->Visible = true;
	CheckButton->Visible = true;
	CallButton->Visible = true;
	FoldButton->Visible = true;
	RaiseButton->Visible = true;
	HideAllHandsButton->Visible = true;
	TablePictureBox->Visible = true;
	TablePictureBox->Refresh();
	DeckPictureBox->Visible = true; DeckPictureBox->BringToFront();
	DeckPictureBox->Refresh();
	ShowHandButton->Visible = true; ShowHandButton->BringToFront();
	Player1Picture->Visible = true; Player1Picture->BringToFront(); Player1Picture->Refresh();
	Player2Picture->Visible = true; Player2Picture->BringToFront(); Player2Picture->Refresh();
	Player3Picture->Visible = true; Player3Picture->BringToFront(); Player3Picture->Refresh();
	Player4Picture->Visible = true; Player4Picture->BringToFront(); Player4Picture->Refresh();
	Player5Picture->Visible = true; Player5Picture->BringToFront(); Player5Picture->Refresh();
	Player6Picture->Visible = true; Player6Picture->BringToFront(); Player6Picture->Refresh();
	Player7Picture->Visible = true; Player7Picture->BringToFront(); Player7Picture->Refresh();
	Player8Picture->Visible = true; Player8Picture->BringToFront(); Player8Picture->Refresh();
	Player9Picture->Visible = true; Player9Picture->BringToFront(); Player9Picture->Refresh();
	Player10Picture->Visible = true; Player10Picture->BringToFront(); Player10Picture->Refresh();

	pictureBox11->Visible = true; pictureBox11->BringToFront();
	pictureBox11->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox13->Visible = true; pictureBox13->BringToFront();
	pictureBox13->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox14->Visible = true; pictureBox14->BringToFront();
	pictureBox14->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox15->Visible = true; pictureBox15->BringToFront();
	pictureBox15->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox17->Visible = true; pictureBox17->BringToFront();
	pictureBox17->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox19->Visible = true; pictureBox19->BringToFront();
	pictureBox19->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox21->Visible = true; pictureBox21->BringToFront();
	pictureBox21->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox23->Visible = true; pictureBox23->BringToFront();
	pictureBox23->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox25->Visible = true; pictureBox25->BringToFront();
	pictureBox25->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox27->Visible = true; pictureBox27->BringToFront();
	pictureBox27->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox29->Visible = true; pictureBox29->BringToFront();
	pictureBox29->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox12->Visible = true; pictureBox12->BringToFront();
	pictureBox12->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox14->Visible = true; pictureBox14->BringToFront();
	pictureBox14->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox16->Visible = true; pictureBox16->BringToFront();
	pictureBox16->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox18->Visible = true; pictureBox18->BringToFront();
	pictureBox18->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox20->Visible = true; pictureBox20->BringToFront();
	pictureBox20->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox22->Visible = true; pictureBox22->BringToFront();
	pictureBox22->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox24->Visible = true; pictureBox24->BringToFront();
	pictureBox24->Refresh();
	System::Threading::Thread::Sleep(350);

	System::Threading::Thread::Sleep(350);
	pictureBox26->Visible = true; pictureBox26->BringToFront();
	pictureBox26->Refresh();
	System::Threading::Thread::Sleep(350);

	pictureBox28->Visible = true; pictureBox28->BringToFront();
	pictureBox28->Refresh();
	System::Threading::Thread::Sleep(350);
	pictureBox30->Visible = true; pictureBox30->BringToFront();
	pictureBox30->Refresh();
	System::Threading::Thread::Sleep(350);
	BoardFlop1->Visible = true; BoardFlop1->BringToFront(); //flop
	BoardFlop1->Refresh();
	System::Threading::Thread::Sleep(80);
	BoardFlop2->Visible = true; BoardFlop2->BringToFront();
	BoardFlop2->Refresh();
	System::Threading::Thread::Sleep(80);
	BoardFlop3->Visible = true; BoardFlop3->BringToFront();
	BoardFlop3->Refresh();
	System::Threading::Thread::Sleep(350);
	BoardTurn->Visible = true; BoardTurn->BringToFront();
	BoardTurn->Refresh();
	System::Threading::Thread::Sleep(350);
	BoardRiver->Visible = true; BoardRiver->BringToFront();
	BoardRiver->Refresh();
	System::Threading::Thread::Sleep(350);
	table->gameStart();
	NextStepButton->Visible = true;
	ShowAllHandsButton->Visible = true;
}



System::Void pokerGUI::MainForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//analysis button
	AnalysisButton->Visible = false;
	GameButton->Visible = false;
	ExitButton->Visible = true;

	pictureBox12->Visible = true;
	pictureBox12->Visible = true;
	//hideTimer->Start();
	//hideTimer->Start();

}

System::Void pokerGUI::MainForm::ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	//exit button
	for (int i = 0; i < 10; i++)
	{
		NodeList* temp = table->getSlotPosition(i)->tossCards();
		table->getDeck().putOnBottom(temp->remove(0));
		table->getDeck().putOnBottom(temp->remove(0));
	}
	NodeList temp = table->clearBoard();
	while (temp.length() > 0)
	{
		table->getDeck().putOnBottom(temp.remove(0));
	}
	//hiding board cards
	BoardFlop1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	BoardFlop2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	BoardFlop3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	BoardTurn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	BoardRiver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));

	//hiding ALL hand cards
	pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller"))); // our player
	pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));// our player
	pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));
	pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardbackblueSmaller")));

	//return all cards to deck
	//exit button - return all player cards and board cards to the deck
	for (int i = 0; i < 10; i++)
	{
		PlayerSlot* slot = table->getSlotPosition(i);
		slot->tossCards();
	}

	// return board cards to deck
	table->clearBoard();

	//delete deck
	table->getDeck().deleteDeck();



	HideAllHandsButton->Visible = false;
	ShowHandButton->Visible = false;
	AnalysisButton->Visible = true;
	GameButton->Visible = true;
	ExitButton->Visible = false;
	CheckButton->Visible = false;
	CallButton->Visible = false;
	RaiseButton->Visible = false;
	FoldButton->Visible = false;
	ShowAllHandsButton->Visible = false;
	TablePictureBox->Visible = false;
	DeckPictureBox->Visible = false;
	Player1Picture->Visible = false;
	Player2Picture->Visible = false;
	Player3Picture->Visible = false;
	Player4Picture->Visible = false;
	Player5Picture->Visible = false;
	Player6Picture->Visible = false;
	Player7Picture->Visible = false;
	Player8Picture->Visible = false;
	Player9Picture->Visible = false;
	Player10Picture->Visible = false;

	pictureBox11->Visible = false;//hraci karty
	pictureBox12->Visible = false; //hraci karty
	pictureBox13->Visible = false;// our player
	pictureBox14->Visible = false;// our player
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	pictureBox19->Visible = false;
	pictureBox20->Visible = false;
	pictureBox21->Visible = false;
	pictureBox22->Visible = false;
	pictureBox23->Visible = false;
	pictureBox24->Visible = false;
	pictureBox25->Visible = false;
	pictureBox26->Visible = false;
	pictureBox27->Visible = false;
	pictureBox28->Visible = false;
	pictureBox29->Visible = false;
	pictureBox30->Visible = false;
	BoardFlop1->Visible = false; //flop
	BoardFlop2->Visible = false;
	BoardFlop3->Visible = false;
	BoardTurn->Visible = false;
	BoardRiver->Visible = false;
	NextStepButton->Visible = false;

}


System::Void pokerGUI::MainForm::NextStep_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (table->getBoardFlopRevealed() == false)
	{
		Card* obtainedCard = table->getBoardCards().getCard(0);
		std::string key = "";
		key += cardValueToStringShort(obtainedCard->getValue());
		key += cardColorToStringShort(obtainedCard->getColor());
		System::String^ keyManaged = gcnew System::String(key.c_str());
		BoardFlop1->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));

		obtainedCard = table->getBoardCards().getCard(1);
		key = "";
		key += cardValueToStringShort(obtainedCard->getValue());
		key += cardColorToStringShort(obtainedCard->getColor());
		keyManaged = gcnew System::String(key.c_str());
		BoardFlop2->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));

		obtainedCard = table->getBoardCards().getCard(2);
		key = "";
		key += cardValueToStringShort(obtainedCard->getValue());
		key += cardColorToStringShort(obtainedCard->getColor());
		keyManaged = gcnew System::String(key.c_str());
		BoardFlop3->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
		table->setBoardFlopRevealed();
		return;
	}
	if (table->getBoardTurnRevealed() == false)
	{
		Card* obtainedCard = table->getBoardCards().getCard(3);
		std::string key = "";
		key += cardValueToStringShort(obtainedCard->getValue());
		key += cardColorToStringShort(obtainedCard->getColor());
		System::String^ keyManaged = gcnew System::String(key.c_str());
		BoardTurn->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
		table->setBoardTurnRevealed();
		return;
	}

	if (table->getBoardRiverRevealed() == false)
	{
		Card* obtainedCard = table->getBoardCards().getCard(4);
		std::string key = "";
		key += cardValueToStringShort(obtainedCard->getValue());
		key += cardColorToStringShort(obtainedCard->getColor());
		System::String^ keyManaged = gcnew System::String(key.c_str());
		BoardRiver->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
		table->setBoardRiverRevealed();
		return;
	}

}

System::Void pokerGUI::MainForm::ShowHandButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Card* obtainedCard = table->getSlotPosition(9)->getHand().getCard(0);
	std::string key = "";
	key += cardValueToStringShort(obtainedCard->getValue());
	key += cardColorToStringShort(obtainedCard->getColor());
	System::String^ keyManaged = gcnew System::String(key.c_str());
	pictureBox13->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));

	obtainedCard = table->getSlotPosition(9)->getHand().getCard(1);
	key = "";
	key += cardValueToStringShort(obtainedCard->getValue());
	key += cardColorToStringShort(obtainedCard->getColor());
	keyManaged = gcnew System::String(key.c_str());
	pictureBox14->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
}

System::Void pokerGUI::MainForm::ShowAllHandsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
		// Map 20 picture boxes (two per player) to an array so we can index them in a loop.
		array<System::Windows::Forms::PictureBox^>^ pics = gcnew array<System::Windows::Forms::PictureBox^>(18);
		pics[0] = pictureBox11;  pics[1] = pictureBox12;  pics[2] = pictureBox15;  pics[3] = pictureBox16;
		pics[4] = pictureBox17;  pics[5] = pictureBox18;  pics[6] = pictureBox19;  pics[7] = pictureBox20;
		pics[8] = pictureBox21;  pics[9] = pictureBox22;  pics[10] = pictureBox23; pics[11] = pictureBox24;
		pics[12] = pictureBox25; pics[13] = pictureBox26; pics[14] = pictureBox27; pics[15] = pictureBox28;
		pics[16] = pictureBox29; pics[17] = pictureBox30; //preskocili sme 13,14 lebo to su karty naseho hraca

		for (int playerIndex = 0; playerIndex < 9; playerIndex++)
		{
			PlayerSlot* slot = table->getSlotPosition(playerIndex);

			NodeList hand = slot->getHand();
			Card* c0 = hand.getCard(0);
			Card* c1 = hand.getCard(1);
				
					std::string key = "";
					key += cardValueToStringShort(c0->getValue());
					key += cardColorToStringShort(c0->getColor());
					System::String^ keyManaged = gcnew System::String(key.c_str());
					pics[playerIndex*2]->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
					pics[playerIndex * 2]->Visible = true;
					pics[playerIndex * 2]->BringToFront();
					pics[playerIndex * 2]->Refresh();

					key = "";
					key += cardValueToStringShort(c1->getValue());
					key += cardColorToStringShort(c1->getColor());
					keyManaged = gcnew System::String(key.c_str());
					pics[playerIndex * 2+1]->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
					pics[playerIndex * 2+1]->Visible = true;
					pics[playerIndex * 2+1]->BringToFront();
					pics[playerIndex * 2+1]->Refresh();
		}


}

System::Void pokerGUI::MainForm::HideAllHandsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Map 20 picture boxes (two per player) to an array so we can index them in a loop.
	array<System::Windows::Forms::PictureBox^>^ pics = gcnew array<System::Windows::Forms::PictureBox^>(18);
	pics[0] = pictureBox11;  pics[1] = pictureBox12;  pics[2] = pictureBox15;  pics[3] = pictureBox16;
	pics[4] = pictureBox17;  pics[5] = pictureBox18;  pics[6] = pictureBox19;  pics[7] = pictureBox20;
	pics[8] = pictureBox21;  pics[9] = pictureBox22;  pics[10] = pictureBox23; pics[11] = pictureBox24;
	pics[12] = pictureBox25; pics[13] = pictureBox26; pics[14] = pictureBox27; pics[15] = pictureBox28;
	pics[16] = pictureBox29; pics[17] = pictureBox30; //preskocili sme 13,14 lebo to su karty naseho hraca

	for (int playerIndex = 0; playerIndex < 9; playerIndex++)
	{

		std::string key = "cardbackblueSmaller";
		System::String^ keyManaged = gcnew System::String(key.c_str());
		pics[playerIndex * 2]->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
		pics[playerIndex * 2]->Visible = true;
		pics[playerIndex * 2]->BringToFront();
		pics[playerIndex * 2]->Refresh();

		pics[playerIndex * 2 + 1]->Image = cli::safe_cast<System::Drawing::Image^>(resources->GetObject(keyManaged));
		pics[playerIndex * 2 + 1]->Visible = true;
		pics[playerIndex * 2 + 1]->BringToFront();
		pics[playerIndex * 2 + 1]->Refresh();
	}


}

System::Void pokerGUI::MainForm::CheckButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: integrate with game logic
	System::Windows::Forms::MessageBox::Show("Check action");
}

System::Void pokerGUI::MainForm::CallButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: integrate with game logic
	System::Windows::Forms::MessageBox::Show("Call action");
}

System::Void pokerGUI::MainForm::RaiseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: prompt for amount and integrate with game logic
	System::Windows::Forms::MessageBox::Show("Raise action");
}

System::Void pokerGUI::MainForm::FoldButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// TODO: integrate with game logic
	System::Windows::Forms::MessageBox::Show("Fold action");
}