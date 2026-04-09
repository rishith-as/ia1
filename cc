Calculator.java
public class Calculator {

    public int add(int a, int b) {
        return a + b;
    }

    public int divide(int a, int b) {
        if (b == 0) {
            throw new IllegalArgumentException("Cannot divide by zero");
        }
        return a / b;
    }
}
Step 2: Write JUnit Test Cases
Create test cases for the above class.
CalculatorTest.java
import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

public class CalculatorTest {

    Calculator calc = new Calculator();

    @Test
    public void testAdd() {
        assertEquals(5, calc.add(2, 3));
    }

    @Test
    public void testDivide() {
        assertEquals(2, calc.divide(4, 2));
    }
}
Add the following code:
from http.server import SimpleHTTPRequestHandler, HTTPServer

PORT = 5020

class MyHandler(SimpleHTTPRequestHandler):
    def do_GET(self):
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        self.wfile.write(b"<h1>Hello from Docker Python Container</h1>")

server = HTTPServer(("0.0.0.0", PORT), MyHandler)
print(f"Server running on port {PORT}...")
server.serve_forever()
