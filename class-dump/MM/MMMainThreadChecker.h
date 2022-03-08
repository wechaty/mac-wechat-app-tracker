//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMainThreadCheckerConfig;
@protocol MMMainThreadCheckerDelegate, OS_dispatch_semaphore;

@interface MMMainThreadChecker : NSObject
{
    BOOL _isRunning;
    BOOL _response;
    unsigned int _main_thread_id;
    MMMainThreadCheckerConfig *_config;
    id <MMMainThreadCheckerDelegate> _delegate;
    unsigned long long _pingCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int main_thread_id; // @synthesize main_thread_id=_main_thread_id;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) unsigned long long pingCount; // @synthesize pingCount=_pingCount;
@property(nonatomic) BOOL response; // @synthesize response=_response;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <MMMainThreadCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMMainThreadCheckerConfig *config; // @synthesize config=_config;
- (void)throwExceptionIfNeeded;
- (void)pong;
- (void)ping;
- (void)stopMonitor;
- (void)startMonitorInThread;
- (void)startMonitor;
- (id)init;

@end

