//
//  BLCComment.h
//  Blocstagram
//
//  Created by Joseph Blanco on 6/14/15.
//  Copyright (c) 2015 Blancode. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) BLCUser *from;
@property (nonatomic, strong) NSString *text;

@end
