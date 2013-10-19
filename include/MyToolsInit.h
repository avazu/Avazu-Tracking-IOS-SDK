//
//  CommonApplication.h
//  SubscriptionSDK
//
//  Created by Ryan Fang on 13-9-4.
//  Copyright (c) 2013年 Teebik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIDownloadCache.h"
#import "MyToolsInitDelegate.h"

@interface MyToolsInit : NSObject<MyToolsInitDelegate>
{
    id<NSObject> sender, app;
    ASIDownloadCache* _downloadCache;            //下载缓存策略
}

@property (nonatomic, retain) ASIDownloadCache *downloadCache;

@end
