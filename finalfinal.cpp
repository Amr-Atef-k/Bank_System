#include <iostream>
using namespace std;

void sign_up();
bool checking();
void add_account();
void modify_account();

void close_account();
void list_allaccounts();
void log_out();
void wrong_input();

void balance_enquiry();
void withdraw_amount();
void deposit_amount();
void transfer_money();

int main()
{

  int t1, t2, t3, ac;
  cout << "\n*Welcome to masr bank application*\nPLEASE type:\n1-to log in\n2-to sign up\n";
  cin >> t1;
  if (t1 == 1)
  {
    cout << "enter\n1-to log in as admin\n2-to log in as client\n";
    cin >> ac;
    if (ac == 1)
    {
      // checking the username and the password
      if (checking() == false)
      {
        return 0;
      }
      else
      {
        cout << "choose an operation :\n1-Add a new account\n2-modify an account\n3-close an account\n4-list all accounts\n0-log out\n";
        cin >> t2;
        if (t2 == 1)
        {
          add_account();
        }
        else if (t2 == 2)
        {
          modify_account();
        }
        else if (t2 == 3)
        {
          close_account();
        }
        else if (t2 == 4)
        {
          list_allaccounts();
        }
        else if (t2 == 0)
        {
          log_out();
        }
        else
        {
          wrong_input();
        }
      }
    }
    else if (ac == 2)
    {
      // checking the username and the password
      if (checking() == false)
      {
        return 0;
      }
      else
      {
        cout << "\nchoose an operation :\n1-balance enquiry\n2-withdraw amount\n3-deposit amount\n4-transfer money\n0-Log out\n";
        cin >> t3;
        if (t3 == 1)
        {
          balance_enquiry();
        }
        else if (t3 == 2)
        {
          withdraw_amount();
        }
        else if (t3 == 3)
        {
          deposit_amount();
        }
        else if (t3 == 4)
        {
          transfer_money();
        }
        else if (t3 == 0)
        {
          log_out();
        }
        else
        {
          wrong_input();
        }
      }
    }
    else
    {
      cout << "wrong input!!";
    }
  }
  else if (t1 == 2)
  {
    sign_up();
  }
  else
  {
    wrong_input();
  }
}

void sign_up()
{
  int w, c = 0;
  string user_name, password;
  string account[3];
  account[0] = "omar_esmat";
  account[1] = "maria_ramez";
  account[2] = "amr_atef";

  cout << "type\n1-to Sing up as an admin\n2-to Sign up as a client\n";
  cin >> w;
  if (w == 1 || w == 2)
  {
    cout << "user name:";
    cin >> user_name;
    // checking the if the username exist
    for (int i = 0; i < 3; i++)
    {
      if (user_name == account[i])
      {
        c++;
      }
    }
    if (c > 0)
    {
      cout << "the username you entered already exist";
    }
    if (c == 0)
    {
      cout << "password:";
      cin >> password;
      cout << "Account have been successfly created";
    }
  }
  else
  // wrong selection
  {
    cout << "wrong input!!";
  }
}

bool checking()
{
  int c = 0;
  string user_name, password, account[3], pass = "12345678";
  account[0] = "omar_esmat";
  account[1] = "maria_ramez";
  account[2] = "amr_atef";

  cout << "Enter User name:\n";
  cin >> user_name;
  // checking the username
  for (int i = 0; i < 3; i++)
  {
    if (user_name == account[i])
    {
      c++;
    }
  }
  if (c == 0)
  {
    cout << "the username is wrong\n";
    return false;
  }
  else
  {
    cout << "Enter password:\n";
    cin >> password;
    // checking the password
    if (password != pass)
    {
      cout << "wrong password\n";
      return false;
    }
    else
    {
      return true;
    }
  }
}

void add_account()
{
  string user_name, password;
  cout << "Adding a new account\nuser name:";
  cin >> user_name;
  cout << "password: ";
  cin >> password;
  cout << "Account have been successfuly added";
}

void list_allaccounts()
{
  string account[3];
  account[0] = "omar_esmat";
  account[1] = "maria_ramez";
  account[2] = "amr_atef";
  cout << "listing all accounts\n";
  cout << "Usernames :\n--------------------------\n";
  for (int i = 0; i < 3; i++)
  {
    cout << account[i] << "\t";
  }
}

void log_out()
{
  cout << "logged out successfuly";
}

void wrong_input()
{
  cout << "wrong input\n";
}

void modify_account()
{
  int c = 0;
  string account[3], s;
  account[0] = "omar_esmat";
  account[1] = "maria_ramez";
  account[2] = "amr_atef";

  cout << "modifing an account\nEnter the username of the account you want to modify\n";
  cin >> s;
  for (int i = 0; i < 3; i++)
  {
    if (s == account[i])
    {
      cout << "Enter the new username\n";
      cin >> account[4];
      account[i] = account[4];
      cout << "account has been successfuly modified";
      c++;
    }
  }
  if (c == 0)
  {
    cout << "wrong username";
  }
}

void close_account()
{
  int c = 0;
  string account[3], s;
  account[0] = "omar_esmat";
  account[1] = "maria_ramez";
  account[2] = "amr_atef";

  cout << "closing an accounts\nEnter the username of the account you want to delete\n";
  cin >> s;
  for (int i = 0; i < 3; i++)
  {
    if (s == account[i])
    {
      account[i] = "xxxx";
      cout << "account has been successfuly closed";
      c++;
    }
  }
  if (c == 0)
  {
    cout << "wrong username";
  }
}

void balance_enquiry()
{
  cout << "You have in your account $4000.00";
}

void withdraw_amount()
{
  int t4;
  cout << "How much money you want to withdraw?\n";
  cin >> t4;
  if (t4 > 4000.00)
  {
    cout << "you only have 4000.00";
  }
  else
  {
    cout << "Successful balance withdraw\nYOUR balance now is = " << 4000.00 - t4;
  }
}

void deposit_amount()
{
  int t5;
  cout << "how much money you want to deposit \n";
  cin >> t5;
  cout << "successfuly DEPOSIT \nYour new balance is $" << 4000.00 + t5;
}

void transfer_money()
{
  int c = 0, w;
  string user_name, account[3], s7;
  account[0] = "omar_esmat";
  account[1] = "maria_ramez";
  account[2] = "amr_atef";

  cout << "To whom you want to transfer the money\nUser name: ";
  cin >> s7;
  
  if (s7 == user_name)
  {
    cout << "you cannot transfer money to yourself";
  }
  else
  {
    for (int i = 0; i < 3; i++)
    {
      if (s7 == account[i])
      {
        c++;
      }
    }
    if (c == 0)
    {
      cout << "Wrong user name !!";
    }
    else if (c > 0)
    {
      cout << "how much money you want to transfer: ";
      cin >> w;
      if (w > 4000.00)
      {
        cout << "you only $have 4000.00";
      }
      else if (w <= 0)
      {
        cout << "you cannot transfer this amount of money";
      }
      else
      {
        cout << w << "$ have been successfuly transfered to " << s7;
        cout << "\nYour new balance is $" << 4000.00 - w;
      }
    }
  }
}
