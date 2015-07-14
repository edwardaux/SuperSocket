//
//  STCPSpecialPacket.m
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import "STCPSpecialPacket.h"

@implementation STCPSpecialPacket

- (instancetype)initWithTLSSettings:(NSDictionary *)settings {
    if ((self = [super init])) {
        tlsSettings = [settings copy];
    }
    return self;
}

@end
