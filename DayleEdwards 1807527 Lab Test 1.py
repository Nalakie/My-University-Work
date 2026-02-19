'''''''''''''''''''''''''''''''''''
Author: Dayle Edwards
Date: February 17,2026
Lab Test #1
'''''''''''''''''''''''''''''''''''
import random
#---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
def add_item_to_order():
    bill=0.0
    total_bill=0.0
    subtotal_selection=-1
    while True:
        if subtotal_selection==0:
            break
        subtotal_selection=int(input("1.Escovitch Fish\t\t$1500.00\n2.Brown Stew Fish\t\t$1400.00\n3.Festival(3pcs)\t\t$400\n4.Bammy\t\t\t\t$350.00\n5.Coleslaw\t\t\t$300.00\n:"))
        match subtotal_selection:
            case (0):
                total_bill=0.0
                subtotal_selection=0
                return total_bill
            case 1:
                total_bill=(total_bill+1500)
                subtotal_selection=0
                return total_bill
            case 2:
                total_bill=(total_bill+1400)
                subtotal_selection=0
                return total_bill
            case (3):
                total_bill=(total_bill+400)
                subtotal_selection=0
                return total_bill
            case (4):
                total_bill=(total_bill+350)
                subtotal_selection=0
                return total_bill
            case (5):
                total_bill=(total_bill+300)
                subtotal_selection=0
                return total_bill
            case _:
                subtotal_selection=int(input("Option Selected Invalid Please Make a Selection from the list or enter 0 to exit\n:"))
#---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
def set_delivery_location():
    transport_bill=0.0
    total_transport_bill=0.0
    selection=-1
    while True:
        if selection==0:
            break
        selection=int(input("1.Half Way Tree\t\t$500.00\n2.Montego Bay\t\t$900.00\n3.Ocho Rios\t\t$1000.00\n4.May Pen\t\t$800.00\n:"))
        match selection:
            case (0):
                transport_bill=0.0
                selection=0
                return total_transport_bill
            case (1):
                transport_bill=500
                total_transport_bill=(total_transport_bill+transport_bill)
                selection=0
                return total_transport_bill
            case (2):
                transport_bill=900
                total_transport_bill=(total_transport_bill+transport_bill)
                selection=0
                return total_transport_bill
            case (3):
                transport_bill=1000
                total_transport_bill=(total_transport_bill+transport_bill)
                selection=0
                return total_transport_bill
            case (4):
                transport_bill=800
                total_transport_bill=(total_transport_bill+transport_bill)
                selection=0
                return total_transport_bill
            case _:
                selection=int(input("Option Selected Invalid Please Make a Selection from the locations in the list or enter 0 to exit\n:"))
#---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
def checkout(subtotal,location_fee):
    subtotal = 0.0
    location_fee=0.0
    final_bill = 0.0
    tax = 0.1
    subtotal_tax = 0.0
    promo = 0
    base_delivery_fee=(500+delivery)
    subtotal_tax=(order*tax)
    final_bill=(subtotal_tax+order+base_delivery_fee)
    promo = random.randint(1,20)
    if promo==20:
        print("Congratulations You Are Our 20th Customer for the day your order is FREE!")
    elif final_bill<2000:
        print("Order Must Be atleast $2000 to be processed")
    else:
        print(f"-------------------BILL--------------------\nsubtotal\t\t${order:.2f}\nTax(10%)\t\t{subtotal_tax:.2f}\nDelivery Fee\t\t${base_delivery_fee:.2f}\n-------------------------------------------\nFinal Bill\t\t${final_bill:.2f}\n===========================================")
#---------------------------------------------------------------------------------------MAIN------------------------------------------------------------------------------------------
menu=-1
order_complete=0.0
order=0.0
delivery=0.0
subtotal = 0.0
location_fee=0.0
total_bill=0.0
while True:
    if menu==4:
        break
    menu=int(input("1.Add Item\n2.Set Delivery Location\n3.Checkout\n4.Exit\n:"))
    match menu:
        case (1):
            order = order+add_item_to_order()
        case (2):
            delivery = delivery+set_delivery_location()
        case (3):
            order_complete = checkout(subtotal,location_fee)
            menu = 4
        case (4):
            break
        case _:
            print ("Invalid Choose an Option from the menu or enter 4 to Exit Menu\n:")