//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class MMBasePreviewPanelWindowController, MMPreviewWindowController, MMThreadSafeDictionary, NSString, NSWindow;

@interface MMPreviewUIMgr : MMService <MMService>
{
    BOOL _shouldShowMainWindow;
    BOOL _useAnimationImage;
    BOOL _shouldOrderFrontWindow;
    BOOL _bMuteToPlay;
    NSWindow *_prevWindow;
    MMPreviewWindowController *_previewPanelWindowController;
    MMBasePreviewPanelWindowController *_filePreviewPanelWindowController;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _willCompletion;
    MMThreadSafeDictionary *_dicImageDownloadRetry;
    struct CGRect _mouseDownRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMThreadSafeDictionary *dicImageDownloadRetry; // @synthesize dicImageDownloadRetry=_dicImageDownloadRetry;
@property(copy, nonatomic) CDUnknownBlockType willCompletion; // @synthesize willCompletion=_willCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MMBasePreviewPanelWindowController *filePreviewPanelWindowController; // @synthesize filePreviewPanelWindowController=_filePreviewPanelWindowController;
@property(retain, nonatomic) MMPreviewWindowController *previewPanelWindowController; // @synthesize previewPanelWindowController=_previewPanelWindowController;
@property(nonatomic) BOOL bMuteToPlay; // @synthesize bMuteToPlay=_bMuteToPlay;
@property(nonatomic) BOOL shouldOrderFrontWindow; // @synthesize shouldOrderFrontWindow=_shouldOrderFrontWindow;
@property(nonatomic) __weak NSWindow *prevWindow; // @synthesize prevWindow=_prevWindow;
@property(nonatomic) BOOL useAnimationImage; // @synthesize useAnimationImage=_useAnimationImage;
@property(nonatomic) BOOL shouldShowMainWindow; // @synthesize shouldShowMainWindow=_shouldShowMainWindow;
@property(nonatomic) struct CGRect mouseDownRect; // @synthesize mouseDownRect=_mouseDownRect;
- (unsigned int)getCurImageMode:(id)arg1;
- (BOOL)canUseTiledLayer;
- (BOOL)canRetryDownloadOriginImage:(id)arg1;
- (void)showPreviewErrorHint:(id)arg1;
- (void)ensureCloseFilePreviewWindow;
- (void)ensureClosePreviewWindow;
- (void)setupVideoPlayerView;
- (void)resetVideoStatus;
- (void)loadVideoWithUrl:(id)arg1;
- (void)previewCommonFileItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previewCommonFileItem:(id)arg1;
- (void)previewUrlImageItem:(id)arg1 willCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)previewUrlImageItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previewSnsItem:(id)arg1;
- (void)previewUrlImageItem:(id)arg1;
- (void)previewAvatarItem:(id)arg1;
- (void)previewDatafieldItem:(id)arg1;
- (void)previewWeNoteItem:(id)arg1;
- (void)previewFavoriteItem:(id)arg1;
- (void)previewMessageItem:(id)arg1;
- (BOOL)isPreviewCanHandleCurrentFavItem:(id)arg1;
- (BOOL)isPreviewCanHandleCurrentMessage:(id)arg1;
- (void)processWillCompletionHandler;
- (void)processCompletionHandler;
- (void)closeFilePreviewWindow;
- (void)closePreviewWindow;
- (id)currentPreviewWindow;
- (double)currentPreviewScreenScale;
- (id)currentPreviewScreen;
- (BOOL)isCurrentPreviewWindowFullscreen;
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

