import tkinter as tk
from tkinter import messagebox
import smtplib
from email.mime.text import MIMEText
import random

# Sample data structure to hold user and donor information
users = {}
donors = []
blood_stock = {"A+": 10, "A-": 10, "B+": 10, "B-": 10, "O+": 10, "O-": 10, "AB+": 10, "AB-": 10}
admin_credentials = {"admin": "admin123"}  # Admin username and password
verification_codes = {}  # Store verification codes for users

# Function to register a new user
def register_user():
    username = entry_username.get()
    password = entry_password.get()
    
    if username in users:
        messagebox.showerror("Error", "User  already exists!")
    else:
        users[username] = password
        messagebox.showinfo("Success", "User  registered successfully!")

# Function to login a user
def login_user():
    username = entry_username.get()
    password = entry_password.get()
    
    if username in users and users[username] == password:
        messagebox.showinfo("Success", "Login successful!")
        main_app()
    elif username in admin_credentials and admin_credentials[username] == password:
        messagebox.showinfo("Success", "Admin login successful!")
        admin_app()
    else:
        messagebox.showerror("Error", "Invalid username or password!")

# Function to search for donors
def search_donors():
    area = entry_search_area.get()
    blood_group = entry_search_blood_group.get()
    
    results = [donor for donor in donors if donor['area'] == area and donor['blood_group'] == blood_group]
    
    if results:
        result_text = "\n".join([f"{donor['name']} - {donor['blood_group']} - {donor['area']}" for donor in results])
        messagebox.showinfo("Donor Results", result_text)
    else:
        messagebox.showinfo("Donor Results", "No donors found.")

# Function to update donor profile
def update_donor_profile():
    donor_name = entry_donor_name.get()
    donor_blood_group = entry_donor_blood_group.get()
    donor_area = entry_donor_area.get()
    
    for donor in donors:
        if donor['name'] == donor_name:
            donor['blood_group'] = donor_blood_group
            donor['area'] = donor_area
            messagebox.showinfo("Success", "Profile updated successfully!")
            return
    messagebox.showerror("Error", "Donor not found!")

# Admin functionalities
def admin_app():
    clear_window()
    
    label_blood_stock = tk.Label(root, text="Current Blood Stock")
    label_blood_stock.pack()
    
    blood_stock_text = "\n".join([f"{blood_group}: {quantity}" for blood_group, quantity in blood_stock.items()])
    tk.Label(root, text=blood_stock_text).pack()
    
    tk.Label(root, text="Update Blood Stock").pack()
    
    global entry_update_blood_group
    entry_update_blood_group = tk.Entry(root)
    entry_update_blood_group.pack()
    
    global entry_update_quantity
    entry_update_quantity = tk.Entry(root)
    entry_update_quantity.pack()
    
    update_button = tk.Button(root, text="Update Stock", command=update_blood_stock)
    update_button.pack()
    
    delete_donor_button = tk.Button(root, text="Delete Donor", command=delete_donor)
    delete_donor_button.pack()
    
    email_button = tk.Button(root, text="Email Donors", command=email_donors)
    email_button.pack()

    # Show all users
    show_users_button = tk.Button(root, text="Show All Users", command=show_users)
    show_users_button.pack()

def update_blood_stock():
    blood_group = entry_update_blood_group.get()
    quantity = entry_update_quantity.get()
    
    if blood_group in blood_stock:
        try:
            blood_stock[blood_group] += int(quantity)
            messagebox.showinfo("Success", f"Updated {blood_group} stock successfully!")
        except ValueError:
            messagebox.showerror("Error", "Please enter a valid quantity.")
    else:
        messagebox.showerror("Error", "Invalid blood group.")

def delete_donor():
    donor_name = entry_donor_name.get()
    
    global donors
    donors = [donor for donor in donors if donor['name'] != donor_name]
    messagebox.showinfo("Success", "Donor deleted successfully!")

def email_donors():
    donor_email = entry_email.get()
    subject = "Blood Donation Request "
    body = "We need your help! Please consider donating blood."
    # Simulate sending an email
    messagebox.showinfo("Email Sent", f"Email sent to {donor_email} with subject: {subject}")

def forgot_password():
    email = entry_email.get()
    if email in users:
        verification_code = random.randint(1000, 9999)
        verification_codes[email] = verification_code
        # Simulate sending an email with the verification code
        messagebox.showinfo("Verification Code Sent", f"Verification code sent to {email}: {verification_code}")
    else:
        messagebox.showerror("Error", "Email not registered.")

def verify_code():
    email = entry_email.get()
    code_entered = entry_verification_code.get()
    
    if email in verification_codes and verification_codes[email] == int(code_entered):
        new_password = entry_new_password.get()
        users[email] = new_password
        del verification_codes[email]  # Remove the code after successful verification
        messagebox.showinfo("Success", "Password changed successfully!")
    else:
        messagebox.showerror("Error", "Invalid verification code.")

# GUI setup
root = tk.Tk()
root.title("Blood Donation System")

# Entry fields for user actions
entry_username = tk.Entry(root)
entry_password = tk.Entry(root, show="*")
entry_email = tk.Entry(root)
entry_verification_code = tk.Entry(root)
entry_new_password = tk.Entry(root, show="*")

# Buttons for actions
btn_forgot_password = tk.Button(root, text="Forgot Password", command=forgot_password)
btn_verify_code = tk.Button(root, text="Verify Code", command=verify_code)

# Layout
entry_username.pack()
entry_password.pack()
entry_email.pack()
btn_forgot_password.pack()
entry_verification_code.pack()
btn_verify_code.pack()
entry_new_password.pack()

root.mainloop()

# Function to clear the current window
def clear_window():
    for widget in root.winfo_children():
        widget.destroy()

# Function to show all registered users
def show_users():
    users_list = "\n".join(users.keys())
    messagebox.showinfo("Registered Users", users_list if users_list else "No users registered.")

# Main application function
def main_app():
    clear_window()
    tk.Label(root, text="Welcome to the Blood Donation System").pack()
    # Additional main app functionalities can be added here

# Start the application
root.mainloop() 
import tkinter as tk
from tkinter import messagebox
import smtplib
from email.mime.text import MIMEText
import random

# Sample data structure to hold user and donor information
users = {}
donors = []
blood_stock = {"A+": 10, "A-": 10, "B+": 10, "B-": 10, "O+": 10, "O-": 10, "AB+": 10, "AB-": 10}
admin_credentials = {"admin": "admin123"}  # Admin username and password
verification_codes = {}  # Store verification codes for users

# Function to register a new user
def register_user():
    username = entry_username.get()
    password = entry_password.get()
    
    if username in users:
        messagebox.showerror("Error", "User  already exists!")
    else:
        users[username] = password
        messagebox.showinfo("Success", "User  registered successfully!")

# Function to login a user
def login_user():
    username = entry_username.get()
    password = entry_password.get()
    
    if username in users and users[username] == password:
        messagebox.showinfo("Success", "Login successful!")
        main_app()
    elif username in admin_credentials and admin_credentials[username] == password:
        messagebox.showinfo("Success", "Admin login successful!")
        admin_app()
    else:
        messagebox.showerror("Error", "Invalid username or password!")

# Function to search for donors
def search_donors():
    area = entry_search_area.get()
    blood_group = entry_search_blood_group.get()
    
    results = [donor for donor in donors if donor['area'] == area and donor['blood_group'] == blood_group]
    
    if results:
        result_text = "\n".join([f"{donor['name']} - {donor['blood_group']} - {donor['area']}" for donor in results])
        messagebox.showinfo("Donor Results", result_text)
    else:
        messagebox.showinfo("Donor Results", "No donors found.")

# Function to update donor profile
def update_donor_profile():
    donor_name = entry_donor_name.get()
    donor_blood_group = entry_donor_blood_group.get()
    donor_area = entry_donor_area.get()
    
    for donor in donors:
        if donor['name'] == donor_name:
            donor['blood_group'] = donor_blood_group
            donor['area'] = donor_area
            messagebox.showinfo("Success", "Profile updated successfully!")
            return
    messagebox.showerror("Error", "Donor not found!")

# Admin functionalities
def admin_app():
    clear_window()
    
    label_blood_stock = tk.Label(root, text="Current Blood Stock")
    label_blood_stock.pack()
    
    blood_stock_text = "\n".join([f"{blood_group}: {quantity}" for blood_group, quantity in blood_stock.items()])
    tk.Label(root, text=blood_stock_text).pack()
    
    tk.Label(root, text="Update Blood Stock").pack()
    
    global entry_update_blood_group
    entry_update_blood_group = tk.Entry(root)
    entry_update_blood_group.pack()
    
    global entry_update_quantity
    entry_update_quantity = tk.Entry(root)
    entry_update_quantity.pack()
    
    update_button = tk.Button(root, text="Update Stock", command=update_blood_stock)
    update_button.pack()
    
    delete_donor_button = tk.Button(root, text="Delete Donor", command=delete_donor)
    delete_donor_button.pack()
    
    email_button = tk.Button(root, text="Email Donors", command=email_donors)
    email_button.pack()

    # Show all users
    show_users_button = tk.Button(root, text="Show All Users", command=show_users)
    show_users_button.pack()

def update_blood_stock():
    blood_group = entry_update_blood_group.get()
    quantity = entry_update_quantity.get()
    
    if blood_group in blood_stock:
        try:
            blood_stock[blood_group] += int(quantity)
            messagebox.showinfo("Success", f"Updated {blood_group} stock successfully!")
        except ValueError:
            messagebox.showerror("Error", "Please enter a valid quantity.")
    else:
        messagebox.showerror("Error", "Invalid blood group.")

def delete_donor():
    donor_name = entry_donor_name.get()
    
    global donors
    donors = [donor for donor in donors if donor['name'] != donor_name]
    messagebox.showinfo("Success", "Donor deleted successfully!")

def email_donors():
    donor_email = entry_email.get()
    subject = "Blood Donation Request"
    body = "We need your help! Please consider donating blood ."
    # Simulate sending an email
    messagebox.showinfo("Email Sent", f"Email sent to {donor_email} with subject: {subject}")

def forgot_password():
    email = entry_email.get()
    if email in users:
        verification_code = random.randint(1000, 9999)
        verification_codes[email] = verification_code
        # Simulate sending an email with the verification code
        messagebox.showinfo("Verification Code Sent", f"Verification code sent to {email}: {verification_code}")
    else:
        messagebox.showerror("Error", "Email not registered.")

def verify_code():
    email = entry_email.get()
    code_entered = entry_verification_code.get()
    
    if email in verification_codes and verification_codes[email] == int(code_entered):
        new_password = entry_new_password.get()
        users[email] = new_password
        del verification_codes[email]  # Remove the code after successful verification
        messagebox.showinfo("Success", "Password changed successfully!")
    else:
        messagebox.showerror("Error", "Invalid verification code.")

# GUI setup
root = tk.Tk()
root.title("Blood Donation System")

# Entry fields for user actions
entry_username = tk.Entry(root)
entry_password = tk.Entry(root, show="*")
entry_email = tk.Entry(root)
entry_verification_code = tk.Entry(root)
entry_new_password = tk.Entry(root, show="*")

# Buttons for actions
btn_forgot_password = tk.Button(root, text="Forgot Password", command=forgot_password)
btn_verify_code = tk.Button(root, text="Verify Code", command=verify_code)

# Layout
entry_username.pack()
entry_password.pack()
entry_email.pack()
btn_forgot_password.pack()
entry_verification_code.pack()
btn_verify_code.pack()
entry_new_password.pack()

root.mainloop()

# Function to clear the current window
def clear_window():
    for widget in root.winfo_children():
        widget.destroy()

# Function to show all registered users
def show_users():
    users_list = "\n".join(users.keys())
    messagebox.showinfo("Registered Users", users_list if users_list else "No users registered.")

# Main application function
def main_app():
    clear_window()
    tk.Label(root, text="Welcome to the Blood Donation System").pack()
    # Additional main app functionalities can be added here

# Start the application
root.mainloop()