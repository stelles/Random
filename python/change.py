def change(change):
    amount = float(raw_input("How much money?"))

    quarter = int(amount/.25)
    amount = amount%.25
    dime = int(amount/.10)
    amount = amount%.10
    nickel = int(amount/.05)
    amount = amount%.05
    penny = int(amount/.01)

    print "Quarters: ", quarter, "\nDimes: ", dime, "\nNickels: ", nickel, "\nPennies: ", penny 
