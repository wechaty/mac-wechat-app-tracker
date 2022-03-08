//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class NSButton, NSString, NSTextField;

@interface MMRecoverWindowController : MMWindowController <NSWindowDelegate>
{
    NSButton *_uploadDumpButton;
    NSTextField *_helpInfo;
    NSButton *_diskDetectButton;
    NSButton *_DBDetectButton;
    NSButton *_forcewebpButton;
}

- (void).cxx_destruct;
@property __weak NSButton *forcewebpButton; // @synthesize forcewebpButton=_forcewebpButton;
@property __weak NSButton *DBDetectButton; // @synthesize DBDetectButton=_DBDetectButton;
@property __weak NSButton *diskDetectButton; // @synthesize diskDetectButton=_diskDetectButton;
@property(retain, nonatomic) NSTextField *helpInfo; // @synthesize helpInfo=_helpInfo;
@property(retain, nonatomic) NSButton *uploadDumpButton; // @synthesize uploadDumpButton=_uploadDumpButton;
- (void)forcewebp:(id)arg1;
- (void)uploadLag:(id)arg1;
- (void)openMiniProgramLogDir:(id)arg1;
- (void)openMiniProgramDataDir:(id)arg1;
- (void)openLagLogDir:(id)arg1;
- (void)openLocalLogDir:(id)arg1;
- (void)openLocalCacheDir:(id)arg1;
- (void)openLocalDataDir:(id)arg1;
- (void)refreshGroupSession:(id)arg1;
- (void)clearNeverReminder:(id)arg1;
- (void)recoverSessionListFromLocal:(id)arg1;
- (void)repairSessionList:(id)arg1;
- (void)repairContactList:(id)arg1;
- (void)showRecentCheckpointTime:(id)arg1;
- (void)resetDBCheckpointInterval:(id)arg1;
- (void)onDBDetectButtonClick:(id)arg1;
- (void)onDiskDetectButtonClick:(id)arg1;
- (void)clearFileIndexAndRestart:(id)arg1;
- (void)cleanMsgDataAndRestart:(id)arg1;
- (void)cleanFavDataAndRestart:(id)arg1;
- (void)cleanDataAndRestart:(id)arg1;
- (void)cleanLocalCache:(id)arg1;
- (void)stopLoadingToast;
- (void)showLoadingToast;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

