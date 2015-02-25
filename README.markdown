# CocoaAsyncSocket

[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

This project was forked from https://github.com/robbiehanson/CocoaAsyncSocket, and retains the original Public Domain License. The code has been wrapped into a framework, and is [Carthage ready](https://github.com/Carthage/Carthage).

Any questions about the code can probably be answered on the [wiki for the original project](https://github.com/robbiehanson/CocoaAsyncSocket/wiki).

----

CocoaAsyncSocket provides easy-to-use and powerful asynchronous socket libraries for Mac and iOS. The classes are described below.

## TCP

**GCDAsyncSocket** is a TCP/IP socket networking libraries. Here are the key features available:

- Native objective-c, fully self-contained in one class.<br/>
  _No need to muck around with sockets or streams. This class handles everything for you._

- Full delegate support<br/>
  _Errors, connections, read completions, write completions, progress, and disconnections all result in a call to your delegate method._

- Queued non-blocking reads and writes, with optional timeouts.<br/>
  _You tell it what to read or write, and it handles everything for you. Queueing, buffering, and searching for termination sequences within the stream - all handled for you automatically._

- Automatic socket acceptance.<br/>
  _Spin up a server socket, tell it to accept connections, and it will call you with new instances of itself for each connection._

- Support for TCP streams over IPv4 and IPv6.<br/>
  _Automatically connect to IPv4 or IPv6 hosts. Automatically accept incoming connections over both IPv4 and IPv6 with a single instance of this class. No more worrying about multiple sockets._

- Support for TLS / SSL<br/>
  _Secure your socket with ease using just a single method call. Available for both client and server sockets._

- Fully GCD based and Thread-Safe<br/>
  _It runs entirely within its own GCD dispatch_queue, and is completely thread-safe. Further, the delegate methods are all invoked asynchronously onto a dispatch_queue of your choosing. This means parallel operation of your socket code, and your delegate/processing code._

- The Latest Technology & Performance Optimizations<br/>
  _Internally the library takes advantage of technologies such as [kqueue's](http://en.wikipedia.org/wiki/Kqueue) to limit [system calls](http://en.wikipedia.org/wiki/System_call) and optimize buffer allocations. In other words, peak performance._

## UDP

**GCDAsyncUdpSocket** is a UDP/IP socket networking libraries. Here are the key features available:

- Native objective-c, fully self-contained in one class.<br/>
  _No need to muck around with low-level sockets. This class handles everything for you._

- Full delegate support.<br/>
  _Errors, send completions, receive completions, and disconnections all result in a call to your delegate method._

- Queued non-blocking send and receive operations, with optional timeouts.<br/>
  _You tell it what to send or receive, and it handles everything for you. Queueing, buffering, waiting and checking errno - all handled for you automatically._

- Support for IPv4 and IPv6.<br/>
  _Automatically send/recv using IPv4 and/or IPv6. No more worrying about multiple sockets._

- Fully GCD based and Thread-Safe<br/>
  _It runs entirely within its own GCD dispatch_queue, and is completely thread-safe. Further, the delegate methods are all invoked asynchronously onto a dispatch_queue of your choosing. This means parallel operation of your socket code, and your delegate/processing code._
