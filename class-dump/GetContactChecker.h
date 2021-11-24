//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface GetContactChecker : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_dicGetTime;
    NSMutableDictionary *_dictRetryCnt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictRetryCnt; // @synthesize dictRetryCnt=_dictRetryCnt;
@property(retain, nonatomic) NSMutableDictionary *dicGetTime; // @synthesize dicGetTime=_dicGetTime;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (unsigned int)maxGetCntPerTime:(unsigned int)arg1;
- (BOOL)checkAllowToGet:(id)arg1;
- (BOOL)checkNeedRetry:(id)arg1;
- (void)clearRetry:(id)arg1;
- (void)stop;
- (id)init;

@end

