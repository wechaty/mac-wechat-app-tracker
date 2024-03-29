//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFileDetailStateController.h"

#import "IMessageExt-Protocol.h"
#import "IMessageServiceFileExt-Protocol.h"
#import "MMAppMgrDownloadMsgExt-Protocol.h"

@class MessageData, NSString, TKStateMachine;

@interface MMChatFileDetailStateController : MMFileDetailStateController <IMessageExt, IMessageServiceFileExt, MMAppMgrDownloadMsgExt>
{
    MessageData *_msgData;
    TKStateMachine *_stateMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=_msgData;
- (void)updateAppMsgState:(id)arg1 andState:(unsigned int)arg2;
- (void)onDelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)onFileDidCancelDownloadWithMessage:(id)arg1;
- (void)onFileDidFailDownloadWithMessage:(id)arg1;
- (void)onFileDidFinishDownloadWithMessage:(id)arg1 isPredownload:(BOOL)arg2;
- (void)onFileDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (void)pauseDownload;
- (void)startDownload;
- (void)stopWait;
- (void)windowDidLoad;
- (id)windowUniqueId;
- (id)fileType;
- (unsigned long long)fileSize;
- (id)fileName;
- (id)title;
- (void)showFileWithoutShowingLoadingWindow;
- (void)openFile;
- (unsigned int)getMsgDownloadState;
- (void)fireStateEvent:(id)arg1;
- (void)startMachine;
- (void)initStateMachine;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

