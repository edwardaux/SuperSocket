//
//  SUDPSendPacket.m
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import "SUDPSendPacket.h"

@implementation SUDPSendPacket

- (instancetype)initWithData:(NSData *)d timeout:(NSTimeInterval)t tag:(long)i {
    if ((self = [super init])) {
        buffer = d;
        timeout = t;
        tag = i;

        resolveInProgress = NO;
    }
    return self;
}


@end
