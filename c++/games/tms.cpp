#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Class definitions

class User {
public:
    User(string username, string password) : username(username), password(password) {}

    string getUsername() const {
        return username;
    }

    string getPassword() const {
        return password;
    }

private:
    string username;
    string password;
};

class Cab {
public:
    Cab(string cabNumber, string driverName) : cabNumber(cabNumber), driverName(driverName) {}

    string getCabNumber() const {
        return cabNumber;
    }

    string getDriverName() const {
        return driverName;
    }

private:
    string cabNumber;
    string driverName;
};

class Booking {
public:
    Booking(User user, Cab cab, string bookingDate) : user(user), cab(cab), bookingDate(bookingDate) {}

    User getUser() const {
        return user;
    }

    Cab getCab() const {
        return cab;
    }

    string getBookingDate() const {
        return bookingDate;
    }

private:
    User user;
    Cab cab;
    string bookingDate;
};

class TravelManagementSystem {
public:
    // Sign-up a new user
    void signUp(string username, string password) {
        users[username] = User(username, password);
        cout << "User signed up successfully!" << endl;
    }

    // Sign-in a user
    bool signIn(string username, string password) {
        if (users.find(username) != users.end() && users[username].getPassword() == password) {
            loggedInUser = &users[username];
            cout << "Logged in successfully!" << endl;
            return true;
        }
        cout << "Invalid username or password." << endl;
        return false;
    }

    // Add a new cab
    void addCab(string cabNumber, string driverName) {
        cabs.push_back(Cab(cabNumber, driverName));
        cout << "Cab added successfully!" << endl;
    }

    // Make a booking
    void makeBooking(string cabNumber, string bookingDate) {
        if (loggedInUser != nullptr) {
            Cab selectedCab("", "");
            for (const Cab& cab : cabs) {
                if (cab.getCabNumber() == cabNumber) {
                    selectedCab = cab;
                    break;
                }
            }
            if (selectedCab.getCabNumber() != "") {
                bookings.push_back(Booking(*loggedInUser, selectedCab, bookingDate));
                cout << "Booking successful!" << endl;
            } else {
                cout << "Invalid cab number." << endl;
            }
        } else {
            cout << "Please log in first." << endl;
        }
    }

    // Display bookings for a user
    void displayBookings() {
        if (loggedInUser != nullptr) {
            cout << "Bookings for user " << loggedInUser->getUsername() << ":" << endl;
            for (const Booking& booking : bookings) {
                if (booking.getUser().getUsername() == loggedInUser->getUsername()) {
                    cout << "Cab: " << booking.getCab().getCabNumber() << " | Driver: " << booking.getCab().getDriverName() << " | Booking Date: " << booking.getBookingDate() << endl;
                }
            }
        } else {
            cout << "Please log in first." << endl;
        }
    }

private:
    map<string, User> users;
    vector<Cab> cabs;
    vector<Booking> bookings;
    User* loggedInUser = nullptr;
};

int main() {
    TravelManagementSystem tms;

    tms.signUp("user1", "password1");
    tms.signIn("user1", "password1");

    tms.addCab("ABC123", "John");
    tms.addCab("XYZ789", "Jane");

    tms.makeBooking("ABC123", "2023-08-05");
    tms.makeBooking("XYZ789", "2023-08-06");

    tms.displayBookings();

    return 0;
}
