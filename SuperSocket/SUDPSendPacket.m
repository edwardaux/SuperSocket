//
//  SUDPSendPacket.m
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import "SUDPSendPacket.h"

@interface SUDPSendPacket ()

@property (strong, nonatomic, readwrite) NSData *buffer;
@property (assign, nonatomic, readwrite) NSTimeInterval timeout;
@property (assign, nonatomic, readwrite) long tag;

@end


@implementation SUDPSendPacket

- (instancetype)initWithData:(NSData *)data timeout:(NSTimeInterval)timeout tag:(long)tag {
    if ((self = [super init])) {
        _buffer = data;
        _timeout = timeout;
        _tag = tag;

        _resolveInProgress = NO;
    }

    return self;
}


@end
