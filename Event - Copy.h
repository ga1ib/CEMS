#ifndef EVENT_H
#define EVENT_H
using namespace std;

#include <string>
#include <vector>

class Event
{
private:
    int eventId;
    string title;
    string description;
    string date;
    string startTime;
    string endTime;
    string location;
    vector<string> attendees; //manage the list of attendee

public:
    Event(int id, string &t, string &desc, string &d, string &startT, string &endT, string &loc);

    int getEventId();
    string getTitle();
    void setTitle(string &t);
    string getDescription();
    void setDescription(string &desc);
    string getDate();
    void setDate(string &d);
    string getStartTime();
    void setStartTime(string &startT);
    string getEndTime();
    void setEndTime(string &endT);
    string getLocation();
    void setLocation(string &loc);

    // Methods for managing attendees
    void addAttendee(string attendee); //adds new attendee
    void removeAttendee(string &attendee); //removes an attendee
    void displayAttendees(); // display all attendee for an event
    bool hasAttendee(string &attendee); //searc an attendee
    bool isAttendee(string &attendee);// Method to display event details
    void displayEventDetails(); // display attendee
    vector<string> &getAttendees(); // get attendee
};

#endif // EVENT_H
