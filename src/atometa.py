class State:
    def __init__(self):
        self.state_num = "q0"
        self.arrow_1 = { "alphabet": "0", "state_goes": "q1" }
        self.arrow_2 = { "alphabet": "1", "state_goes": "q2" }

    def set_Attributes(self):
        self.state_num = input("Enter the state name: ")
        self.arrow_1["alphabet"] = input("Enter the output 1 arrow's alphabet: ")
        self.arrow_1["state_goes"] = input("Enter the name of state that this arrow will go: ")
        self.arrow_2["alphabet"] = input("Enter the output 2 arrow's alphabet: ")
        self.arrow_2["state_goes"] = input("Enter the name of state that this arrow will go: ")

    def get_name(self):
        return self.state_num

    def Regular_Function(self, ch):
        if ch == self.arrow_1["alphabet"]:
            return self.arrow_1["state_goes"]
        else:
            return self.arrow_2["state_goes"]

count_states = int(input("Enter the number of states: "))
print("Make sure to give the program the start state as the first one.")
vec = []
for i in range(count_states):
    obj = State()
    obj.set_Attributes()
    vec.append(obj)

count_final = int(input("Enter the count of the final states: "))
print("Enter the names of them all:")
final_states = []
for i in range(count_final):
    temp = input()
    final_states.append(temp)

st = input("Enter your string: ")

j = 0
for i in range(len(st)):
    found = vec[j].Regular_Function(st[i])
    for j in range(len(vec)):
        if vec[j].get_name() == found:
            break

isAccepted = False
for i in range(len(final_states)):
    if vec[j].get_name() == final_states[i]:
        isAccepted = True
        break

if isAccepted:
    print("accept")
else:
    print("reject")
