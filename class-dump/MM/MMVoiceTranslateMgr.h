//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface MMVoiceTranslateMgr : MMService <MMService>
{
    BOOL _m_isStop;
    NSRecursiveLock *_m_lock;
    NSMutableArray *_m_pendingMsgList;
    NSMutableArray *_m_translatingMsgList;
    NSMutableDictionary *_m_cgiDic;
    NSObject<OS_dispatch_queue> *_m_translateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_translateQueue; // @synthesize m_translateQueue=_m_translateQueue;
@property(retain, nonatomic) NSMutableDictionary *m_cgiDic; // @synthesize m_cgiDic=_m_cgiDic;
@property(retain, nonatomic) NSMutableArray *m_translatingMsgList; // @synthesize m_translatingMsgList=_m_translatingMsgList;
@property(retain, nonatomic) NSMutableArray *m_pendingMsgList; // @synthesize m_pendingMsgList=_m_pendingMsgList;
@property(nonatomic) BOOL m_isStop; // @synthesize m_isStop=_m_isStop;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
- (void)updateTranscribeVoiceMessage:(id)arg1 voiceText:(id)arg2 voiceToTextStatus:(unsigned int)arg3;
- (void)tryNextMsgWrap:(id)arg1;
- (void)stopTranslate;
- (void)stopTranslateTask:(id)arg1 isCancel:(BOOL)arg2;
- (void)sendTranslateRequest;
- (void)doTranslate:(id)arg1 isAuto:(BOOL)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
