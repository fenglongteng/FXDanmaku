//
//  FXGCDTimer.h
//  FXTrackViewDemo
//
//  Created by ShawnFoo on 2017/1/9.
//  Copyright © 2017年 ShawnFoo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^FXTimerBlock)();

@interface FXGCDTimer : NSObject

/**
 Whether the timer has been cancelled.
 
 Use of this property is discouraged, since it may be set to `YES`
 concurrently at any time.
 
 Not KVO-compliant.
 */
@property (nonatomic, readonly, getter=isCancelled) BOOL cancelled;

+ (instancetype)scheduledTimerWithInterval:(NSTimeInterval)interval
                                     queue:(dispatch_queue_t)queue
                                     block:(FXTimerBlock)block;

- (void)cancel;

@end
