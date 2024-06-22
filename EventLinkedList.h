#ifndef EVENTLINKEDLIST_H
#define EVENTLINKEDLIST_H

#include "Event.h"

class EventLinkedList
{
private:
    struct EventNode
    {
        Event event;
        EventNode *next;
        EventNode(Event &e) : event(e), next(nullptr) {}
    };

    EventNode *head;

public:
    EventLinkedList();
    ~EventLinkedList();

    void insertEvent(Event &e);
    void deleteEvent(int eventId);
    EventNode *findEventById(int eventId);
    void displayAllEvents();
    void searchEventByTitle(string &title);
    void updateEvent(int eventId);
    void manageAttendees(int eventId);
    bool hasScheduleConflict(Event &newEvent);
    void saveEventsToFile(string &filename);
    void loadEventsFromFile(string &filename);

    void attendeeVisited(string &attendee); // New method declaration

private:
    void displayEventDetails(Event &event);

    // private:
    //     bool isValidDate(string &date);
    //     bool isValidTime(string &time);
    //     bool isFutureDateTime(string &date, string &time);
};

#endif // EVENTLINKEDLIST_H