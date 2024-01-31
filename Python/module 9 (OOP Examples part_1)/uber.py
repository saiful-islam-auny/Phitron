from abc import ABC, abstractmethod
from datetime import datetime

class Ride_Sharing:
    def __init__(self, company_name) -> None:
        self.company_name = company_name
        self.riders = []
        self.drivers = []
        self.rides = []

    def add_rider(self, rider):
        self.riders.append(rider)

    def add_driver(self, driver):
        self.drivers.append(driver)
     
    def __repr__(self) -> str:
        return f'{self.company_name} with Riders: {len(self.riders)} and Drivers: {len(self.drivers)}'

class Uber(ABC):
    def __init__(self, name, email, NID) -> None:
        self.name = name
        self.email = email
        # TODO: SET USER ID DYNAMICALLY
        self.__id = 0
        self.__nid = NID
        self.wallet = 0

    @abstractmethod # jarai ei class theke inheritance korbe tader nijeder implement korte hbe.
    def display_profile(self):
        raise NotImplementedError
    

class Rider(Uber):
    def __init__(self, name, email, NID, current_location, initial_amount) -> None:
        self.wallet = initial_amount
        self.current_ride = None
        self.current_location = current_location
        super().__init__(name, email, NID)

    def display_profile(self):
        print(f'Rider: {self.name} & email: {self.email}')

    def load_cash(self, amount):
        if amount > 0:
            self.wallet+=amount
    def update_location(self, current_location):
        self.current_location = current_location

    def request_ride(self, ride_sharing,destination):
        if not self.current_ride:
            #Done TODO: set ride properly
            #Done TODO: set current ride via ride match
            ride_request = Ride_Request(self, destination)
            ride_matcher = Ride_Matching(ride_sharing.drivers)
            ride = ride_matcher.find_driver(ride_request)
            self.current_ride = ride

    def show_current_ride(self):
        print(self.current_ride)

class Driver(Uber):
    def __init__(self, name, email, NID, current_location) -> None:
        super().__init__(name, email, NID)
        self.current_location = current_location
        self.wallet = 0

    def display_profile(self):
        print(f'Driver name: {self.name} & email: {self.email}')

    def accept_ride(self,ride):
        ride.set_driver(self) #New thing 

class Ride:
    def __init__(self, start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.end_time = None
        self.estimated_fare = None


    def set_driver(self, driver):
        self.driver = driver

    def start_ride(self):
        self.start_time = datetime.now()

    def end_ride(self, rider, amount):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare

    def __repr__(self) -> str:
        return f'Ride details--> Started: {self.start_location} to {self.end_location}'
        
class Ride_Request:
    def __init__(self, rider, end_location) -> None:
        self.rider = rider
        self.end_location = end_location

class Ride_Matching:
    def __init__(self, drivers) -> None:
        self.available_drivers = drivers

    def find_driver(self, ride_request):
        if len(self.available_drivers) > 0:
            #TODO: find the closest driver of the rider
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_location, ride_request.end_location)
            driver.accept_ride(ride)
            return ride
        


class Vehicle(ABC): #Why?
    seppd = {
        'car':50,
        'bike':60,
        'cng':15
    }

    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        self.vehicle_type = vehicle_type
        self.licence_plate = licence_plate
        self.rate = rate
        self.status = 'available'
    
    @abstractmethod
    def start_drive(self):
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        super().__init__(vehicle_type, licence_plate, rate)

    def start_drive(self):
        self.status = 'unavailable'


class Bike(Vehicle):
    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        super().__init__(vehicle_type, licence_plate, rate)
    
    def start_drive(self):
        self.status = 'unavailable'


# check the class integration

Uri = Ride_Sharing('Uri pothe pothe')

sakib = Rider('sakib khan', 'sakib@pocamail.com', 1234, '7 rasta', 1500)
Uri.add_rider(sakib)

kala_pakhi = Driver('kala pakhi', 'kala@gmail.com', 5463, 'moilapota')
Uri.add_driver(kala_pakhi)

print(Uri)

sakib.request_ride(Uri, 'sonadanga')
sakib.show_current_ride()