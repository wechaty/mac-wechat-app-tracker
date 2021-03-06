//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RACScheduler : NSObject
{
    NSString *_name;
}

+ (id)currentScheduler;
+ (BOOL)isOnMainThread;
+ (id)subscriptionScheduler;
+ (id)scheduler;
+ (id)schedulerWithPriority:(long long)arg1;
+ (id)schedulerWithPriority:(long long)arg1 name:(id)arg2;
+ (id)mainThreadScheduler;
+ (id)immediateScheduler;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)performAsCurrentScheduler:(CDUnknownBlockType)arg1;
- (void)scheduleRecursiveBlock:(CDUnknownBlockType)arg1 addingToDisposable:(id)arg2;
- (id)scheduleRecursiveBlock:(CDUnknownBlockType)arg1;
- (id)after:(id)arg1 repeatingEvery:(double)arg2 withLeeway:(double)arg3 schedule:(CDUnknownBlockType)arg4;
- (id)afterDelay:(double)arg1 schedule:(CDUnknownBlockType)arg2;
- (id)after:(id)arg1 schedule:(CDUnknownBlockType)arg2;
- (id)schedule:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1;
- (id)description;

@end

