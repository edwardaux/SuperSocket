//
//  STCPSpecialPacket.h
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The GCDAsyncSpecialPacket encompasses special instructions for interruptions in the read/write queues.
 * This class my be altered to support more than just TLS in the future.
 **/
@interface STCPSpecialPacket : NSObject {
@public
    NSDictionary *tlsSettings;
}
- (instancetype)initWithTLSSettings:(NSDictionary *)settings;
@end
