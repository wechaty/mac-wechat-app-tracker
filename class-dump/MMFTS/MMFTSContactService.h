//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"

@class FIFOQueue, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMFTSContactService : MMService <IMessageExt, MMService>
{
    NSMutableDictionary *_taskDict;
    NSRecursiveLock *_m_oLock;
    FIFOQueue *_m_taskQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FIFOQueue *m_taskQueue; // @synthesize m_taskQueue=_m_taskQueue;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
- (void)onAddMsg:(id)arg1 msgData:(id)arg2;
- (void)AddGetContactTask:(id)arg1 msgData:(id)arg2;
- (void)CheckGetContactTask;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

