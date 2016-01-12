/* This project is basically for the user's who want to develop C++ menu driven programs and building application through their real life. It
contains an assumend example of an organization (XYZ Company). The personnel department of the organization interacts with regard to the employee
managment, the job criteria, and salary behaviour of about more than 100 employees. Also they have number of terms and contitions for employees (which is given
in the programs by comment line either in // or /* ). It comprises a menu driven program, and includes number of options, procedures for each selective modules
with a complete class declaration of OOPs concept. The complete project handles two data bases as DETAILS.dat and EMP.dat. This project includes number of libraries
including different header files and their respective functions which is noted down after the source code of the project.

According to the requirements, the employer deals with certain attributes like:
	emp_no		-	Employee number
	name		-	Employee name
	address		-	Employee address
	dd, mm, yy	-	Date of birth & date of joining
	city		-	Employee city
	state		- 	Employee state
	zip			-	Employee Zip code
	salary		-	Employee basic salary
	grade		-	Employee grade according to grade calculation
	emp_job		-	Employee job/designation
	deptno		-	Employee department number

And the above attributes are divided into two databases as: DETAILS.dat & EMP.dat data file
The field contents of DETAILS.dat as:
		int emp_no;
		char name[30], address[30];
		int dd, mm, yy;
		char city[10], state[2], zip[10];
and the fields contents of EMP.dat as:
		int emp_no;
		int dd, mm, yy;
		char grade[2];
		char emp_job[12];
		float salary;
		int deptno;

This project is developed using C++ class concepts and having number of different
user defined function (UDFs) as follows:

DRAW_LINE(.....)

This function passes four parameters including three integer and one character to
draw different lines to design the screen beautiful. The character parameter draw the
ASCII character line-by-line on screen. So, for horizontal line draw this function is usefull.

DRAW_VER(.....)

The DRAW_VER(.....) function is helpful for drawing vertical lines on screen to design
either menu or program forms for data entry, modify, display, delete etc..

DRAW_BOX(.....)

This function creates different size of boxes on the screen according to the respective
parameters. Out of all the parameters they draw boxes till the limit you want.


MAIN_SCREEN(.....)

This is the main screening menu which will display your 6 different prompts and having different activities.
Each prompt is connected with different functions to perform the respective purposes. Out of all the options
the last one produces another sub-menu for modifying and deleting existing employee informations.

While handling the main menu you can press any selective number to perform the operation or press 0 (Zero) to exit from
the main menu. But it is also helpful in almost all menus that, you can press 0 (zero) to exit from the respective menu.

MENU_EDIT(.....)

This is one of the sub function which is connected from the MAIN_SCREEN() function to perform the modification and deletion operation
on employee data from DETAILS.dat and EMP.dat data file.

All the the ways the menus are perform the operation according to the employee number (emp_no) except
the "Open New Employee" of MAIN_SCREEN() function because, the "Open New Employee" form automatically creates
the employee number after a brief search to the existing employee numbers. Basically, the numbers are generating automatically, like your 'Banking Project'.

EMP_APPEND(.....)

The EMP_APPEND() function declared in both details and employee class. This function is used to append new records into both DETAIL.dat and EMP.dat data file
by passing their recpective parameters.

modify()

This function is used to display a modification screen for modifying the employee details by entering the employee number. While modifying the employee number
(emp_no) will be entered by the user and will search in both the data bases, and then the respective records can modified.
The function uses a function found_employee() to search the particular employee is exists or not. If exists then the function
display(..) will display the details of employee from DETAILS.dat and EMP.dat data file. After modifying the data it again
re-writes the same in both the data files through modify_employee(.....) and modify_salary(.....) functions respectively.

delete_employee(.....)

This is the sub-function of "Edit Employee" prompt of main menu. This function is used to delete an existing employee details from both DETAILS.dat and EMP.dat data file. This function is declared both in
details class and employee class. While in delete_employee function, you have to enter the employee number for delete! and the deleted informations will display in the screen through the function display_employee() and a prompt for delete. If you will press
'Y/y' then the records will be deleted from both DETAILS.dat and EMP.dat data file.

display_emp_list()

This function is used to display all existing employee list from DETAILS.dat and EMP.dat data file. While listing the records of all employees it used two other function
found_salary() and *found_job from employee class to displays the designation and salary of each employee.

last_emp_no(....)

This function detects the last employee number in the DETAILS.dat data file. While entering new records into data files, it will first find the last employee number for the new_employee(...) function for
generating the next employee number automatically.

found_employee(.....)

As the project operated with only the key field employee number and when the employee number entered it always checks in the data base DETAILS.dat that whether the employee is exist or not. If exists, then further
the employee can processed eiter for modify, delete, display or etc.

*return_name(...)

If their is any requirement of the employee name to display at any momemt then, this function returns the name of the employee from
DETAILS.dat data file with the parameter employee number (emp_no). This function uses emp_no as the parameter to search in the data base.

*return_address(...)

If their is any requirement of the employee address to display at any momemt then, this function returns the address of the employee from
DETAILS.dat data file with the parameter employee number (emp_no). This function uses emp_no as the parameter to search in the data base.

display_from_details(...)

This function is used to display the employee details from DETAILS.dat data file. Before displaying the name and address information, the fuction
passes emp_no as a parameter for which employee detail is to display. If the employee no. found the the related informations will display in the screen.
s
recordno(...)

This is very important function which returns the record position in the data file. While knowing the record number it will easy for modifying the existing employee details in
both DETAILS.dat and EMP.dat data files.

display(...)

This function is used to display the information related to employee number.
Because, this function passes a parameter emp_no and according the number the information is displayed.
This is a multi-declared function in class detials and employee.

send_DATA(...)

While generating a salary report, this function displays the name and address information from DETAILS.dat data file with the help of
employee number (emp_no as a parameter).

modify_employee(...)

This function is used to re-write the name and address information both in the DETAILS.dat and EMP.dat data file. The function
passes number of parameters which will be re-written in data file.

new_employee(.....)

This is the first function used for first option "Open New Employee" in MAIN_SCREEN() function. When any new employee entered into the company, the detailed
information is entered by using this function.

close_employee()

This is similar function like delete_employee(). It uses one parameter emp_no, for which employee has to delete from EMP.dat data file.
If it is true to delete then the employee salary behaviours will be deleted from EMP.dat data file.

display_employee()

This is an another option in MAIN_SCREEN() function who dipslays the existing employee lists in the screen. Also, this function uses other two function like *return_job
and return_salary for displaying job/designation and salary simultaneously with the employee name and address.

Left_clear() and Right_clear()

This two function is used to clear the existing screen from a spacified row and till a specified column. This functoin uses two parameters as int, int.
For left from a column position to till a last column. If your display/output screen divided into two halves, then the screen may clear till 39th and 79th respectively according to
the parameters of the functions.

month_salary()

This function is used to create a monthly salary slip of an employee. The user has to enter the employee number and if the employee exists in DETAILS.dat data file then, the respective screen of salary slip will be displayed and
all other benefits and deductions will calculated including income tax (as on table given before the function source code). The final net salary displays individually employee wise on screen.

modify_salary()

The function modify_salary() is used to re-write the modified record in EMP.dat data file.
When the user modifies the existing data according to the previous data, then all the fields related to EMP.dat data file
will receive through the parameters in modify_salary() function which will re-write in the previous position of EMP.dat data file.
All the way the function uses one major in-build function seekp(), which find the position of the record in the data file where the record will be
re-written. Once the position will found, then the modified record will written easily on the existing record.

found_salary()

This function is used to found the salary of a selected employee, for which receives a parameter as emp_no into the function and
returns the found salary into the display_emp_list function.

found_job()

On the same way the function also found the job/designation of a selected employee, for which recieves a parameter as emp_no into the function and
return the found emp_job into the display_emp_list function.

change_salary()

The basic aim of the function is used to change the employee salary when he/she gets any increment on basic salary.
While changing the salary in EMP.dat data file, all other information related with the employee in the data file will again
over written like modification techniques. Because while writting only one field into file the record contents may distrub or
shifted its position either backward or forward, so the key record number may changes which you won't except. Thus to avoid this type
of concurrency the user has to pass all information related to the data file again on same way like addition of new record. But here the record is
not appended but over written.

box_for_display()

This function display the employee number and the date on the screen. Also the function calls the function
display_from_details to display the informations from DETAILS.dat data file accourding to the employee number,
which is one of the parameter in both box_for_display() and display_from_details() functions.

*/


// Declaration of header files
#include <iostream.h>
#include <fstream.h>
#include <process.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iomanip.h>

// This file includede from your library directory or compiler to support the graphics mode
#include "gh.cpp"

class BOX_CLASS
{
	public:
		void DRAW_LINE(int, int, int, char);
		void DRAW_VER(int, int, int, char);
		void DRAW_BOX(int, int, int, int, char);
};

// Class for main control
class control
{
	public:
		void MAIN_SCREEN(void);
		void help(void);
	private:
		void MENU_EDIT(void);
};

// details class for employee address section
class details
{
	public:
		void EMP_APPEND(int, char t_name[30], char t_address[30], int tdd, int tmm, int tyy, char t_city[10], char t_state[3], char t_zip[10]);
		void display_emp_list(void); // Displaying customers employee list
		void delete_employee(int); // Deleting customers employee
		void modify(void);   	// To modify the customer employee information
		int last_emp_no(void); // To know the last employee number
		int found_employee(int); // To found the employee is in "DETAILS.dat" or not

		char *return_name(int); // Function for validation entry of customer name
		char *return_address(int); // Function for validation entry of customer address
		void display_from_details(int); // Function for displaying all the details from DETAILS.dat data file
		int recordno(int);
		void display(int); // To display the customer employee
		void send_DATA(int); // Send details information into salary report

	private:
		void modify_employee(int, char t_name[30], char t_address[30], int tdd, int tmm, int tyy, char t_city[10], char t_state[3], char t_zip[10]);	// Function to modify the customer employee
//		void box_for_list(void);	// Drawing a box;
		int emp_no;
		char name[30], address[30];
		int dd, mm, yy;
		char city[10], state[3], zip[10];
};

// employee class for salary and designation
class employee
{
	public:
		void new_employee(void);  // Function to create a new employee
		void close_employee(void);	// Function to close an employee
		void display_employee(void); // Function to display the employees
		void Left_clear(int, int); // Function to perform a left clear on specified row from a specified column
		void Right_clear(int, int); // Function to perform a right clear on specified row from a specified column
		void month_salary(void); // Function to list monthWise change_salary report
		void display(int); // Function to display a change_salary employee
		void modify_salary(int, int, int, int, char t_grade[2], char t_emp_job[12], float, int); // Function to modify other informations related to employee
		int recordno(int);
		float found_salary(int);	// Function to find salary from EMP.dat data file
		char *found_job(int);	// Function to find the employee job for displaying a total list
		void change_salary(void); // Function to change the employee salary

	private:
		void EMP_APPEND(int, int, int, int, char t_grade[2], char t_emp_job[12], float, int); // Function to add change_salary records
		void delete_employee(int); // Function to delete a change_salary record
		void box_for_display(int); // Function for displaying box
		int emp_no;
		int dd, mm, yy; // To store the system date/ Enter date
		char grade[2];			// As the employee type is Deposit or Withdraw
		char emp_job[12];	// employee type as Cheque or Cash
		float salary;
		int deptno;
};

// Function for horizontal line draw
void BOX_CLASS::DRAW_LINE(int column1, int column2, int row, char c)
{
	for (column1; column1 <= column2; column1++)
	{
		gotoxy(column1, row);
		cout << c;
	}
}

// Function for vertical line draw
void BOX_CLASS::DRAW_VER(int row1, int row2, int column, char c)
{
	for (row1; row1 <= row2; row1++)
	{
		gotoxy(column, row1);
		cout << c;
	}
}

void BOX_CLASS::DRAW_BOX(int column1, int row1, int column2, int row2, char c)
{
	char ch = 218;
	char c1, c2, c3, c4;
	char l1 = 196, l2 = 179;
	if (c == ch)
	{
		c1 = 218;
		c2 = 191;
		c3 = 217;
		c4 = 217;
		l1 = 196;
		l2 = 179;
	}
	else
	{
		c1 = c;
		c2 = c;
		c3 = c;
		c4 = c;
		l1 = c;
		c2 = c;
	}
	gotoxy(column1, row1);
	cout << c1;
	gotoxy(column2, row1);
	cout << c2;
	gotoxy(column1, row2);
	cout << c3;
	gotoxy(column2, row2);
	cout << c4;
	column1++;
	column2--;
	DRAW_LINE(column1, column2, row1, l1); //Horizontal line
	DRAW_LINE(column1, column2, row2, l1);
	column1--;
	column2++;
	row1++;
	row2--;
	DRAW_VER(row1, row2, column1, l2); // Vertical line
	DRAW_VER(row1, row2, column2, l2);
}

// Function for main menu
void control::MAIN_SCREEN(void)
{
	char ch;

	/* request auto detection of graph driver*/
	int gdriver = DETECT, gmode, errorcode;
	while (ch <= '6')
	{

		// Initializes the graphics system
		initgraph(&gdriver, &gmode, "");

		BOX_CLASS s;

		// setbkcolor sets the current background color using the palette
		setbkcolor(10);

		// setcolor sets the current drawing color
		setcolor(RED);

		// Sets the current text characteristics
		settextstyle(0,HORIZ_DIR,1);	// Changes the text style (font)

		// outtextxy displays a string at the specified location (graphics mode)
		outtextxy(420,90," <0> = Exit");	// To display a text in a particular row and coloumn position

		setcolor(5);
		settextstyle(1,HORIZ_DIR,2);

		// outtextxy displays a string at the specified location (graphics mode)
		outtextxy(170,350, "Developed by Author & Her Team");
		outtextxy(220,80,"EMPLOYEE MENU");

		settextstyle(3,HORIZ_DIR,1);
		setcolor(RED);
		outtextxy(220,140, "1. Open New employee");
		outtextxy(220,160, "2. List of employees");
		outtextxy(220,180,"3. See Individual employee");
		outtextxy(220,200, "4. EmpChange_salary");
		outtextxy(220,220, "5. SalarySlip");
		outtextxy(220,240, "6. Edit employee");
		outtextxy(230,300,"Enter Your Choice ");

		// Draws a rectangle (graphics mode)
		rectangle(200,120,455,277);
		rectangle(400,307,450,327);

		ch = getche();

		// Shuts down the graphics system
		closegraph();

		switch (ch)
		{
			case '0':
				clrscr();
				exit(0); // Option to exit from main menu
				break;
			case '1':
			{
				employee a;
				a.new_employee(); // New employee member function
				break;
			}
			case '2':
			{
				details EMP_ADD;
				EMP_ADD.display_emp_list(); // Glogal list of employee function
				break;
			}
			case '3':
			{
				employee a;
				a.display_employee(); // Displaying individual employees all change_salary
				break;
			}
			case '4':
			{
				employee a;
				a.change_salary(); // Daily change_salary for individual employee
				break;
			}
			case '5':
			{
				employee a;
				a.month_salary(); // Monthly report for any employee
				break;
			}
			case '6':
			{
				initgraph(&gdriver, &gmode, "");
				MENU_EDIT(); // Sub menu for modifying or deleting any employee
				break;
			}
		}
	}
	for (int i = 25; i >= 1; i--)
	{
		delay(2);
		gotoxy(1, i);
		clrscr();
	}
}

// Function for modify record and delete record menu
void control::MENU_EDIT(void)
{
	char ch;
	while (1)
	{

		setbkcolor(7);
		setcolor(5);
		settextstyle(1,HORIZ_DIR,2);
		outtextxy(260,80,"EDIT MENU");
		setcolor(4);
		rectangle(200,120,455,277);
		settextstyle(3,HORIZ_DIR,1);

		outtextxy(220,130, "1: Modify employee");
		outtextxy(220,160,"2. Close employee");
		outtextxy(220,190,"0. Quit");

		outtextxy(230,220,"Enter your choice : ");
		ch = getche();

		closegraph();
		if (ch == 27)
			break;
		else
			if (ch == '1')
			{
				details EMP_ADD;
				EMP_ADD.modify();
				break;
			}
			else
				if (ch == '2')
				{
					employee a;
					a.close_employee();
					break;
				}
				else
					if (ch == '0')
						break;
	}
}

// Function for help menu
void control::help(void)
{
	// getch gets a character from console but does not echo to the screen
	getch();

	clrscr();
	BOX_CLASS s;
	s.DRAW_BOX(2, 1, 79, 25, 218);
	s.DRAW_BOX(25, 2, 54, 4, 219);
	gotoxy(27, 3);

	// cprintf  sends formatted output to the text window on the screen
	cprintf("Welcome to Employee Project");

	// textcolor selects a new character color in text mode
	textcolor(LIGHTGRAY);
	delay(2);

	gotoxy(5, 6);
	cout << "This project is used to handle the employees in an organization and ";
	delay(2);
	gotoxy(5, 7);
	cout << "for keeping the employee detailed information is computerized manner.";
	delay(2);
	gotoxy(5, 9);
	cout << "And also handles the following option as follows: ";
	gotoxy(6, 11);
	cout << "-In first option you append new employee.";
	delay(2);
	gotoxy(6, 12);
	cout << "-In second option you can list out all the employees with basic salary.";
	delay(2);
	gotoxy(6, 13);
	cout << "-In third option you can an individual employee status.";
	delay(2);
	gotoxy(6, 14);
	cout << "-In fourth option you can change any employee basic salary.";
	delay(2);
	gotoxy(6, 15);
	cout << "-The fifth option helps you to generate a monthWise salary slip of";
	delay(2);
	gotoxy(7, 16);
	cout << "of individual employee.";
	gotoxy(6, 17);
	cout << "-In sixth option you can modify or delete any employee.";
	delay(2);
	gotoxy(6, 18);
	cout << "	Where it will display two another prompts in the sub menu.";
	delay(2);
	gotoxy(6, 19);
	cout << "	1->modification, 2->deletion and 0->Quit";

	gotoxy(6, 21);
	cout << "Note-: For Exit form any menu press 0 (Zero) at any point then you will";
	delay(2);
	gotoxy(13, 22);
	cout << "simply came back to the previous menu or to the source program.";
	delay(2);

	textcolor(BLACK+BLINK);
	textbackground(WHITE);

	gotoxy(26, 25);
	cprintf("Press any key to continue...");
	textcolor(LIGHTGRAY);
	textbackground(BLACK);
	gotoxy(25, 2);
	getch();
	for (int i = 25; i >= 1; i--)
	{
		delay(4);
		gotoxy(1, i);
		clrscr();
	}
}

// Function for modifying data record
void details::modify(void)
{
	clrscr();
	int j;
	char t_acc[10];
	int t, t_emp_no;
	gotoxy(17, 1);
	cout << "<0>=Exit";
	gotoxy(5,5);
	cout << "Enter the employee no. ";
	gets(t_acc);
	t = atoi(t_acc);
	t_emp_no = t;
	if (t_emp_no == 0)
		return;
	clrscr();

	if (!found_employee(t_emp_no))
	{
		gotoxy(5, 5);
		cout << "\7Employee not found";
		getch();
		return;
	}

	gotoxy(71, 1);
	cout << "<0>=Exit";
	textbackground(WHITE);
	gotoxy(3, 3);
	for (j = 1; j<= 76; j++)
		cprintf(" ");
	textbackground(BLACK);
	textcolor(BLACK+BLINK);
	textbackground(WHITE);
	gotoxy(30, 3);
	cprintf("Modify Employee Screen");
	textcolor(LIGHTGRAY);
	textbackground(BLACK);

	int d1, m1, y1;
	struct date d;		// For extracting system date
	getdate(&d);
	d1 = d.da_day;
	m1 = d.da_mon;
	y1 = d.da_year;
	gotoxy(4, 2);
	cout << "Date: " << d1 << "/" << m1 << "/" << y1;
	char ch;

	// Displaying from DETAILS.dat data file
	display(t_emp_no);

	employee a;

	// Displaying from EMP.dat data file
	a.display(t_emp_no);

	do
	{
		a.Left_clear(5, 15);
		gotoxy(2, 13);
		for (j = 1; j<= 76; j++)
			cprintf("=");
		textbackground(WHITE);
		textbackground(BLACK);
		textcolor(BLACK);
		textbackground(WHITE);
		gotoxy(20, 14);
		cprintf("Modify This Employee <y/n>? ");
		ch = getch();
		textcolor(LIGHTGRAY);
		textbackground(BLACK);
		gotoxy(2, 15);
		for (j = 1; j<= 76; j++)
			cprintf("=");

		if (ch == '0')
			return;
		ch = toupper(ch);
	}while (ch != 'N' && ch != 'Y');
	if (ch == 'N')
		return;

	// Declared the temporary fields for modifying data again
	int modified = 0, valid;
	char t_name[30], t_address[30];
	char t_city[10], t_state[3], t_zip[10];
	char t_emp_job[12];
	int tdd, tmm, tyy;
	int t_deptno;
	float t_salary;
	char t_grade[2];

	// Displays the headings
	gotoxy(5, 16);
	cout << "Name : ";
	gotoxy(5, 17);
	cout << "Address : ";
	gotoxy(5, 18);
	cout << "Date of Birth : ";
	gotoxy(5, 19);
	cout << "City : ";
	gotoxy(5, 20);
	cout << "State : ";
	gotoxy(5, 21);
	cout << "Zip : ";
	gotoxy(40, 16);
	cout << "Designation : ";
	gotoxy(40, 17);
	cout << "Date of Joining : ";
	gotoxy(40, 18);
	cout << "Department no. : ";
	gotoxy(40, 19);
	cout << "Basic Salary ";
	gotoxy(40, 20);
	cout << "Grade : ";

	do
	{
		a.Left_clear(12, 16);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Name or Press Enter for No Change";
		valid = 1;
		gotoxy(12, 16);
		gets(t_name);
		strupr(t_name);
		if (t_name[0] == '0')
			return;
		if (strlen(t_name) > 25)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Name should not greater than 25");
			getch();
		}
	} while (!valid);

	do
	{
		a.Left_clear(15, 17);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Address or press enter for no Change";
		valid = 1;
		gotoxy(15, 17);
		gets(t_address);
		strupr(t_address);
		if (t_address[0] == '0')
			return;
		if (strlen(t_address) > 25)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Address should not greater than 25");
			getch();
		}
	} while (!valid);

	if (strlen(t_address) > 0)
		modified = 1;
	if (!modified)
		return;
	a.Left_clear(21, 18);

	gotoxy(5, 23);
	cout << "Enter Date of Birth ";
	gotoxy(21, 18);
	cin >>tdd;
	gotoxy(23, 18);
	cout << "-";
	gotoxy(24, 18);
	cin >> tmm;
	gotoxy(26, 18);
	cout << "-";
	gotoxy(27, 18);
	cin >> tyy;
	a.Left_clear(5,23);

	do
	{
		a.Left_clear(12, 19);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter City and press enter for no change";
		valid = 1;
		gotoxy(12, 19);
		gets(t_city);
		if (t_city[0] == '0')
			return;
		if (strlen(t_city) > 9)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7City should not greater than 9");
			getch();
		}
	} while (!valid);
	a.Left_clear(5, 23);

	do
	{
		a.Left_clear(14, 20);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter State and press enter for no change";
		valid = 1;
		gotoxy(14, 20);
		gets(t_state);
		strupr(t_state);
		if (t_state[0] == '0')
			return;
		if (strlen(t_state) == 0 || strlen(t_state) > 2)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7State should not greater than 1");
			getch();
		}
	} while (!valid);
	a.Left_clear(5, 23);

	do
	{
		a.Left_clear(15, 21);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Zip Code and enter for no change";
		valid = 1;
		gotoxy(15, 21);
		gets(t_zip);
		strupr(t_zip);
		if (t_zip[0] == '0')
			return;
		if (strlen(t_zip) == 0 || strlen(t_zip) > 9)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Zip should not greater than 9");
			getch();
		}
	} while (!valid);
	a.Left_clear(5, 23);

	do
	{
		a.Right_clear(59, 16);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Designation and Enter for no change";
		valid = 1;
		gotoxy(59, 16);
		gets(t_emp_job);
		strupr(t_emp_job);
		if (t_emp_job[0] == '0')
			return;
		if (strlen(t_emp_job) == 0 || strlen(t_emp_job) > 11)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Designation should not greater than 9");
			getch();
		}
	} while (!valid);
	a.Right_clear(59, 17);

	gotoxy(59, 17);
	cin >>d1;
	gotoxy(61, 17);
	cout << "-";
	gotoxy(62, 17);
	cin >> m1;
	gotoxy(64, 17);
	cout << "-";
	gotoxy(65, 17);
	cin >> y1;

	gotoxy(59, 18);
	cin >> t_deptno;

	do
	{
		a.Right_clear(59, 19);
		a.Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Basic Salary not less that 2500";
		valid = 1;
		char t[10];	// Declare as character type and will convert into float type using atof() function
		gotoxy(59, 19);
		gets(t);
		t_salary = atof(t);
		if (t[0] == '0')
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Should not less than 2500");
			getch();
		}
	} while (!valid);

	if (t_salary >= 2500 && t_salary <= 3000)
	{
		strcpy(t_grade, "C");
	}
	else
		if (t_salary >= 3001 && t_salary <= 4000)
		{
			strcpy(t_grade, "B");
		}
		else
			if (t_salary >= 4001 && t_salary <= 5000)
			{
				strcpy(t_grade, "A");
			}
			else
				if (t_salary > 5000)
				{
					strcpy(t_grade, "O");
				}
				else
					return;


	gotoxy(59, 20);
	cout << t_grade; // Calculate a grade function at here
	do
	{
		a.Left_clear(5, 23);
		gotoxy(5, 22);
		cout << "Do you want to save Changes <Y/N>: ";
		ch = getche();
		if (ch == '0')
			return;
		ch = toupper(ch);
	} while (ch != 'N' && ch != 'Y');
	if (ch == 'N')
		return;

	// Function to rewrite the name and address details into DETAILS.DAT
	modify_employee(t_emp_no, t_name, t_address, tdd, tmm, tyy, t_city, t_state, t_zip);

	// Function to rewrite the salary and job details into EMP.DAT
	a.modify_salary(t_emp_no, d1, m1, y1, t_grade, t_emp_job, t_salary, t_deptno);

	gotoxy(5, 23);
	cout << "\7Record modified";
	gotoxy(25, 23);
	cout << "Press any key to continue...";
	getch();
}

// Display the record from DETAILS.dat data file for modifying display
void details::display(int t_emp_no)
{
	fstream file;
	int d1, m1, y1;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);

	while (file.read((char *)this, sizeof(details)))
	{
		if (t_emp_no == emp_no)
		{
			gotoxy(8, 4);
			cout << "Employee no. " << emp_no;
			gotoxy(10, 6);
			cout << "Name : ";
			puts(name);
			gotoxy(10, 7);
			cout << "Address : ";
			puts(address);
			gotoxy(10, 8);
			d1 = dd;
			m1 = mm;
			y1 = yy;
			cout << "Date of Birth " << d1 << "-" << m1 << "-" << y1;
			gotoxy(10, 9);
			cout << "City : ";
			puts(city);
			gotoxy(10, 10);
			cout << "State : ";
			puts(state);
			gotoxy(10, 11);
			cout << "Zip : ";
			puts(zip);
			getch();
			break;
		}
	}
	file.close();
}

// Display the record from EMP.dat data file for modifying display
void employee::display(int t_emp_no)
{
	fstream sfile;
	sfile.open("EMP.dat", ios::in);
	sfile.seekg(0, ios::beg);

	while (sfile.read((char *)this, sizeof(employee)))
	{
		if (t_emp_no == emp_no)
		{
			gotoxy(40, 6);
			cout << "Designation : ";
			puts(emp_job);
			gotoxy(40, 7);
			cout << "Joining Date : ";
			gotoxy(59, 7);
			cout << dd << "-" << mm << "-" << yy;
			gotoxy(40, 8);
			cout << "Dept. No. : " << deptno;
			gotoxy(40, 9);
			cout << "Basic Salary RS. " << setw(15)    // setwidth
						<< setprecision(2)    // set position of decimal point
						<< setiosflags(ios::left)   // set left justified output
						<< setiosflags(ios::showpoint)  // always show decimal point
						<< setiosflags(ios::fixed)    // set fixed notation for display
						<< salary;
			gotoxy(40, 10);
			cout << "Grade : " << grade;
			break;
		}
	}
	sfile.close();
}

// Function to insert modifyed data into DETAILS.dat data file
void details::modify_employee(int t_emp_no, char t_name[30], char t_address[30], int tdd, int tmm, int tyy, char t_city[10], char t_state[3], char t_zip[10])
{
	int recno;
	recno = recordno(t_emp_no);
	fstream file;
	file.open("DETAILS.dat", ios::out|ios::ate);

	emp_no = t_emp_no;
	strcpy(name, t_name);
	strcpy(address, t_address);
	dd = tdd;
	mm = tmm;
	yy = tyy;
	strcpy(city, t_city);
	strcpy(state, t_state);
	strcpy(zip, t_zip);

	// Finding the location in file
	int location = 0;
	location = (recno-1) * sizeof(details);

	file.seekg(0, ios::beg);
	// Search the position in file
	file.seekp(location);

	// Re-write the contents in DETAILS.dat data file
	file.write((char *)this, sizeof(details));
	file.close();
	return;
}

// Function to modify data related to salary in EMP.dat
void employee::modify_salary(int t_emp_no, int d1, int m1, int y1, char t_grade[2], char t_emp_job[12], float t_salary, int  t_deptno)
{
	int recno = 0;
	recno = recordno(t_emp_no);
	fstream sfile;
	sfile.open("EMP.dat", ios::out|ios::ate);

	emp_no = t_emp_no;
	dd = d1;
	mm = m1;
	yy = y1;
	strcpy(grade, t_grade);
	strcpy(emp_job, t_emp_job);
	salary = t_salary;
	deptno = t_deptno;

	// Find the location in file
	int location = 0;

	location = (recno-1) * sizeof(employee);

	sfile.seekg(0, ios::beg);

	// Search the position in file
	sfile.seekp(location);

	// Re-write the contents in EMP.dat data file
	sfile.write((char *)this, sizeof(employee));
	sfile.close();
	return;
}

// Function to find last employee no from DETAILS.dat data file
int details::last_emp_no(void)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);

	int count = 0;

	// Searches the last record no in file
	while (file.read((char *)this, sizeof(details)))
		count = emp_no;
	file.close();

	return count;

}

// Function to append record into DETAILS.dat data file
void details::EMP_APPEND(int t_emp_no, char t_name[30], char t_address[30], int tdd, int tmm, int tyy, char t_city[10], char t_state[3], char t_zip[10])
{
	emp_no = t_emp_no;
	strcpy(name, t_name);
	strcpy(address, t_address);
	dd = tdd;
	mm = tmm;
	yy = tyy;
	strcpy(city, t_city);
	strcpy(state, t_state);
	strcpy(zip, t_zip);

	// Append the record into file
	fstream file;
	file.open("DETAILS.dat", ios::out|ios::app);
	file.write((char *)this, sizeof(details));
	file.close();
}

// Function to delete a selected record from DETAILS.dat data file
void details::delete_employee(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	fstream temp;
	temp.open("TEMP.dat", ios::out);
	file.seekg(0,ios::beg);

	// Delete the record using copy method into temporaty file
	while (!file.eof())
	{
		file.read((char *)this, sizeof(details));
		if (file.eof())
			break;
		if (emp_no != t_emp_no)
			temp.write((char *)this, sizeof(details));
	}
	file.close();
	temp.close();
	file.open("DETAILS.dat", ios::out);
	temp.open("TEMP.dat", ios::in);
	temp.seekg(0, ios::beg);

	// Overwrites the temporay contents into original DETAILS.dat data file
	while (!temp.eof())
	{
		temp.read((char *)this, sizeof(details));
		if (temp.eof())
			break;
		if (emp_no != t_emp_no)
			file.write((char *)this, sizeof(details));
	}
	file.close();
	temp.close();
}

// Function to append a record into EMP.dat data file
void employee::EMP_APPEND(int t_emp_no, int d1, int m1, int y1, char t_grade[2], char t_emp_job[12], float t_salary, int  t_deptno)
{
	emp_no = t_emp_no;
	dd = d1;
	mm = m1;
	yy = y1;
	strcpy(grade, t_grade);
	strcpy(emp_job, t_emp_job);
	salary = t_salary;
	deptno = t_deptno;

	fstream sfile;

	// Append the new record into EMP.dat data file
	sfile.open("EMP.dat", ios::out|ios::app);
	sfile.write((char *)this, sizeof(employee));
	sfile.close();
}

// Function to delete a selected record from EMP.dat data file
void employee::delete_employee(int t_emp_no)
{
	fstream file;
	file.open("EMP.dat", ios::in);
	fstream temp;
	temp.open("TEMP.dat", ios::out);
	file.seekg(0, ios::beg);

	// Delete the record using copy method into temporaty file
	while (!file.eof())
	{
		file.read((char *)this, sizeof(employee));
		if (file.eof())
			break;
		if (emp_no != t_emp_no)
			temp.write((char *)this, sizeof(employee));
	}
	file.close();
	temp.close();
	file.open("EMP.dat", ios::out);
	temp.open("TEMP.dat", ios::in);
	temp.seekg(0, ios::beg);

	// Overwrites the temporay contents into original EMP.dat data file
	while (!temp.eof())
	{
		temp.read((char *)this, sizeof(employee));
		if (temp.eof())
			break;
		if (emp_no != t_emp_no)
			file.write((char *)this, sizeof(employee));
	}
	file.close();
	temp.close();
}

// Function to find the basic salary of an employee from EMP.dat for display_emp_list() function
float employee::found_salary(int t_emp_no)
{
	float t_salary = 0.0;
	int xemp_no;
	fstream sfile;
	sfile.open("EMP.dat", ios::in);
	sfile.seekg(0, ios::beg);

	// Searches the record in EMP.dat data file
	while (sfile.read((char *)this, sizeof(employee)))
	{
		xemp_no = emp_no;
		if (xemp_no == t_emp_no)
		{
			t_salary = salary;
			break;
		}
	}
	sfile.close();
	return (t_salary);
}


// Function to find the designation of an employee from EMP.dat for display_emp_list() function
char *employee::found_job(int t_emp_no)
{
	char t_emp_job[12];
	int xemp_no;
	fstream sfile;
	sfile.open("EMP.dat", ios::in);
	sfile.seekg(0, ios::beg);

	// Searches the emp_job in EMP.dat data file
	while (sfile.read((char *)this, sizeof(employee)))
	{
		xemp_no = emp_no;
		if (xemp_no == t_emp_no)
		{
			strcpy(t_emp_job,  emp_job);
			break;
		}
	}
	sfile.close();
	return (t_emp_job);
}

// Function to change the employee salary either to increase or decrease accouding to emp_no
void employee::change_salary(void)
{
	clrscr();
	char t_acc[10];
	int t, t_emp_no, j;
	char t_grade[2], t_emp_job[12];
	int d1, m1, y1;
	float t_salary = 0.0, x_salary;
	int t_deptno;

	gotoxy(17, 1);
	cout << "<0>=Exit";
	gotoxy(5,5);
	cout << "Enter the employee no. ";
	gets(t_acc);
	t = atoi(t_acc);
	t_emp_no = t;
	if (t_emp_no == 0)
		return;
	clrscr();
	details EMP_ADD;
	if (!EMP_ADD.found_employee(t_emp_no))
	{
		gotoxy(5, 5);
		cout << "\7Employee not found";
		getch();
		return;
	}
	gotoxy(71, 1);
	cout << "<0>=Exit";
	textbackground(WHITE);
	gotoxy(3, 3);
	for (j = 1; j<= 76; j++)
		cprintf(" ");

	textbackground(BLACK);
	textcolor(BLACK+BLINK);
	textbackground(WHITE);
	gotoxy(30, 3);
	cprintf("Salary Change Screen");

	// Change to normal colour mode
	textcolor(LIGHTGRAY);
	textbackground(BLACK);
	fstream sfile;
	sfile.open("EMP.dat", ios::in);
	sfile.seekg(0, ios::beg);

	// Changes the salary and modify the details in EMP.dat data file
	while (sfile.read((char *)this, sizeof(employee)))
	{
		if (t_emp_no == emp_no)
		{
			strcpy(t_grade, grade);
			strcpy(t_emp_job,  emp_job);
			d1 = dd;
			m1 = mm;
			y1 = yy;
			t_salary = salary;
			t_deptno = deptno;
			gotoxy(30, 10);
			cout << "Designation : ";
			puts(t_emp_job);
			gotoxy(30, 12);
			cout << "Joining Date : ";
			gotoxy(49, 12);
			cout << d1 << "-" << m1 << "-" << y1;
			gotoxy(30, 14);
			cout << "Dept. No. : " << t_deptno;
			gotoxy(30, 16);
			cout << "Basic Salary RS. " << setw(15)
						<< setprecision(2)
						<< setiosflags(ios::left)
						<< setiosflags(ios::showpoint)
						<< setiosflags(ios::fixed)
						<< t_salary;
			gotoxy(30, 18);
			cout << "Grade : " << grade;
			gotoxy(30, 20);
			cout << "Enter New Salary : ";
			cin >> x_salary;
			break;
		}
	}
	sfile.close();

	if (x_salary >= 2500 && x_salary <= 3000)
	{
		t_salary = x_salary;
		strcpy(t_grade, "C");
	}
	else
		if (x_salary >= 3001 && x_salary <= 4000)
		{
			t_salary = x_salary;
			strcpy(t_grade, "B");
		}
		else
			if (x_salary >= 4001 && x_salary <= 5000)
			{
				t_salary = x_salary;
				strcpy(t_grade, "A");
			}
			else
				if (x_salary > 5000)
				{
					t_salary = x_salary;
					strcpy(t_grade, "O");
				}
				else
				{
					gotoxy(25, 22);
					cout << "Press any key to continue...";
					getch();
					return;
				}

	// Passes all the paremeters for modifying salary (overwriting)
	modify_salary(t_emp_no, d1, m1, y1, t_grade, t_emp_job, t_salary, t_deptno);
	gotoxy(20, 22);

	cout << "Salary Changed !!! Press Any key to continue ... ";
	getch();
}

// Function to display all the employee lists including basic salary.
void details::display_emp_list(void)
{
	employee a;
	clrscr();
	int flag;
	fstream file;
	int memp_no, xemp_no;
	float x_salary = 0.0;
	char xemp_job[12];
	gotoxy(25,2);

	cout << "Employees List";
	gotoxy(25, 3);
	cout << "==============";

	int d1, m1, y1;
	struct date d;		// For extracting system date
	getdate(&d);
	d1 = d.da_day;
	m1 = d.da_mon;
	y1 = d.da_year;
	gotoxy(62, 3);
	cout << "Date: " << d1 << "-" << m1 << "-" << y1;

	gotoxy(1, 4);
	for (int j = 1; j <= 79; j++)
		cout << "=";

	gotoxy(1, 5);
	cout << "Emp_no#";
	gotoxy(10,5);
	cout << "Name";
	gotoxy(30,5);
	cout << "Address";
	gotoxy(55, 5);
	cout << "Designation";
	gotoxy(70,5);
	cout << "Salary";

	gotoxy(1, 6);
	for (j = 1; j <= 79; j++)
		cout << "=";

	file.open("DETAILS.dat", ios::in);
	file.seekg(0,ios::beg);

	int row = 7;

	// Displaying the employee salary and designation details from EMP.dat data file
	while (file.read((char *)this, sizeof(details)))
	{
		flag = 0;
		delay(2);
		gotoxy(3, row);
		cout << emp_no;
		memp_no = emp_no;
		gotoxy(10, row);
		puts(name);
		gotoxy(30, row);
		puts(address);

		// Calls to print the employee designation
		strcpy(xemp_job, a.found_job(memp_no)); // Function to copy designation
		gotoxy(55, row);
		cout << xemp_job;

		// Calls to print the employee salary
		x_salary = a.found_salary(memp_no);
		if (x_salary > 0)
		{
			gotoxy(70, row);
			cout << setw(15)
				<< setprecision(2)
				<< setiosflags(ios::left)
				<< setiosflags(ios::showpoint)
				<< setiosflags(ios::fixed)
				<< x_salary;
		}
		row++;
		if (row == 23)
		{
			flag = 1;
			row = 6;
			gotoxy(4, 24);
			cout << "Press any key to continue.... ";
			getch();
			clrscr();
		}
	}
	gotoxy(1, row);
	for (j = 1; j <= 79; j++)
		cout << "=";
	file.close();
	if (!flag)
	{
		gotoxy(25, 24);
		cout << "Press any key to continue...";
		getch();
	}
	getch();
}
// Function to clear a row from left of the screen
void employee::Left_clear(int col, int row)
{
	for (int j = col; j <= 39; j++)
	{
		gotoxy(j, row);
		cout << " ";
	}
}

// Function to clear a row from right of the screen
void employee::Right_clear(int col, int row)
{
	for (int j = col; j <= 79; j++)
	{
		gotoxy(j, row);
		cout << " ";
	}
}

// Function to search a record found in DETAILS.dat data file
int details::found_employee(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);
	int found = 0;

	// Checks the employee is their in DETAILS.dat data file or not
	while (file.read((char *)this, sizeof(details)))
	{
		if (emp_no == t_emp_no)
		{
			found = 1;
			break;
		}
	}
	file.close();
	return found;
}

// Function for returning the name of employee from DETAILS.dat data file
char *details::return_name(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);
	char t_name[30];

	// Returns the name of employee from DETAILS.dat data file
	while (file.read((char *)this, sizeof(details)))
	{
		if (emp_no == t_emp_no)
		{
			strcpy(t_name, name);
			break;
		}
	}
	file.close();
	return t_name;
}

// Function for returning the address of employee from DETAILS.dat data file
char *details::return_address(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);
	char t_address[30];

	// Returns the employee address
	while (file.read((char *)this, sizeof(details)))
	{
		if (emp_no == t_emp_no)
		{
			strcpy(t_address, address);
			break;
		}
	}
	file.close();
	return t_address;
}

// Function for displaying name and address details from DETAILS.dat data file
void details::display_from_details(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);
	char t_zip[10];
	while (file.read((char *)this, sizeof(details)))
	{
		if (emp_no == t_emp_no)
		{
			gotoxy(10, 8);
			cout << "Name : " << name;
			gotoxy(10, 10);
			cout << "Address : " << address;
			gotoxy(10, 12);
			cout << "Date of Birth : " << dd << "-" << mm << "-" << yy;
			gotoxy(10, 14);
			cout << "City : " << city;
			gotoxy(10, 16);
			cout << "State : " << state;
			gotoxy(10, 18);
			cout << "Zip Code : " << zip;
			break;
		}
	}
	file.close();
}

// Function for displaying data from DETAILS.dat data file
void employee::box_for_display(int t_emp_no)
{
	int d1, m1, y1;
	struct date d;
	getdate(&d);
	d1 = d.da_day;
	m1 = d.da_mon;
	y1 = d.da_year;

	gotoxy(10, 6);
	cout << "Employee No. " << t_emp_no;

	gotoxy(55, 6);
	cout << "Date: " << d1 << "/" << m1 << "/" << y1;

	gotoxy(8, 7);
	for (int i = 1; i <=64; i++)
		cout << "=";
	details EMP_ADD;
	EMP_ADD.display_from_details(t_emp_no);
}

// Function for displaying details from EMP.dat data file
void employee::display_employee(void)
{
	clrscr();
	char t_acc[10];
	int j;
	int t, t_emp_no;
	gotoxy(71, 1);
	cout << "<0>=Exit";
	gotoxy(5, 5);
	cout << "Enter employee no. ";
	gets(t_acc);
	t = atoi(t_acc);
	t_emp_no = t;
	if (t_emp_no == 0)
		return;
	clrscr();
	details EMP_ADD;
	if (!EMP_ADD.found_employee(t_emp_no))
	{
		gotoxy(5, 5);
		cout << "\7employee not found";
		getch();
		return;
	}

	gotoxy(30, 4);
	cout << "Individual Employee";
	gotoxy(30, 5);
	cout << "===================";

	box_for_display(t_emp_no);

	fstream file;
	file.open("EMP.dat", ios::in);

	// Displays the employee salary and designation details
	while (file.read((char *)this, sizeof(employee)))
	{
		if (emp_no == t_emp_no)
		{
			gotoxy(40, 8);
			cout << "Designation : " << emp_job;
			gotoxy(40, 10);
			cout << "Date of Joining : " << dd << "-" << mm << "-" << yy;
			gotoxy(40, 12);
			cout << "Salary : " << setw(15)
				<< setprecision(2)
				<< setiosflags(ios::left)
				<< setiosflags(ios::showpoint)
				<< setiosflags(ios::fixed)
				<< salary;

			gotoxy(40, 14);
			cout << "Department No. : " << deptno;
			gotoxy(40, 16);
			cout << "Grade : " << grade;
			delay(2);
			break;
		}
	}
	file.close();
	gotoxy(8, 19);
	for (int i = 1; i <=64; i++)
		cout << "=";
	gotoxy(25, 20);
	cout << "Press any key to Continue ...";
	getch();
}

/* The accounts department gives salary to each individuals on every month by certain conditions. All the terms and conditions are assumed percentages and values. But it
may different from company to company. The employees are benefited certain earnings and deductions as:

Earnings:
	DA 	- Dearness Allowance
	HRA 	- House Rent Allowance
	CONVA 	- Conveyance Allowance.

Deductions:
	PF  	- Provident Fund
	E.S.I	- Employee State Insurance
	ITAX	- Income Tax
	CSF	- Canteen FAcility. For each category of employee the cantee charge is Rs. 350/-
All the employees are gets their facilities on according to their Basic salary as:

Table of Dearness Allowance, House Rent Allowance, and conveyance Allowance
	--------------------------------------------------------------------------------------
Basic Salary		DA			HRA			CONVA
--------------------------------------------------------------------------------------
2500 to 3000   		90% of Basic	    	20% of Basic		10% of Basic
3001 to 4000		120% of Basic		30% of Basic		15% of Basic
4001 to 5000		140% of Basic		35% of Basic		20% of Basic
Above 5000		150% of Basic		40% of Basic		25% of Basic
--------------------------------------------------------------------------------------

Each employee is deducting 12% of provident fund from their basic salary and dearness allowance
Each employee deducting 0.7% of ESI from their basic salary
If the employee is liable to pay income tax then, on every month the ITAX is also deducted from his salary. The taxation slab is as:

Table of Taxation Slab
--------------------------------------------------------------------------------------
Net Income Range			Rate of Income-Tax Deductions
--------------------------------------------------------------------------------------
Up to Rs. 40,000			Nill
Rs. 40,000 - Rs. 60,000			10% of the amount by which the tital income exceeds Rs. 40, 000
Rs. `60,000 - Rs. 1,50,000		Rs. 2,000 plus 20% of the amount by which to total income exceeds Rs. 90,000
Rs. 1,50,000 and above			Rs. 20,000 plus 30% of the amount by which the total income exceeds Rs. 1,50,000
--------------------------------------------------------------------------------------
Also there is a standard deduction of the gross income i.e,; 1/3.
Note: As the employeer provides 12% as PF, 10% is exempted, and remaining is taxable
*/

void employee::month_salary(void)
{
	clrscr();
	char t_acc[10];
	char *cmonth;
	int j;
	int t, t_emp_no;
	gotoxy(71, 1);
	cout << "<0>=Exit";
	gotoxy(5, 5);
	cout << "Enter employee no. ";
	gets(t_acc);
	t = atoi(t_acc);
	t_emp_no = t;
	if (t_emp_no == 0)
		return;
	clrscr();
	details EMP_ADD;
	if (!EMP_ADD.found_employee(t_emp_no))
	{
		gotoxy(5, 5);
		cout << "\7employee not found";
		getch();
		return;
	}
	gotoxy(30, 3);
	cout << "Salary Slip";
	gotoxy(30, 4);
	cout << "===========";
	int d1, m1, y1;
	struct date d;
	getdate(&d);
	d1 = d.da_day;
	m1 = d.da_mon;
	y1 = d.da_year;
	gotoxy(10, 5);
	cout << "Employee No. " << t_emp_no;

	// To print the month in character form
	switch (m1)
	{          // get month name
		case 1  : strcpy( cmonth, "January"  ); break;
		case 2  : strcpy( cmonth, "February" ); break;
		case 3  : strcpy( cmonth, "March"    ); break;
		case 4  : strcpy( cmonth, "April"    ); break;
		case 5  : strcpy( cmonth, "May"      ); break;
		case 6  : strcpy( cmonth, "June"     ); break;
		case 7  : strcpy( cmonth, "July"     ); break;
		case 8  : strcpy( cmonth, "August"   ); break;
		case 9  : strcpy( cmonth, "September"); break;
		case 10 : strcpy( cmonth, "October"  ); break;
		case 11 : strcpy( cmonth, "November"); break;
		case 12 : strcpy( cmonth, "December" ); break;
	}
	gotoxy(45, 5);
	cout << cmonth;

	gotoxy(55, 5);
	cout << "Date: " << d1 << "/" << m1 << "/" << y1;
	gotoxy(8, 6);
	for (int i = 0; i <= 64; i++)
		cout << "=";

	// Displays the name and address part of the employee
	EMP_ADD.send_DATA(t_emp_no);

	fstream file;
	file.open("EMP.dat", ios::in);

	// Display the designation and salary part of the employee
	while (file.read((char *)this, sizeof(employee)))
	{
		if (emp_no == t_emp_no)
		{
			gotoxy(45, 8);
			cout << "Date of Joining : " << dd << "-" << mm << "-" << yy;
			gotoxy(45, 9);
			cout << "Designation : " << emp_job;
			gotoxy(45, 10);
			cout << "Department No. : " << deptno;
			gotoxy(45, 11);
			cout << "Grade : " << grade;
			delay(2);
			break;
		}
	}
	file.close();

	gotoxy(8, 12);
	for (i = 0; i <= 64; i++)
		cout << "-";
	gotoxy(10, 13);
	cout << "Salary";
	gotoxy(35, 13);
	cout << "Earnings";
	gotoxy(62, 13);
	cout << "Deduction";
	gotoxy(8, 14);
	for (i = 0; i <= 64; i++)
		cout << "-";

	// Steps to calculate the da, hra, pf, esi, convayence etc.
	float EPF = 0.0; 	// Employee provident fund (deduction)
	float DA = 0.0;		// Employee Dearness allowance (earnings)
	float ESI = 0.0;	// Employee state insurance (deduction)
	float HRA = 0.0;	// Employee house rent allowance (earnings)
	float CANTEEN = 0.0;	// Employee canteen facility (deduction)
	float CONV = 0.0;	// Employee conveyance (earnings)
	float ANN_GROSS = 0.0;	// Employee annual income
	float ITAX = 0.0;	// Employee income tax
	float NET_INCOME = 0.0; // Employee monthly income
	float TOTAL_EARN = 0.0;	// Employee total earnings
	float TOTAL_DEDU = 0.0;	// Employee total deductions
	float PFTAX = 0.0; 	// Provident fund tax
	float TAXABLE = 0.0;	// Employee taxable amount

	// Steps the calculate DA, HRA, and CONV accourding the table of above description
	if (salary >= 2500 && salary <= 3000)
	{
		DA = salary * 0.9;
		HRA = salary * 0.2;
		CONV = salary * 0.1;
	}
	else
		if (salary >= 3001 && salary <= 4000)
		{
			DA = salary * 0.12;
			HRA = salary * 0.3;
			CONV = salary * 0.15;
		}
		else
			if (salary >= 4001 && salary <= 5000)
			{
				DA = salary * 0.14;
				HRA = salary * 0.35;
				CONV = salary * 0.2;
			}
			else
				if (salary >= 5001)
				{
					DA = salary * 0.16;
					HRA = salary * 0.4;
					CONV = salary * 0.25;
				}
	TOTAL_EARN = salary + DA + HRA + CONV; // Calculates the total monthly gross
	ANN_GROSS = TOTAL_EARN * 12;	// Annual gross

	// Calculation part for deduction as pf (12%) , esi (.7%) , csf (Rs. 350/-)
	EPF = (salary+DA) * 0.12; // Calculates 12% as provident fund
	// Calculates 0.7% as employee state insurance
	ESI = salary * 0.07;
	CANTEEN = 350;	// Canteen charge

	// Note: As the employeer provides 12% as PF, 10% is exempted, and
	// remaining 2% is taxable.
	// Annually taxable from Pf side
	PFTAX = ((salary + DA) * 0.2) * 12;

	// Annual gross including Provident Fund tax
	ANN_GROSS = ANN_GROSS + PFTAX;

	// Tax calculation steps
	// After less standard deduction, the annual gross is:
	if (ANN_GROSS <= 60000)
		ANN_GROSS = 40000 - 20000;
	else
		ANN_GROSS = ANN_GROSS - 20000;
	// Calculation of taxable amount
	if (ANN_GROSS > 40000)
		TAXABLE = ANN_GROSS - 40000;
	else
		TAXABLE = 0;

	// Steps to calculate the tax
	if (TAXABLE <= 20000)
		ITAX = TAXABLE * 0.1;
	else
		if (TAXABLE > 20000 && TAXABLE <= 110000)
			ITAX = 2000 + ((TAXABLE-20000) * 0.2);
		else
			if (TAXABLE > 110000)
				ITAX = 20000 + ((TAXABLE-110000) * 0.3);
	ITAX = ITAX / 12;

	// The total deduction
	TOTAL_DEDU = EPF + ESI + CANTEEN + ITAX;

	NET_INCOME = TOTAL_EARN - TOTAL_DEDU;

	gotoxy(11, 15);
	cout << "Basic:" ;
	gotoxy(22, 15);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< salary;

	gotoxy(35, 15);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< salary;

	gotoxy(50, 15);
	cout << "E.P.F.:" ;
	gotoxy(63, 15);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< EPF ;

	gotoxy(11, 16);
	cout << "D.A.:" ;
	gotoxy(22, 16);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< DA;

	gotoxy(35, 16);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< DA;

	gotoxy(50, 16);
	cout << "E.S.I.:";
	gotoxy(63, 16);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< ESI;

	gotoxy(11, 17);
	cout << "H.R.A.:" ;
	gotoxy(22, 17);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< HRA;

	gotoxy(35, 17);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< HRA;

	gotoxy(50, 17);
	cout << "CANTEEN:" ;
	gotoxy(63, 17);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< CANTEEN ;

	gotoxy(11, 18);
	cout << "CONV.:" ;
	gotoxy(22, 18);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< CONV;

	gotoxy(35, 18);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< CONV;

	gotoxy(50, 18);
	cout << "INCOME TAX:" ;
	gotoxy(63, 18);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< ITAX ;

	gotoxy(8, 19);
	for (i = 0; i <= 64; i++)
		cout << "-";

	gotoxy(11, 20);
	cout << "Total Earnings: ";
	gotoxy(34, 20);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< TOTAL_EARN;

	gotoxy(48, 20);
	cout << "Total Deduct: ";
	gotoxy(63, 20);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< TOTAL_DEDU;

	gotoxy(8, 21);
	for (i = 0; i <= 64; i++)
		cout << "=";

	gotoxy(11, 22);
	cout << "Net Pay: ";
	gotoxy(34, 22);
	cout << setw(15)
		<< setprecision(2)
		<< setiosflags(ios::left)
		<< setiosflags(ios::showpoint)
		<< setiosflags(ios::fixed)
		<< NET_INCOME;

	gotoxy(55, 23);
	cout << "Signature";

	gotoxy(10, 24);
	cout << "Press any key to Continue ...";
	getch();
}

// Function to provide data into salary report
void details::send_DATA(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);
	char t_zip[10];

	// Sending the data into month_salary function
	while (file.read((char *)this, sizeof(details)))
	{
		if (emp_no == t_emp_no)
		{
			gotoxy(10, 7);
			cout << "Name : " << name;
			gotoxy(10, 8);
			cout << "Address : " << address;
			gotoxy(10, 9);
			cout << "City : " << city;
			gotoxy(10, 10);
			cout << "State : " << state;
			gotoxy(10, 11);
			cout << "Zip Code : " << zip;
			gotoxy(45, 7);
			cout << "Date of Birth : " << dd << "-" << mm << "-" << yy;
			break;
		}
	}
	file.close();
}


// Function for main menu to append new record into both DETAILS.dat and EMP.dat data files.
void employee::new_employee(void)
{
	char ch;
	int i, valid;
	clrscr();
	details EMP_ADD;
	gotoxy(65, 4);
	cout << "<0>=Exit";

	gotoxy(3,3);
	for (i = 1; i<= 76; i++)
		cprintf(" ");

	textbackground(BLACK);
	textcolor(BLACK+BLINK);
	textbackground(WHITE);
	gotoxy(30, 4);
	cprintf("Open New Employee");
	textcolor(LIGHTGRAY);
	textbackground(BLACK);
	int d1, m1, y1;
	struct date d;		// For extracting system date
	getdate(&d);
	d1 = d.da_day;
	m1 = d.da_mon;
	y1 = d.da_year;

	int t_emp_no;
	t_emp_no = EMP_ADD.last_emp_no();
	t_emp_no++;

	if (t_emp_no == 1)
	{
		EMP_ADD.EMP_APPEND(t_emp_no, "abc", "xyz", 0, 0, 0, "aaa", "a", "aaaa");
		EMP_ADD.delete_employee(t_emp_no);
		EMP_APPEND(t_emp_no, 1, 1, 1997, "D", "details", 1.1, 0);
		delete_employee(t_emp_no);
	}

	char t_name[30], t_address[30];
	char t_grade[2], t_emp_job[12];
	int tdd, tmm, tyy;
	char P_city[10], t_state[3], t_zip[10];
	float t_salary = 0.0;
	int t_deptno;
	gotoxy(5, 6);
	cout << "Date: " << d1 << '-' << m1 << '-' << y1;

	gotoxy(5, 8);
	cout << "employee No # " << t_emp_no;

	gotoxy(40, 8);
	cout << "Name : ";
	gotoxy(5, 10);
	cout << "Address : ";
	gotoxy(5, 12);
	cout << "Date of Birth : ";
	gotoxy(5, 13);
	cout << "City : ";
	gotoxy(5, 14);
	cout << "State : ";
	gotoxy(5, 15);
	cout << "Zip : ";
	gotoxy(40, 15);
	cout << "Designation : ";
	gotoxy(40, 16);
	cout << "Date of Joining : ";
	gotoxy(40, 17);
	cout << "Department no. : ";
	gotoxy(40, 18);
	cout << "Basic Salary ";
	gotoxy(40, 19);
	cout << "Grade : ";

	do
	{
		Right_clear(48, 8);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Name of the Person";
		valid = 1;
		gotoxy(48, 8);
		gets(t_name);
		strupr(t_name);
		if (t_name[0] == '0')
			return;
		if (strlen(t_name) == 0 || strlen(t_name) > 25)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Name should not greater than 25");
			getch();
		}
	} while (!valid);

	do
	{
		Left_clear(20, 10);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Address of the Person ";
		valid = 1;
		gotoxy(20, 10);
		gets(t_address);
		strupr(t_address);
		if (t_address[0] == '0')
			return;
		if (strlen(t_address) == 0 || strlen(t_address) > 25)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Address should not greater than 25");
			getch();
		}
	} while (!valid);

	Left_clear(23, 12);
	gotoxy(23, 12);
	cin >>tdd;
	gotoxy(25, 12);
	cout << "-";
	gotoxy(26, 12);
	cin >> tmm;
	gotoxy(28, 12);
	cout << "-";
	gotoxy(29, 12);
	cin >> tyy;

	do
	{
		Left_clear(13, 13);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter City ";
		valid = 1;
		gotoxy(15, 13);
		gets(P_city);
		strupr(P_city);
		if (P_city[0] == '0')
			return;
		if (strlen(P_city) == 0 || strlen(P_city) > 10)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7City Should not space");
			getch();
		}
	} while (!valid);

	do
	{
		Left_clear(15, 14);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter State";
		valid = 1;
		gotoxy(15, 14);
		gets(t_state);
		strupr(t_state);
		if (t_state[0] == '0')
			return;
		if (strlen(t_state) == 0 || strlen(t_state) > 2)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7State should not greater than 1");
			getch();
		}
	} while (!valid);

	do
	{
		Left_clear(15, 15);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Zip Code";
		valid = 1;
		gotoxy(15, 15);
		gets(t_zip);
		strupr(t_zip);
		if (t_zip[0] == '0')
			return;
		if (strlen(t_zip) == 0 || strlen(t_zip) > 9)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Zip should not greater than 9");
			getch();
		}
	} while (!valid);

	do
	{
		Right_clear(59, 15);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter Designation";
		valid = 1;
		gotoxy(59, 15);
		gets(t_emp_job);
		strupr(t_emp_job);
		if (t_emp_job[0] == '0')
			return;
		if (strlen(t_emp_job) == 0 || strlen(t_emp_job) > 11)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Designation should not greater than 9");
			getch();
		}
	} while (!valid);
	Right_clear(59, 16);

	gotoxy(59, 16);
	cin >>d1;
	gotoxy(61, 16);
	cout << "-";
	gotoxy(62, 16);
	cin >> m1;
	gotoxy(64, 16);
	cout << "-";
	gotoxy(65, 16);
	cin >> y1;
	gotoxy(59, 17);
	cin >> t_deptno;

	do
	{
		Right_clear(59, 18);
		Left_clear(5, 23);
		gotoxy(5, 23);
		cout << "Basic Salary not less that 900";
		valid = 1;
		char t[10];	// Declare as character type and will convert into float type using atof() function
		gotoxy(59, 18);
		gets(t);
		t_salary = atof(t);
		if (t[0] == '0')
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Should not less than 900");
			getch();
		}
	} while (!valid);

	if (t_salary >= 2500 && t_salary <= 3000)
	{
		strcpy(t_grade, "C");
	}
	else
		if (t_salary >= 3001 && t_salary <= 4000)
		{
			strcpy(t_grade, "B");
		}
		else
			if (t_salary >= 4001 && t_salary <= 5000)
			{
				strcpy(t_grade, "A");
			}
			else
				if (t_salary > 5000)
				{
					strcpy(t_grade, "O");
				}
				else
					return;

	gotoxy(59, 19);
	cout << t_grade;
	Left_clear(5, 23);

	do
	{
		Left_clear(5, 17);
		valid = 1;
		gotoxy(5, 22);
		cout << "Do you want to save the record <Y/N>: ";
		ch = getche();
		if (ch == '0')
			return;
		ch = toupper(ch);
	} while (ch != 'N' && ch != 'Y');
	if (ch == 'N')
		return;
	clrscr();

	// Appends the new employee record into DETAILS.dat data file
	EMP_ADD.EMP_APPEND(t_emp_no, t_name, t_address, tdd, tmm, tyy, P_city, t_state, t_zip);

	// Appends the new employee salary and designation into EMP.dat data file
	EMP_APPEND(t_emp_no, d1, m1, y1, t_grade, t_emp_job, t_salary, t_deptno);
}

// Function to count the total number of records in DETAILS.dat data file for generating automatic employee number
int details::recordno(int t_emp_no)
{
	fstream file;
	file.open("DETAILS.dat", ios::in);
	file.seekg(0, ios::beg);
	int count = 0;

	// Counts the total records in DETAILS.dat data file
	while (file.read((char *)this, sizeof(details)))
	{
		count++;
		if (t_emp_no == emp_no)
			break;
	}
	file.close();
	return count;
}

// Function to count the total number of records in EMP.dat data file for generating automatic employee number
int employee::recordno(int t_emp_no)
{
	fstream sfile;
	sfile.open("EMP.dat", ios::in);
	sfile.seekg(0, ios::beg);
	int count = 0;

	// Counts the total record in EMP.dat data file
	while (sfile.read((char *)this, sizeof(employee)))
	{
		count++;
		if (t_emp_no == emp_no)
			break;
	}
	sfile.close();

	return count;
}
// Function to close the employee account in organization.
void employee::close_employee(void)
{
	clrscr();
	char ch;
	char t_acc[10];
	int t, t_emp_no;
	gotoxy(71, 1);
	cout << "<0>=Exit";

	gotoxy(5, 5);
	cout << "Enter the employee no. ";
	gets(t_acc);
	t = atoi(t_acc);
	t_emp_no = t;
	if (t_emp_no == 0)
		return;
	clrscr();
	gotoxy(30, 4);
	cout << "Individual Employee to Delete";
	gotoxy(30, 5);
	cout << "=============================";
	details EMP_ADD;
	box_for_display(t_emp_no);

	fstream file;
	file.open("EMP.dat", ios::in);

	// Displays the record which will be delete
	while (file.read((char *)this, sizeof(employee)))
	{
		if (emp_no == t_emp_no)
		{
			gotoxy(40, 8);
			cout << "Designation : " << emp_job;
			gotoxy(40, 10);
			cout << "Date of Joining : " << dd << "-" << mm << "-" << yy;
			gotoxy(40, 12);
			cout << "Salary : " << setw(15)
				<< setprecision(2)
				<< setiosflags(ios::left)
				<< setiosflags(ios::showpoint)
				<< setiosflags(ios::fixed)
				<< salary;

			gotoxy(40, 14);
			cout << "Department No. : " << deptno;
			gotoxy(40, 16);
			cout << "Grade : " << grade;
			delay(2);
			break;
		}
	}
	file.close();
	gotoxy(8, 19);
	for (int i = 1; i <=64; i++)
		cout << "=";
	gotoxy(10, 20);

	do
	{
		Left_clear(5, 15);
		gotoxy(5, 20);
		cout << "Close this employee <y/n?? ";
		ch = getche();
		if (ch == '0')
			return;
		ch = toupper(ch);
	}while (ch != 'N' && ch != 'Y');
	if (ch == 'N')
		return;

	// Function to delete the record from DETAILS.dat data file
	EMP_ADD.delete_employee(t_emp_no);

	// Function to delete the record from EMP.dat data file
	delete_employee(t_emp_no);
	gotoxy(5, 20);
	cout << "\7employee Deleted";
	gotoxy(5, 23);
	cout << "Press any key to continue...";
	getch();
}

// Main Program starts at here
void main(void)
{
	control c;
	// Calling function from GH.CPP file
	INTRO();
	closegraph();
	c.help();
	c.MAIN_SCREEN();
}