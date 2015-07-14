//
//  STCPWritePacket.m
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import "STCPWritePacket.h"

@implementation STCPWritePacket

- (instancetype)initWithData:(NSData *)d timeout:(NSTimeInterval)t tag:(long)i {
    if ((self = [super init])) {
        buffer = d; // Retain not copy. For performance as documented in header file.
        bytesDone = 0;
        timeout = t;
        tag = i;
    }
    return self;
}


@end
