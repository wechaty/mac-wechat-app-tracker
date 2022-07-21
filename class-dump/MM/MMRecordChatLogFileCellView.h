//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogFileCellView.h"

#import "IMMRecordNestedDownloadMgrExt-Protocol.h"

@class MessageData, NSString;

@interface MMRecordChatLogFileCellView : MMChatLogFileCellView <IMMRecordNestedDownloadMgrExt>
{
    MessageData *_messageForDownload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MessageData *messageForDownload; // @synthesize messageForDownload=_messageForDownload;
- (void)downloadData;
- (BOOL)shouldFilterNotify:(id)arg1;
- (void)OnDownloadRecordNestedDataFieldPart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordNestedDataFieldOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordNestedDataFieldFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordNestedDataFieldExpired:(id)arg1 DataId:(id)arg2;
- (void)openFile;
- (void)layoutFileContentView;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2 parentMessage:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

