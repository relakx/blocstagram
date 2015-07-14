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

 typedef void (^BLCNewItemCompletionBlock)(NSError *error);

@interface BLCDatasource : NSObject

 +(instancetype) sharedInstance;
 + (NSString *) instagramClientID;

 @property (nonatomic, strong, readonly) NSArray *mediaItems;
 @property (nonatomic, strong, readonly) NSString *accessToken;

 - (void) deleteMediaItem:(BLCMedia *)item;
 - (void) requestNewItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;
 - (void) requestOldItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;


@end
