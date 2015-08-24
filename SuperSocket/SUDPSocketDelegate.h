//
//  SUDPSocketDelegate.h
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SUDPSocket;


@protocol SUDPSocketDelegate <NSObject>
@optional

/**
 * By design, UDP is a connectionless protocol, and connecting is not needed.
 * However, you may optionally choose to connect to a particular host for reasons
 * outlined in the documentation for the various connect methods listed above.
 *
 * This method is called if one of the connect methods are invoked, and the connection is successful.
 **/
- (void)udpSocket:(SUDPSocket *)sock didConnectToAddress:(NSData *)address;

/**
 * By design, UDP is a connectionless protocol, and connecting is not needed.
 * However, you may optionally choose to connect to a particular host for reasons
 * outlined in the documentation for the various connect methods listed above.
 *
 * This method is called if one of the connect methods are invoked, and the connection fails.
 * This may happen, for example, if a domain name is given for the host and the domain name is unable to be resolved.
 **/
- (void)udpSocket:(SUDPSocket *)sock didNotConnect:(NSError *)error;

/**
 * Called when the datagram with the given tag has been sent.
 **/
- (void)udpSocket:(SUDPSocket *)sock didSendDataWithTag:(long)tag;

/**
 * Called if an error occurs while trying to send a datagram.
 * This could be due to a timeout, or something more serious such as the data being too large to fit in a sigle packet.
 **/
- (void)udpSocket:(SUDPSocket *)sock didNotSendDataWithTag:(long)tag dueToError:(NSError *)error;

/**
 * Called when the socket has received the requested datagram.
 **/
- (void)udpSocket:(SUDPSocket *)sock didReceiveData:(NSData *)data
      fromAddress:(NSData *)address
    withFilterContext:(id)filterContext;

/**
 * Called when the socket is closed.
 **/
- (void)udpSocketDidClose:(SUDPSocket *)sock withError:(NSError *)error;

@end
