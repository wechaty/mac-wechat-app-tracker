//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString;

@interface EmoticonMsgInfoQueue : NSObject <PBCoding>
{
    NSMutableArray *msgInfoList;
    NSRecursiveLock *queueLock;
}

+ (void)initialize;
+ (void)PBArrayAdd_queueLock;
+ (void)PBArrayAdd_msgInfoList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *queueLock; // @synthesize queueLock;
@property(retain, nonatomic) NSMutableArray *msgInfoList; // @synthesize msgInfoList;
- (id)getTopMsgInfo;
- (void)removeFromQueue:(id)arg1;
- (void)addToQueue:(id)arg1;
- (BOOL)containsMsgInfo:(id)arg1;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

