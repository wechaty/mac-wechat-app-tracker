//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCTicker : NSObject
{
    long long _tickCount;
    long long _tickInteval;
    CDUnknownBlockType _block;
}

+ (id)tickerWithInterval:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long tickInteval; // @synthesize tickInteval=_tickInteval;
@property(nonatomic) long long tickCount; // @synthesize tickCount=_tickCount;
- (void)clearTick;
- (void)tick;

@end
