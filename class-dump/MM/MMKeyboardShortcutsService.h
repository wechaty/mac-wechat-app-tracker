//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "JTCaptureRequestDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class NSImageView, NSString, NSTextField;

@interface MMKeyboardShortcutsService : MMService <JTCaptureRequestDelegate, AccountServiceExt, MMService>
{
    BOOL _shouldOpenMainWindow;
    BOOL _shouldPasteScreenshot;
    unsigned char _isShowSystemRecordPerference;
    NSTextField *_filePathLabel;
    NSImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char isShowSystemRecordPerference; // @synthesize isShowSystemRecordPerference=_isShowSystemRecordPerference;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak NSTextField *filePathLabel; // @synthesize filePathLabel=_filePathLabel;
@property(nonatomic) BOOL shouldPasteScreenshot; // @synthesize shouldPasteScreenshot=_shouldPasteScreenshot;
@property(nonatomic) BOOL shouldOpenMainWindow; // @synthesize shouldOpenMainWindow=_shouldOpenMainWindow;
- (void)showSystemScreenRecordSettings;
- (void)ignoreSystemScreenRecordSettings:(id)arg1;
- (void)captureRequest:(id)arg1 didFinishWithImageData:(id)arg2 saveToPath:(id)arg3 error:(id)arg4;
- (void)captureRequestDidCancel:(id)arg1;
- (void)captureRequestDidChange:(id)arg1;
- (void)FFAddRecvFavZZ:(BOOL)arg1;
- (void)openMainWindow;
- (void)startScreenShot:(BOOL)arg1;
- (void)showScreenRecordingPrompt;
- (BOOL)checkedRecordScreen;
- (void)registerDefaultShortcuts;
- (void)setUpShortcutsFromDefaults;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
