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
    EventLinkedList();  // Constructor
    ~EventLinkedList(); // Destructor

    void insertEvent(Event &e);
    void deleteEvent(int eventId);
    EventNode *findEventById(int eventId);
    void displayAllEvents();
    void searchEventByTitle(string &title);
    void saveEventsToFile(string &filename);
    void loadEventsFromFile(string &filename);

    // Update methods
    void updateEvent(int eventId);
    void manageAttendees(int eventId);
    void manageEvent(int eventId);
    bool hasScheduleConflict(Event &newEvent);


private:
        void displayEventDetails(Event &event);
};

#endif // EVENTLINKEDLIST_H
