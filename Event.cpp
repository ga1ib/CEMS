#include "Event.h"
#include <iostream>
#include <algorithm>
using namespace std;

Event::Event(int id, string &t, string &desc, string &d, string &startT, string &endT, string &loc)
{
    this->eventId = id;
    this->title = t;
    this->description = desc;
    this->date = d;
    this->startTime = startT;
    this->endTime = endT;
    this->location = loc;
}

// getter
int Event::getEventId()
{
    return eventId;
}

string Event::getTitle()
{
    return title;
}

string Event::getDescription()
{
    return description;
}

string Event::getDate()
{
    return date;
}

string Event::getStartTime()
{
    return startTime;
}

string Event::getEndTime()
{
    return endTime;
}

string Event::getLocation()
{
    return location;
}

vector<string> &Event::getAttendees()
{
    return attendees;
}

// setters
void Event::setTitle(string &t)
{
    title = t;
}

void Event::setDescription(string &desc)
{
    description = desc;
}

void Event::setDate(string &d)
{
    date = d;
}

void Event::setStartTime(string &startT)
{
    startTime = startT;
}

void Event::setEndTime(string &endT)
{
    endTime = endT;
}

void Event::setLocation(string &loc)
{
    location = loc;
}

//add attendee
void Event::addAttendee(string attendee)
{
    attendees.push_back(attendee);
}

// remove an attendee
void Event::removeAttendee(string &attendee)
{
    auto it = find(attendees.begin(), attendees.end(), attendee);
    if (it != attendees.end())
    {
        attendees.erase(it);
    }
}

bool Event::isAttendee(string& attendee)  {
    return find(attendees.begin(), attendees.end(), attendee) != attendees.end();
}

// has attendee (Search attendee from an event)
bool Event::hasAttendee(string &attendee)
{
    return find(attendees.begin(), attendees.end(), attendee) != attendees.end();
}

// display attendee (Shows all attendee for an event)
void Event::displayAttendees()
{
    if (attendees.empty())
    {
        cout << "No attendees for this event." << endl;
    }
    else
    {
        cout << endl << "Attendees of " << title << ":";
        cout<<endl;
        for (string &attendee : attendees)
        {
            cout << "- " << attendee << endl;
        }
    }
}

// display event details
void Event::displayEventDetails()
{
    cout << "Event ID: " << eventId << endl;
    cout << "Title: " << title << endl;
    cout << "Description: " << description << endl;
    cout << "Date: " << date << endl;
    cout << "Start Time: " << startTime << endl;
    cout << "End Time: " << endTime << endl;
    cout << "Location: " << location << endl;
    cout << "Attendees: ";
    if (!attendees.empty())
    {
        cout << attendees.front();

        // Print subsequent attendees with a leading comma
        for (auto it =next(attendees.begin()); it != attendees.end(); ++it)
        {
            cout << ", " << *it;
        }
        cout << endl;
    }
    else
    {
        cout << "No attendees has been added for this event yet." << endl;
    }

    cout << endl;
}