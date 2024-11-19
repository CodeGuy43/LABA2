#pragma once

namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Инициализация дерева
			root = nullptr;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ref struct Node {
			int value;
			Node^ left;
			Node^ right;
			int level;
		};

		Node^ root; // Корень бинарного дерева
		const int maxLevels = 10; // Максимум уровней в дереве

		System::ComponentModel::Container^ components;

		// UI элементы
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;








	private: System::Windows::Forms::Label^ label1;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			   this->splitContainer1->Panel2->SuspendLayout();
			   this->splitContainer1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // splitContainer1
			   // 
			   this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->splitContainer1->IsSplitterFixed = true;
			   this->splitContainer1->Location = System::Drawing::Point(0, 0);
			   this->splitContainer1->Margin = System::Windows::Forms::Padding(2);
			   this->splitContainer1->Name = L"splitContainer1";
			   this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			   // 
			   // splitContainer1.Panel1
			   // 
			   this->splitContainer1->Panel1->BackColor = System::Drawing::Color::White;
			   this->splitContainer1->Panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			   this->splitContainer1->Panel1->ForeColor = System::Drawing::Color::Black;
			   this->splitContainer1->Panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel1_Paint);
			   // 
			   // splitContainer1.Panel2
			   // 
			   this->splitContainer1->Panel2->BackColor = System::Drawing::Color::LightGray;
			   this->splitContainer1->Panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->splitContainer1->Panel2->Controls->Add(this->button7);
			   this->splitContainer1->Panel2->Controls->Add(this->button6);
			   this->splitContainer1->Panel2->Controls->Add(this->button3);
			   this->splitContainer1->Panel2->Controls->Add(this->button4);
			   this->splitContainer1->Panel2->Controls->Add(this->numericUpDown2);
			   this->splitContainer1->Panel2->Controls->Add(this->button1);
			   this->splitContainer1->Panel2->Controls->Add(this->textBox1);
			   this->splitContainer1->Panel2->Controls->Add(this->button5);
			   this->splitContainer1->Panel2->Controls->Add(this->label1);
			   this->splitContainer1->Panel2->Controls->Add(this->button2);
			   this->splitContainer1->Panel2->Controls->Add(this->numericUpDown1);
			   this->splitContainer1->Panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel2_Paint);
			   this->splitContainer1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->splitContainer1->Size = System::Drawing::Size(965, 707);
			   this->splitContainer1->SplitterDistance = 556;
			   this->splitContainer1->SplitterWidth = 3;
			   this->splitContainer1->TabIndex = 0;
			   // 
			   // button7
			   // 
			   this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button7->ForeColor = System::Drawing::Color::Black;
			   this->button7->Location = System::Drawing::Point(238, 90);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(182, 48);
			   this->button7->TabIndex = 13;
			   this->button7->Text = L"Задание";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			   // 
			   // button6
			   // 
			   this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button6->ForeColor = System::Drawing::Color::Black;
			   this->button6->Location = System::Drawing::Point(238, 2);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(182, 84);
			   this->button6->TabIndex = 12;
			   this->button6->Text = L"Очистить дерево";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::White;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button3->ForeColor = System::Drawing::Color::Black;
			   this->button3->Location = System::Drawing::Point(22, 2);
			   this->button3->Margin = System::Windows::Forms::Padding(2);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(182, 84);
			   this->button3->TabIndex = 4;
			   this->button3->Text = L"Вывести значения в префиксном\r\n порядке";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::White;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button4->ForeColor = System::Drawing::Color::Black;
			   this->button4->Location = System::Drawing::Point(460, 2);
			   this->button4->Margin = System::Windows::Forms::Padding(2);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(182, 84);
			   this->button4->TabIndex = 5;
			   this->button4->Text = L"Вывести сумму всех листьев\r\n";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->BackColor = System::Drawing::Color::White;
			   this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->numericUpDown2->ForeColor = System::Drawing::Color::Black;
			   this->numericUpDown2->Location = System::Drawing::Point(663, 34);
			   this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			   this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1500, 0, 0, 0 });
			   this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(95, 24);
			   this->numericUpDown2->TabIndex = 11;
			   this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::White;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->ForeColor = System::Drawing::Color::Black;
			   this->button1->Location = System::Drawing::Point(460, 90);
			   this->button1->Margin = System::Windows::Forms::Padding(2);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(182, 50);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Добавить число";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::White;
			   this->textBox1->Enabled = false;
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox1->ForeColor = System::Drawing::Color::Black;
			   this->textBox1->Location = System::Drawing::Point(22, 90);
			   this->textBox1->Margin = System::Windows::Forms::Padding(2);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(182, 48);
			   this->textBox1->TabIndex = 8;
			   this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			   // 
			   // button5
			   // 
			   this->button5->BackColor = System::Drawing::Color::White;
			   this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button5->ForeColor = System::Drawing::Color::Black;
			   this->button5->Location = System::Drawing::Point(778, 2);
			   this->button5->Margin = System::Windows::Forms::Padding(2);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(182, 84);
			   this->button5->TabIndex = 6;
			   this->button5->Text = L"Удалить вершины, имеющие значение: ";
			   this->button5->UseVisualStyleBackColor = false;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(319, 17);
			   this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(0, 17);
			   this->label1->TabIndex = 3;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::White;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button2->ForeColor = System::Drawing::Color::Black;
			   this->button2->Location = System::Drawing::Point(778, 90);
			   this->button2->Margin = System::Windows::Forms::Padding(2);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(182, 50);
			   this->button2->TabIndex = 2;
			   this->button2->Text = L"Удалить число";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->BackColor = System::Drawing::Color::White;
			   this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->numericUpDown1->ForeColor = System::Drawing::Color::Black;
			   this->numericUpDown1->Location = System::Drawing::Point(663, 105);
			   this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			   this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1500, 0, 0, 0 });
			   this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(95, 24);
			   this->numericUpDown1->TabIndex = 0;
			   this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(965, 707);
			   this->Controls->Add(this->splitContainer1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->MaximizeBox = false;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->splitContainer1->Panel2->ResumeLayout(false);
			   this->splitContainer1->Panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			   this->splitContainer1->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // Метод для отрисовки дерева в Panel1
		   void DrawTree(Node^ node, Graphics^ g, int x, int y, int xOffset, int yOffset)
		   {
			   if (node == nullptr) return;

			   // Увеличиваем значение смещения для большей дистанции
			   const int horizontalSpacing = 30;  // Увеличиваем горизонтальное смещение
			   const int verticalSpacing = 30;     // Увеличиваем вертикальное смещение

			   // Сначала рисуем линии к дочерним узлам
			   if (node->left != nullptr) {
				   g->DrawLine(Pens::Black, x, y, x - xOffset, y + yOffset - 12.5);
				   DrawTree(node->left, g, x - xOffset, y + yOffset, xOffset + horizontalSpacing, yOffset + verticalSpacing);
			   }
			   if (node->right != nullptr) {
				   g->DrawLine(Pens::Black, x, y, x + xOffset, y + yOffset - 12.5);
				   DrawTree(node->right, g, x + xOffset, y + yOffset, xOffset + horizontalSpacing, yOffset + verticalSpacing);
			   }

			   // Рисуем узел
			   g->FillEllipse(Brushes::LightGray, x - 15, y - 15, 30, 30);
			   g->DrawEllipse(Pens::Black, x - 15, y - 15, 30, 30); // Обводка кружка
			   g->DrawString(node->value.ToString(), this->Font, Brushes::Black, x - 10, y - 10);
		   }

		   // Обновление отображения дерева
		   void UpdateTreeDisplay()
		   {
			   Graphics^ g = splitContainer1->Panel1->CreateGraphics();
			   g->Clear(splitContainer1->Panel1->BackColor);
			   DrawTree(root, g, splitContainer1->Panel1->Width / 2, 50, 100, 50);
		   }

		   // Функция для добавления элемента в дерево
		   Node^ AddNode(Node^ node, int value, int level)
		   {
			   if (node == nullptr) {
				   if (level > maxLevels) {
					   MessageBox::Show("Превышено максимальное количество уровней!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return nullptr;
				   }
				   Node^ newNode = gcnew Node();
				   newNode->value = value;
				   newNode->left = nullptr;
				   newNode->right = nullptr;
				   newNode->level = level;
				   return newNode;
			   }

			   if (value <= node->value) {
				   node->left = AddNode(node->left, value, level + 1);
			   }
			   else if (value > node->value) {
				   node->right = AddNode(node->right, value, level + 1);
			   }
			   return node;
		   }

		   // Функция для удаления элемента из дерева
		   Node^ RemoveNode(Node^ node, int value)
		   {
			   if (node == nullptr) {
				   MessageBox::Show("Элемент не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return nullptr;
			   }

			   if (value < node->value) {
				   node->left = RemoveNode(node->left, value);
			   }
			   else if (value > node->value) {
				   node->right = RemoveNode(node->right, value);
			   }
			   else {
				   // Узел найден
				   if (node->left == nullptr && node->right == nullptr) return nullptr; // Это листовой узел, просто удаляем его
				   if (node->left == nullptr) return node->right; // Если у узла только правое поддерево
				   if (node->right == nullptr) return node->left; // Если у узла только левое поддерево

				   Node^ max = FindMax(node->left); // Находим максимум в левом поддереве
				   node->value = max->value; // Копируем значение максимума в текущий узел
				   node->left = RemoveNode(node->left, max->value); // Удаляем максимум из левого поддерева
			   }

			   return node;
		   }

		   Node^ FindMax(Node^ node)
		   {
			   while (node->right != nullptr) {
				   node = node->right;
			   }
			   return node;
		   }

		   //Функция для обхода дерева в префиксном порядке
		   void PreOrderTraversal(Node^ node, System::Text::StringBuilder^ output) {
			   if (node == nullptr) return;

			   output->Append(node->value.ToString() + " "); // Шаг 1: Добавляем значение текущего узла в StringBuilder
			   PreOrderTraversal(node->left, output);        // Шаг 2: Рекурсивно обходим левое поддерево
			   PreOrderTraversal(node->right, output);       // Шаг 3: Рекурсивно обходим правое поддерево
		   }


		   // Функция для удаления всех элементов дерева
		   Node^ RemoveAllNodes(Node^ node)
		   {
			   if (node == nullptr) {
				   return nullptr;
			   }

			   // Рекурсивно удаляем все элементы дерева
			   node->left = RemoveAllNodes(node->left);
			   node->right = RemoveAllNodes(node->right);

			   // Удаляем текущий узел
			   delete node;

			   return nullptr;  // Обязательно возвращаем nullptr, чтобы указать, что дерево полностью удалено
		   }

		   //Функция для удаления всех узлов со значением из нумерика
		   Node^ RemoveAllNodesWithGivenValue(Node^ node, int targetValue)
		   {
			   if (node == nullptr) {
				   return nullptr;
			   }

			   // Рекурсивно удаляем узлы в левом и правом поддереве
			   node->left = RemoveAllNodesWithGivenValue(node->left, targetValue);
			   node->right = RemoveAllNodesWithGivenValue(node->right, targetValue);

			   if (node->value == targetValue) {
				   // Если значение текущего узла равно заданному значению, удаляем его и возвращаем объединение левого и правого поддеревьев
				   if (node->left == nullptr) {
					   return node->right;
				   }
				   else if (node->right == nullptr) {
					   return node->left;
				   }

				   Node^ rightmostNode = FindRightmostNode(node->left);
				   rightmostNode->right = node->right;

				   return node->left;
			   }

			   return node;
		   }

		   Node^ FindRightmostNode(Node^ node)
		   {
			   if (node == nullptr || node->right == nullptr) {
				   return node;
			   }

			   return FindRightmostNode(node->right);
		   }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int value = Decimal::ToInt32(numericUpDown1->Value);
		root = AddNode(root, value, 1);
		UpdateTreeDisplay();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int value = Decimal::ToInt32(numericUpDown1->Value);
		root = RemoveNode(root, value);
		UpdateTreeDisplay();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Text::StringBuilder^ output = gcnew System::Text::StringBuilder();
		PreOrderTraversal(root, output);
		textBox1->Text = output->ToString();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int leafSum = 0; // Переменная для хранения суммы листьев
		int leafCount = 0; // Переменная для подсчета количества листьев

		// Вызываем функцию, которая будет обновлять leafSum и leafCount
		getLeafSumAndCount(root, leafSum, leafCount);

		if (leafCount == 0) {
			MessageBox::Show("Листья не найдены!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Сумма значений всех листьев: " + leafSum.ToString() + "\nКол-во листьев: " + leafCount.ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

		   int getLeafSumAndCount(Node^ node, int& leafSum, int& leafCount) {
			   if (node == nullptr) {
				   return 0; // Если узел пустой, возвращаем 0
			   }

			   // Рекурсивно вызываем для левого и правого поддеревьев
			   getLeafSumAndCount(node->left, leafSum, leafCount);
			   getLeafSumAndCount(node->right, leafSum, leafCount);

			   // Если это лист (оба поддерева пустые), добавляем его значение и увеличиваем счетчик
			   if (node->left == nullptr && node->right == nullptr) {
				   leafSum += node->value; // Добавляем значение узла к сумме
				   leafCount++; // Увеличиваем счетчик листьев
			   }

			   return leafCount; 
		   }



	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Получаем значение для удаления из Numericupdown2
		int valueToDelete = Convert::ToInt32(numericUpDown2->Value);

		// Удаляем узлы с заданным значением из дерева
		root = RemoveAllNodesWithGivenValue(root, valueToDelete);

		// Обновляем отображение дерева
		UpdateTreeDisplay();

		// Отображаем информацию о выполненном удалении
		textBox1->Text = "Узлы со значением " + valueToDelete.ToString() + " были удалены.";
	}

	private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e){
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Загрузка формы
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// Вызываем функцию RemoveAllNodes для удаления всех элементов дерева
	root = RemoveAllNodes(root);

	// Очищаем отображение дерева
	UpdateTreeDisplay();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ message = "Задание:\n";
	message += "1) Вывести значения в префиксном порядке\n";
	message += "2) Вывести сумму значений всех листьев данного дерева (листом дерева называется его вершина, не имеющая дочерних вершин).\n";
	message += "3) Удалить из дерева все вершины, имеющие значение, введенное с клавиатуры.\n\n";
	message += "Матвеев Дмитрий ИНБс-2301";

	MessageBox::Show(message, "Задание", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}