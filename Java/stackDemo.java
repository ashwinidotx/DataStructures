//package datastructures;

public class stackDemo<X> {

    private X[] data;
    private int stackPointer;

    // CONSTRUCTOR
    public stackDemo() {
        data = (X[]) new Object[100];
        stackPointer = 0;
    }

    // PUSH
    public void push(X newItem) {
        data[stackPointer++] = newItem;
    }

    // POP
    public X pop() {
        if (stackPointer == 0) {
            System.err.println("No Items in the Stack"); // Exit condition.
            return null;
        }
        return data[--stackPointer];
    }

    // CONTAINS
    public boolean contains(X item) {
        boolean found = false;
        for (int i = 0; i < stackPointer; i++) {
            if (data[i].equals(item)) {
                found = true;
                break;
            }
        }
        return found;
    }

    // ACCESS
    public X access(X item) {
        while (stackPointer > 0) {
            X tempItem = pop();
            if (data[stackPointer].equals(tempItem)) {
                return tempItem;
            }
        }
        // exit condition.
        return null;
    }

    // SIZE
    public int size() {
        return stackPointer;
    }
}
