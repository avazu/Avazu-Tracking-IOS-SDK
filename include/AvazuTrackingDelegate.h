//
//  AvazuTrackingDelegate.h
//  AvazuTrackingSdk
//
//  Created by Ryan Fang on 13-10-14.
//  Copyright (c) 2013年 Avazu Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AvazuTrackingDelegate <NSObject>

+ (void)reportAppDownloadGoal:(NSString *)uniqidIn;

@end
