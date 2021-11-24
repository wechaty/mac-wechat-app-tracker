//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXCNetWorkDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WXCReportEngine : NSObject <WXCNetWorkDelegate>
{
    NSMutableDictionary *_reportDic;
    NSString *_savePath;
    NSMutableArray *_curReportKeys;
    NSMutableArray *_emergentKeys;
    BOOL _isNeedAddStreamStart;
    NSString *_streamHead;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *streamHead; // @synthesize streamHead=_streamHead;
@property(nonatomic) BOOL isNeedAddStreamStart; // @synthesize isNeedAddStreamStart=_isNeedAddStreamStart;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
- (void)doEMergentReport;
- (void)clearOldVersionReportData;
- (void)doTaskWhenAppBecomeBackground;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (void)reportStaticData;
- (id)getClickStreamHead;
- (id)buildOtherKVString:(id)arg1 range:(struct _NSRange)arg2 itemStr:(id)arg3;
- (id)buildFirstKVString:(id)arg1;
- (void)addClickStreamReportItem:(id)arg1 interval:(long long)arg2;
- (void)saveReportData;
- (void)clearCurReportKeys;
- (void)clearReportData;
- (void)clearAllReportData;
- (id)getReportData:(BOOL)arg1;
- (BOOL)isNeedReportCommonData;
- (void)addReportItem:(int)arg1 WapID:(int)arg2 value:(id)arg3;
- (void)addReportItem:(int)arg1 wapID:(int)arg2 count:(int)arg3;
- (id)getStaticKey:(int)arg1 wapID:(int)arg2;
- (void)initEmergentKeys;
- (void)onNewMsgReceived:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

