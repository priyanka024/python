from datetime import datetime

class Spy:

    def __init__(self, name, salutation, age, rating):
        self.name = name
        self.salutation = salutation
        self.age = age
        self.rating = rating
        self.is_online = True
        self.chats = []
        self.current_status_message = None


class ChatMessage:

    def __init__(self,message,sent_by_me):
        self.message = message
        self.time = datetime.now()
        self.sent_by_me = sent_by_me

spy = Spy('Sami', 'Ms.', 24, 4.7)

friend_one = Spy('Anmol', 'Mr.', 4.5, 21)
friend_two = Spy('Ani', 'Mr.', 4.4, 22)
friend_three = Spy('Ashish', 'Dr.', 4.3, 23)


friends = [friend_one, friend_two, friend_three]