# proiecte


This is a desktop application developed in Java that provides administration capabilities for participants in a competition. In the application, a user can have either an organizer or participant role. Operations such as adding, deleting, modifying, and viewing participants can be performed. The application is organized as microservices, uses Spring Boot as the supporting framework and Hibernate for object-relational mapping.

The initial project requirement:

The organizers of a children's athletics competition use a software system for participant registration. The system is used at various offices throughout the city. Each office personnel uses a desktop application with the following functionalities:

1. Login: After successful authentication, a new window opens displaying age groups (6-8 years, 9-11 years, 12-15 years) and events (50m, 100m, 1000m, and 1500m) that a child can register for. Only certain events may be available for a specific age group (e.g., for the 6-8 age group, a child can only participate in the 50m and 100m events).

2. Search: After successful authentication, office personnel can search for children who have already registered for a specific event and age group. The application displays in another list/table all children (child's name, age, and the number of events registered).

3. Registration: A child can register for a maximum of two events. During registration, the office personnel enters the child's name, age, and the events they want to participate in. After registration, all personnel from other offices see the updated list of events and the number of children registered for each event.

4. Logout.

The project has a graphical user interface, logging, client-server implementation, and also includes REST services and a small web client. The REST services work with both the test client in the ServiciuRest/client folder, written in Java, and with the test client in the ClientCsharp folder, written in C#.
