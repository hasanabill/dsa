import java.util.Stack;

public class App {
    public static void main(String[] args) {
        System.out.println("Implementing my stack");
        // Stack s = new Stack();
        // s.pop();
        // s.push(10);
        // s.push(20);
        // System.out.println("Peek " + s.peek());
        // s.push(30);
        // System.out.println("Poped: " + s.pop());
        // s.push(40);
        // System.out.println("Peek " + s.peek());

        Stack<Integer> myStack = new Stack<>();
        myStack.push(10);
        myStack.push(20);
        myStack.push(30);
        System.out.println("Peek " + myStack.peek());
        System.out.println("Poped: " + myStack.pop());
        myStack.push(40);
        System.out.println("Peek " + myStack.peek());
    }
}
