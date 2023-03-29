def CostForMilesGas(miles):
    MILES_PER_GAL = 30
    DOLLARS_PER_GALLON = 4

    gallons = miles/MILES_PER_GAL
    dollars = gallons*DOLLARS_PER_GALLON
    cents=dollars*100
    cents = cents-(cents%1.0)
    return cents

def CostForMilesMaintenance(miles):
    TIRES_LIFETIME =20000
    TIRE_COST = 500

    SERVICE_SCHEDULE = 10000
    SERVICE_COST = 300

    tiresDollars = (miles*TIRE_COST)/TIRES_LIFETIME
    tireCents = tiresDollars*100
    tireCents = tireCents -(tireCents%1.0)
    serviceDollars = (miles*SERVICE_COST)/SERVICE_SCHEDULE
    serviceCents = serviceDollars * 100
    print(serviceCents)
    serviceCents = serviceCents - (serviceCents % 1.0)
    print(serviceCents)

    return tireCents+serviceCents

def CostForMiles(miles):
    cost1 = CostForMilesGas(miles)
    cost2 = CostForMilesMaintenance(miles)

    return cost1+cost2

miles = int(input("Please enter the amount of miles on your car: "))

cents = CostForMiles(miles)

print("Total cost =",cents,"cents")