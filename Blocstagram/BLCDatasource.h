//
//  BLCDatasource.h
//  Blocstagram
//
//  Created by Joseph Blanco on 6/14/15.
//  Copyright (c) 2015 Blancode. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BLCMedia.h"

@class BLCMedia;

@interface BLCDatasource : NSObject

 +(instancetype) sharedInstance;

 @property (nonatomic, strong, readonly) NSArray *mediaItems;

 - (void) deleteMediaItem:(BLCMedia *)item;

@end
