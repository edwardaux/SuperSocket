//
//  SUDPSpecialPacket.h
//  SuperSocket
//
//  Created by Joel Fischer on 7/14/15.
//  Copyright © 2015 livio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SUDPSpecialPacket : NSObject {
  @public
    //	uint8_t type;

    BOOL resolveInProgress;

    NSArray<NSData *> *addresses;
    NSError *error;
}

- (instancetype)init;

@end
