#include "MyForm.h"

bool  lab42::MyForm::is_ditgit(System::String^ line) {
	int n = line->Length;
	if (n < 1) return false;
	for (int i = 0; i < n; i++) {
		if (abs(line[i] - '0') > 10) return false;

	}
	return true;
}

System::Void lab42::MyForm::update()
{

	textBoxA->Text = model.get_value('A').ToString();
	numericUpDownA->Value = model.get_value('A');
	trackBarA->Value = model.get_value('A');

	textBoxB->Text = model.get_value('B').ToString();
	numericUpDownB->Value = model.get_value('B');
	trackBarB->Value = model.get_value('B');

	textBoxC->Text = model.get_value('C').ToString();
	numericUpDownC->Value = model.get_value('C');
	trackBarC->Value = model.get_value('C');

}

System::Void lab42::MyForm::setValue(System::Object^ sender, System::EventArgs^ e) { update(); }
	

System::Void lab42::MyForm::getEror(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("¬ведено слишком большое число");
}

System::Void lab42::MyForm::textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)

{
	char type = 'A';
	System::String^ text = "";
	if (sender == textBoxA) {
		text = textBoxA->Text;
	}
	else if (sender == textBoxB) {
		type = 'B';
		text = textBoxB->Text;
	}
	else {
		type = 'C';
		text = textBoxC->Text;
	}

	if (e->KeyCode == Keys::Enter) {
		int a = 0; 
		if (is_ditgit(text)) 
			model.set_value(Int32::Parse(text), type);
		
		else
			MessageBox::Show("¬ведено не число");
		
	}
}

System::Void lab42::MyForm::numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (sender == numericUpDownA) 
		model.set_value((int)numericUpDownA->Value, 'A');
	else if (sender == numericUpDownB)
		model.set_value((int)numericUpDownB->Value, 'B');
	else 
		model.set_value((int)numericUpDownC->Value, 'C');
	
}

System::Void lab42::MyForm::trackBar_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (sender == trackBarA)
		model.set_value((int)trackBarA->Value, 'A');
	else if (sender == trackBarB)
		model.set_value((int)trackBarB->Value, 'B');
	else
		model.set_value((int)trackBarC->Value, 'C');
	
	
}

System::Void lab42::MyForm::textBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	System::String^ text = "";
	if (sender == textBoxA) text = textBoxA->Text;
	else if (sender == textBoxB) text = textBoxB->Text;
	else text = textBoxC->Text;

	if (!is_ditgit(text) && text != "") update();
	
}

System::Void lab42::MyForm::textBox_Leave(System::Object^ sender, System::EventArgs^ e) { update(); };

