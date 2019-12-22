# ElectionMachine
Program for calculating model elections. 

=Election Class=
Election objects will contain certain metadata like a name and ID (Specifics TBD).
They will also contain an array of State object pointers. 

=State Class=
State objects will contain metadata, like the election class, as well as an array of District pointers. The state class will also have a double variable for any statewide modifiers. I imagine this could be used as a percentage or flat modifier for certain candidates or certain parties.

=District Class=
District objects, aside from metadata, will have an array of Candidate pointers. District objects will essentially serve as the location for individual ridings. They also have a double to contain a district wide modifier (leaning), and an ElectionType. The election type will help differentiate districts for different offices. (This could potentially help with things like special elections that happen concurrent to general elections. e.g. A special election for a house of representatives seat that happens during a State's general election for Governor and Legislature.) State-wide elections, like for Senator, could be handled with a district named "Statewide". 

=Candidate Class=
WIP

=Party Class=
