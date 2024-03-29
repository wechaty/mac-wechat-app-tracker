//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMNewRecordDownloadServiceExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString;

@interface MMChatLogImageDownloadService : MMService <IMMNewRecordDownloadServiceExt, MMService>
{
}

- (void)onDownloadRecordPart:(id)arg1 key:(id)arg2 partLen:(unsigned int)arg3 totalLen:(unsigned int)arg4 context:(id)arg5;
- (void)onDownloadRecordOK:(id)arg1 key:(id)arg2 context:(id)arg3;
- (void)onDownloadRecordFail:(id)arg1 key:(id)arg2 context:(id)arg3;
- (void)onDownloadRecordExpired:(id)arg1 key:(id)arg2 context:(id)arg3;
- (void)processImageAndNotifyWithOriginPath:(id)arg1 previewPath:(id)arg2 taskId:(id)arg3;
- (void)downloadImageByDataField:(id)arg1 path:(id)arg2 type:(unsigned long long)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

