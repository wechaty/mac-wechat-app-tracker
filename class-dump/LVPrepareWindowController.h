//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVWindowController.h"

#import "LVChooseSourceWindowControllerDelegate-Protocol.h"
#import "LVLiveServiceExt-Protocol.h"
#import "NSControlTextEditingDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "TRTCCloudDelegate-Protocol.h"

@class LVCameraCapture, LVChooseSourceWindowController, LVLoadingViewController, LVWhiteCursorTextfield, MMOutlineButton, MMToastView, NSAlert, NSArray, NSImageView, NSString, NSView, SVGButton, SVGImageView, TRTCScreenCaptureSourceInfo, WCContactData;
@protocol LVPrepareWindowDelegate;

@interface LVPrepareWindowController : LVWindowController <LVLiveServiceExt, LVChooseSourceWindowControllerDelegate, TRTCCloudDelegate, NSControlTextEditingDelegate, NSWindowDelegate>
{
    BOOL _isClickStart;
    id <LVPrepareWindowDelegate> _delegate;
    NSImageView *_videoPreviewImageView;
    LVWhiteCursorTextfield *_titleTextField;
    MMOutlineButton *_startButton;
    NSView *_separateView;
    NSImageView *_screenCaptureCameraImageView;
    NSImageView *_backgroundImageView;
    SVGImageView *_micTipsImageView;
    SVGButton *_chooseCameraButton;
    SVGButton *_chooseMicButton;
    SVGButton *_chooseLiveSourceButton;
    WCContactData *_contact;
    MMToastView *_toastView;
    NSString *_roomId;
    LVChooseSourceWindowController *_chooseScreenWindowController;
    NSArray *_cameraDevices;
    LVCameraCapture *_deviceCapture;
    LVLoadingViewController *_loadingViewController;
    NSAlert *_alert;
    LVCameraCapture *_cameraCapture;
    NSString *_selectedCameraId;
    NSString *_selectedMicId;
    TRTCScreenCaptureSourceInfo *_selectedScreenId;
    unsigned long long _closeReason;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long closeReason; // @synthesize closeReason=_closeReason;
@property(retain, nonatomic) TRTCScreenCaptureSourceInfo *selectedScreenId; // @synthesize selectedScreenId=_selectedScreenId;
@property(retain, nonatomic) NSString *selectedMicId; // @synthesize selectedMicId=_selectedMicId;
@property(retain, nonatomic) NSString *selectedCameraId; // @synthesize selectedCameraId=_selectedCameraId;
@property(nonatomic) BOOL isClickStart; // @synthesize isClickStart=_isClickStart;
@property(retain, nonatomic) LVCameraCapture *cameraCapture; // @synthesize cameraCapture=_cameraCapture;
@property(retain, nonatomic) NSAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) LVLoadingViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) LVCameraCapture *deviceCapture; // @synthesize deviceCapture=_deviceCapture;
@property(retain, nonatomic) NSArray *cameraDevices; // @synthesize cameraDevices=_cameraDevices;
@property(nonatomic) __weak LVChooseSourceWindowController *chooseScreenWindowController; // @synthesize chooseScreenWindowController=_chooseScreenWindowController;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) MMToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) SVGButton *chooseLiveSourceButton; // @synthesize chooseLiveSourceButton=_chooseLiveSourceButton;
@property(retain, nonatomic) SVGButton *chooseMicButton; // @synthesize chooseMicButton=_chooseMicButton;
@property(retain, nonatomic) SVGButton *chooseCameraButton; // @synthesize chooseCameraButton=_chooseCameraButton;
@property(retain, nonatomic) SVGImageView *micTipsImageView; // @synthesize micTipsImageView=_micTipsImageView;
@property(nonatomic) __weak NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak NSImageView *screenCaptureCameraImageView; // @synthesize screenCaptureCameraImageView=_screenCaptureCameraImageView;
@property(nonatomic) __weak NSView *separateView; // @synthesize separateView=_separateView;
@property(nonatomic) __weak MMOutlineButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) __weak LVWhiteCursorTextfield *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak NSImageView *videoPreviewImageView; // @synthesize videoPreviewImageView=_videoPreviewImageView;
@property(nonatomic) __weak id <LVPrepareWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseScreen;
- (void)onSelectScreen:(id)arg1;
- (void)onCloseMic;
- (void)onSelectMic:(id)arg1;
- (void)onCloseCamera;
- (void)onSelectCamera:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)showAlert:(id)arg1 errMsg:(id)arg2;
- (void)onCreateLiveSuccess:(id)arg1;
- (void)onCreateLiveFailure:(id)arg1 andLiveInfo:(id)arg2 isVerified:(BOOL)arg3 andVerifyUrl:(id)arg4;
- (void)onLiveVerifyResult:(BOOL)arg1 isVerified:(BOOL)arg2;
- (void)onError:(int)arg1 errMsg:(id)arg2 extInfo:(id)arg3;
- (void)onFirstVideoFrame:(id)arg1 streamType:(long long)arg2 width:(int)arg3 height:(int)arg4;
- (void)disableStartButton;
- (void)enableStartButton;
- (void)hideToast;
- (void)showFailureToast:(id)arg1;
- (void)showLoadingToast:(id)arg1;
- (void)onClickStartButton:(id)arg1;
- (void)onClickChooseLiveSourceButton:(id)arg1;
- (void)onClickChooseMicButton:(id)arg1;
- (void)onClickChooseCameraButton:(id)arg1;
- (void)changeChooseScreenButtonStatus:(id)arg1 isOpen:(BOOL)arg2;
- (void)initSVGButton:(id)arg1 andImageName:(id)arg2 andAlternateImageName:(id)arg3 andButtonType:(unsigned long long)arg4 andImageSize:(struct CGSize)arg5;
- (void)initView;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithRoomId:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

