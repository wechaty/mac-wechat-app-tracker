//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACScheduler.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface RACQueueScheduler : RACScheduler
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (unsigned long long)wallTimeWithDate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)after:(id)arg1 repeatingEvery:(double)arg2 withLeeway:(double)arg3 schedule:(CDUnknownBlockType)arg4;
- (id)after:(id)arg1 schedule:(CDUnknownBlockType)arg2;
- (id)schedule:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;

@end

