//
//  CommonApplicationDelegate.h
//  SubscriptionSDK
//
//  Created by Ryan Fang on 13-9-4.
//  Copyright (c) 2013年 Teebik. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MyToolsInitDelegate <NSObject>

- (id)init:(id)sender;
+ (id<NSObject>)getInitInstance;
- (id<NSObject>)getApp;
- (id<NSObject>)getSender;
- (ASIDownloadCache *)getDownloadCache;

@end
