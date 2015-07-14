//
//  SUDPSendPacket.h
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The GCDAsyncUdpSendPacket encompasses the instructions for a single send/write.
 **/
@interface SUDPSendPacket : NSObject {
@public
    NSData *buffer;
    NSTimeInterval timeout;
    long tag;
    
    BOOL resolveInProgress;
    BOOL filterInProgress;
    
    NSArray<NSData *> *resolvedAddresses;
    NSError *resolveError;
    
    NSData *address;
    int addressFamily;
}

- (instancetype)initWithData:(NSData *)d timeout:(NSTimeInterval)t tag:(long)i;

@end
