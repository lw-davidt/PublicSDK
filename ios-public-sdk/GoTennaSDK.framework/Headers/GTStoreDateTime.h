//
//  GTStoreDateTime.h
//  GoTenna
//
//  Created by JOSHUA M MAKINDA on 7/22/15.
//  Copyright (c) 2015 goTenna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GTStoreDateTime : NSObject

@property (nonatomic) BOOL blockStoreDateTimeRequest;

+ (instancetype)shared;

- (void)startIntervalCalls;
- (void)stop;

@end
