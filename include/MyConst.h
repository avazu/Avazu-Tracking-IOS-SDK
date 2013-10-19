//
//  MyConst.h
//  SubscriptionSDK
//
//  Created by Ryan Fang on 13-9-3.
//  Copyright (c) 2013年 Teebik. All rights reserved.
//

#ifndef TEEBIK_SUBSCRIPTION_Const_h
#define TEEBIK_SUBSCRIPTION_Const_h

#import "MyToolsInit.h"

#define App ((MyToolsInit *)[MyToolsInit getInitInstance])

typedef enum MY_TASK_RESULT_STATE_{
    MY_TASK_RESULT_SUCCESS = 0,
    MY_TASK_RESULT_NEEDNOT = 1,
    MY_TASK_RESULT_FAILED = 2,
    MY_TASK_RESULT_REFERRER = 3
}MyTaskResultState;


#endif