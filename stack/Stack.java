package stack;

public class Stack {
    int SIZE = 3;
    int[] stack = new int[SIZE];
    int top = -1;

    void push(int x) {
        if (top < SIZE - 1) {
            top++;
            stack[top] = x;
            System.out.println("Pushed " + x + " to stack");
        } else {
            System.out.println("Stack overflow");
        }
    }

    int pop() {

        if (top >= 0) {
            int x = stack[top];
            top--;
            return x;
        } else {
            System.out.println("Cannot pop. Stack underflow");
        }

        return -1;
    }

    int peek() {
        if (top >= 0) {
            return stack[top];
        } else {
            System.out.println("Cannot peek. Stack underflow");
        }
        return -1;
    }

    public static void main(String[] args) {
        System.out.println("Implementing my stack");
        Stack s = new Stack();
        s.pop();
        s.push(10);
        s.push(20);
        System.out.println("Peek " + s.peek());
        s.push(30);
        System.out.println("Poped: " + s.pop());
        s.push(40);
        System.out.println("Peek " + s.peek());
    }

}
