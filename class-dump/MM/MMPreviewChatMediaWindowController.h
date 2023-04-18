//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

#import "IMessageExt-Protocol.h"
#import "IMessageServiceImageExt-Protocol.h"
#import "MMPreviewChatMediaDataLogicDelegate-Protocol.h"

@class MMPreviewChatMediaDataLogic, MessageData, NSString, WCContactData;

@interface MMPreviewChatMediaWindowController : MMPreviewWindowController <MMPreviewChatMediaDataLogicDelegate, IMessageExt, IMessageServiceImageExt>
{
    MessageData *m_currentPreviewingMessage;
    WCContactData *m_chatContact;
    MMPreviewChatMediaDataLogic *m_dataLogic;
    unsigned long long m_order;
}

- (void).cxx_destruct;
- (void)onImageDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)onImageDidFinishedDownloadWithMessage:(id)arg1 type:(int)arg2 isPredownload:(BOOL)arg3;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (void)onDelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)OnHistoryRecordRevoked:(id)arg1 historyId:(unsigned long long)arg2;
- (void)onMsgImgDataLogicCheckedWithPre:(BOOL)arg1 Next:(BOOL)arg2;
- (void)onMsgImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (id)_genPreviewItemWithMessage:(id)arg1;
- (struct CGSize)_genAdjustOriginImageSize:(id)arg1;
- (void)openWith;
- (id)getCurrentPreviewItem;
- (void)onPreviewListChanged;
- (void)setupPageController;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)preLoadImageToCache;
- (void)_updatePreviewList;
- (void)_initPreviewList;
- (void)_initDataLogic;
- (void)_initSingleDataLogic;
- (void)dealloc;
- (id)initWithChatContact:(id)arg1 message:(id)arg2 order:(unsigned long long)arg3 scene:(unsigned long long)arg4 subScene:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

