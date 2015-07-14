//
//  STCPWritePacket.h
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The GCDAsyncWritePacket encompasses the instructions for any given write.
 **/
@interface STCPWritePacket : NSObject {
@public
    NSData *buffer;
    NSUInteger bytesDone;
    long tag;
    NSTimeInterval timeout;
}
- (instancetype)initWithData:(NSData *)d timeout:(NSTimeInterval)t tag:(long)i;
@end
