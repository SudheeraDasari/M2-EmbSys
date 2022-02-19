![ATM PIC](https://user-images.githubusercontent.com/87614111/154791990-0ab21d97-953e-46d7-85c7-b9466a2464de.jpg)


**High Level Requirements:**
* Correct PIN allows transaction.
* Dispenses cash.
* Recipt printed upon demand.
* Defaults to idle upon completion of Transactions.
 
 **Low Level Requirements**
 * Must be entered correctly within a certain number of attempts.
 * Can be opened and refilled with cash.
 * Retaining the card after too many unsuccessful PIN attempts.
 
 **Description of block daigram**
 
**Card Reader**:
* The card reader is an input device that reads data from a card. 
* The card reader is part of the identification of your particular account number and the magnetic strip on the backside of thE  ATM card is used for connection with the card reader.

**Keypad**:
* The card is recognized after the machine asks for further details like your identification number, withdrawal, and your balance inquiry Each card has a unique PIN so that there is little chance for some else to withdraw money from your account.

**Speaker**
* The speaker provides audio feedback when a particular key is pressed.

**Display Screen**
* The display screen displays the transaction information. Each step of withdrawal is shown by the display screen.

**Receipt Printer**
* The receipt printer prints all the details recording your withdrawal, date and time, and the amount of withdrawal and also shows the balance of your account in the receipt.

