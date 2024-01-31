import random


class BankAccount:
    loan_enabled = True
    account_counter = 0

    def __init__(self, user, account_type):
        BankAccount.account_counter += 1
        self.account_number = self.generate_account_number()
        self.user = user
        self.account_type = account_type
        self.balance = 0
        self.transaction_history = []
        self.loan_taken = 0
        self.loan_count = 0

    def generate_account_number(self):
        return random.randint(0, 999999)

    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(f'Deposit: +৳ {amount}')
        print(f'৳ {amount} Deposite successfully, Current balance ৳ {self.balance}')

    def withdraw(self, amount):
        if admin.bankcraft:
            print("The bank is bankrupt.")
        elif amount > self.balance:
            print("Withdrawal amount exceeded.")
        else:
            self.balance -= amount
            self.transaction_history.append(f'Withdrawal: -৳ {amount}')
            print(f'{amount} Withdrawal successful, Current balance {self.balance}')


    def check_balance(self):
        return self.balance

    def check_transaction_history(self):
        return self.transaction_history

    def take_loan(self, amount):
        if BankAccount.loan_enabled:
            if self.loan_count < 2:
                self.loan_taken += amount
                self.loan_count += 1
                self.balance += amount
                self.transaction_history.append(f'Loan Taken: +৳ {amount}')
            else:
                print("You have already taken the maximum number of loans.")
        else:
            print("Loan feature is currently disabled.")


    def transfer(self, recipient_account, amount):
        if recipient_account:
            if amount > 0 and amount <= self.balance:
                self.balance -= amount
                print(f'{amount} transfer successfully from {self.user.name} to {recipient_account.name}')
                recipient_account.bank_account.deposit(amount)
                self.transaction_history.append(
                    f'Transfer to {recipient_account.name}: -৳ {amount}')
            else:
                print("Invalid transfer amount or insufficient funds.")
        else:
            print("Recipient account does not exist.")


class User:
    def __init__(self, name, email, address, account_type):
        self.name = name
        self.email = email
        self.address = address
        self.bank_account = BankAccount(self, account_type)

    def __repr__(self):
        return f"User: {self.name}, Email: {self.email}, Address: {self.address}, Account Type: {self.bank_account.account_type}"


class Admin:
    def __init__(self):
        self.user_accounts = []
        self.bankcraft = False

    def create_account(self, user):
        self.user_accounts.append(user.bank_account)
        print(f"Account successfully created Name: {user.name} AC: {user.bank_account.account_number}")

    def delete_account(self, user):
        if user.bank_account in self.user_accounts:
            self.user_accounts.remove(user.bank_account)
            print(f"Account deleted successfully for {user.name}.")
        else:
            print(f"No account found for {user.name}.")

    def show_all_accounts(self):
        for account in self.user_accounts:
            print(f"Account Number: {account.account_number}, User: {account.user.name}, Email: {account.user.email}, Account Type: {account.account_type}, Balance: ৳ {account.balance}")

    def total_available_balance(self):
        total_balance = sum(account.balance for account in self.user_accounts)
        return total_balance

    def total_loan_amount(self):
        total_loan = sum(account.loan_taken for account in self.user_accounts)
        return total_loan

    def loan_feature(self, enable):
        BankAccount.loan_enabled = enable
        if enable:
            print("Loan feature is now enabled.")
        else:
            print("Loan feature is now disabled.")

    def is_Bankcraft(self, decision):
        self.bankcraft = decision

    def find_account_by_number(self, account_number):
        for account in self.user_accounts:
            if account.account_number == int(account_number):
                return account.user
        return None


def user_options(user):
    while True:
        print("\nUser Options:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Transaction History")
        print("5. Take Loan")
        print("6. Transfer Money")
        print("7. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            amount = float(input("Enter the amount to deposit: "))
            user.bank_account.deposit(amount)
        elif choice == '2':
            amount = float(input("Enter the amount to withdraw: "))
            user.bank_account.withdraw(amount)
        elif choice == '3':
            balance = user.bank_account.check_balance()
            print(f"Current Balance: ৳ {balance}")
        elif choice == '4':
            history = user.bank_account.check_transaction_history()
            print("Transaction History:")
            for entry in history:
                print(entry)
        elif choice == '5':
            amount = float(input("Enter the loan amount: "))
            user.bank_account.take_loan(amount)
        elif choice == '6':
            recipient_account_number = input("Enter the recipient's account number: ")
            recipient = admin.find_account_by_number(recipient_account_number)
            amount = float(input("Enter the amount to transfer: "))
            user.bank_account.transfer(recipient, amount)
        elif choice == '7':
            break
        else:
            print("Invalid choice. Please try again.")


def admin_options(admin):
    while True:
        print("\nAdmin Options:")
        print("1. Create Account")
        print("2. Delete Account")
        print("3. Show All Accounts")
        print("4. Total Available Balance of the bank")
        print("5. Total Loan Amount")
        print("6. Toggle Loan Feature")
        print("7. Declare Bankruptcy")
        print("8. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter user's name: ")
            email = input("Enter user's email: ")
            address = input("Enter user's address: ")
            account_type = input("Enter account type (savings/current): ")
            new_user = User(name, email, address, account_type)
            admin.create_account(new_user)

        elif choice == '2':
            account_number = input("Enter account number to delete: ")
            user_to_delete = admin.find_account_by_number(account_number)
            if user_to_delete:
                admin.delete_account(user_to_delete)
            else:
                print("Account not found.")
        elif choice == '3':
            admin.show_all_accounts()
        elif choice == '4':
            total_balance = admin.total_available_balance()
            print(f"Total Available Balance: ৳ {total_balance}")
        elif choice == '5':
            total_loan = admin.total_loan_amount()
            print(f"Total Loan Amount: ৳ {total_loan}")
        elif choice == '6':
            enable_loan = input("Enable loan feature? (yes/no): ")
            admin.loan_feature(enable_loan == 'yes')
        elif choice == '7':
            decision = input("Declare Bankruptcy? (yes/no): ")
            admin.is_Bankcraft(decision == 'yes')
        elif choice == '8':
            break
        else:
            print("Invalid choice. Please try again.")


admin = Admin()

while True:
    print("\nOptions:")
    print("1. User")
    print("2. Admin")
    print("3. Exit")

    user_type = input("Enter option: ")

    if user_type == '1':
        print("1. Have account:")
        print("2. Creat account:")
        user_type = input("Enter option: ")
        if user_type == '1':
            account_number = input("Enter account number: ")
            current_user = admin.find_account_by_number(account_number)
            if(current_user):
                user_options(current_user)
            else:
                print('Wrong account number')

        elif user_type == '2':        
            user_name = input("Enter your name: ")
            user_email = input("Enter your email: ")
            user_address = input("Enter your address: ")
            user_account_type = input("Enter account type (saivngs/current): ")

            current_user = User(user_name, user_email, user_address, user_account_type)
            admin.create_account(current_user)
            user_options(current_user)

    elif user_type == '2':
        admin_options(admin)
    elif user_type == '3':
        break
    else:
        print("Invalid choice. Please try again.")
