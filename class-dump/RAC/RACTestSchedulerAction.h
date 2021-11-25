//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, RACDisposable;

@interface RACTestSchedulerAction : NSObject
{
    NSDate *_date;
    CDUnknownBlockType _block;
    RACDisposable *_disposable;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;
- (id)initWithDate:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
