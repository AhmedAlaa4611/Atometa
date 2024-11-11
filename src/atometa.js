class State
{
    constructor() {
        this.state_num = "q0";
        this.arrow_1 = { alphabet: "0", state_goes: "q1" };
        this.arrow_2 = { alphabet: "1", state_goes: "q2" };
    }

    set_Attributes() {
      this.state_num = prompt("Enter the state name:");
      this.arrow_1.alphabet = prompt("Enter the output 1 arrow's alphabet:");
      this.arrow_1.state_goes = prompt("Enter the name of state that this arrow will go:");
      this.arrow_2.alphabet = prompt("Enter the output 2 arrow's alphabet: ");
      this.arrow_2.state_goes = prompt("Enter the name of state that this arrow will go:");
    }

    get_name() {
      return this.state_num;
    }
    
    Regular_Function(ch) {
      if (ch === this.arrow_1.alphabet)
        return this.arrow_1.state_goes;
      else
        return this.arrow_2.state_goes;
    }
}

const count_states = Number(prompt("Enter the number of states:"));
console.log("Make sure to give the program the start state as the first one.");
const vec = [];
for (let i = 0; i < count_states; i++)
{
    const obj = new State();
    obj.set_Attributes();
    vec.push(obj);
}

const count_final = Number(prompt("Enter the count of the final states:"));
const final_states = [];
for (let i = 0; i < count_final; i++)
{
    final_states.push(prompt("Enter the names of them all:"));
}

let j = 0;
const st = prompt("Enter your string:");
for (let i = 0; i < st.length; i++)
{
    const found = vec[j].Regular_Function(st[i]);
    for (j = 0; j < vec.length; j++)
    {
        if (vec[j].get_name() === found) break;
    }
}

let isAccepted = false;
for (let i = 0; i < final_states.length; i++)
{
    if (vec[j].get_name() === final_states[i])
    {
        isAccepted = true;
        break;
    }
}

if (isAccepted)
    window.alert("accept")
else
    window.alert("reject")