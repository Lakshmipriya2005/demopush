from http.server import HTTPServer, BaseHTTPRequestHandler

content = '''
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>SEC</title>
  </head>
  <body bgcolor="Green" text="blue">
    <h1>SAVEETHA ENGINEERING COLLEGE</h1>
    <ol>
      <li>CSE</li>
      <li>CSE(cyber security)</li>
      <li>CSE(IOT)</li>
      <li>AI&DS</li>
      <li>AI&ML</li>
      <li>ECE</li>
      <li>MECH</li>
      <li>EEE</li>
      <li>hfjdfh</li>,
    </ol>
    <a href="https://www.saveetha.ac.in"> saveetha</a>
  </body>
</html>
'''


class MyServer(BaseHTTPRequestHandler):
    def do_GET(self):
        print("Get request received...")
        self.send_response(200)
        self.send_header("content-type", "text/html")
        self.end_headers()
        self.wfile.write(content.encode())


print("This is my webserver")
server_address = ('', 8000)
httpd = HTTPServer(server_address, MyServer)
httpd.serve_forever()
