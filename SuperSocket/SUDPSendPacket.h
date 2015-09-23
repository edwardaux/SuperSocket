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
@interface SUDPSendPacket : NSObject

@property (strong, nonatomic, readonly) NSData *buffer;
@property (assign, nonatomic, readonly) NSTimeInterval timeout;
@property (assign, nonatomic, readonly) long tag;

@property (assign, nonatomic) BOOL resolveInProgress;
@property (assign, nonatomic) BOOL filterInProgress;
@property (strong, nonatomic) NSArray<NSData *> *resolvedAddresses;
@property (strong, nonatomic) NSError *resolveError;
@property (strong, nonatomic) NSData *address;
@property (assign, nonatomic) int addressFamily;

- (instancetype)initWithData:(NSData *)data timeout:(NSTimeInterval)timeout tag:(long)tag;

@end
