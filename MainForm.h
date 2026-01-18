#pragma once
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

namespace pokerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public: Table* table;
	public:MainForm(void);
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
	private: System::Windows::Forms::Button^ GameButton;
	private: System::Windows::Forms::Button^ AnalysisButton;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ ShowHandButton;
	private: System::Windows::Forms::PictureBox^ TablePictureBox;
	private: System::Windows::Forms::PictureBox^ DeckPictureBox;
	private: System::Windows::Forms::PictureBox^ Player3Picture;
	private: System::Windows::Forms::PictureBox^ Player4Picture;
	private: System::Windows::Forms::PictureBox^ Player5Picture;
	private: System::Windows::Forms::PictureBox^ Player6Picture;
	private: System::Windows::Forms::PictureBox^ Player7Picture;
	private: System::Windows::Forms::PictureBox^ Player8Picture;
	private: System::Windows::Forms::PictureBox^ Player9Picture;
	private: System::Windows::Forms::PictureBox^ Player10Picture;
	private: System::Windows::Forms::PictureBox^ Player1Picture;
	private: System::Windows::Forms::PictureBox^ Player2Picture;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ BoardFlop1;
	private: System::Windows::Forms::PictureBox^ BoardFlop2;
	private: System::Windows::Forms::PictureBox^ BoardFlop3;
	private: System::Windows::Forms::PictureBox^ BoardTurn;
	private: System::Windows::Forms::PictureBox^ BoardRiver;
	private: System::Windows::Forms::Timer^ hideTimer;
	private: System::Windows::Forms::Button^ ShowAllHandsButton;
	private: System::Windows::Forms::Button^ NextStepButton;
	private: System::Windows::Forms::Button^ HideAllHandsButton;
	private: System::Windows::Forms::Button^ CheckButton;
	private: System::Windows::Forms::Button^ CallButton;
	private: System::Windows::Forms::Button^ RaiseButton;
	private: System::Windows::Forms::Button^ FoldButton;

	protected:

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
		System::ComponentModel::ComponentResourceManager^ resources;
		void InitializeComponent(void);
#pragma endregion
	private: System::Void GameButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void NextStep_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ShowHandButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ShowAllHandsButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void HideAllHandsButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CallButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void RaiseButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FoldButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
