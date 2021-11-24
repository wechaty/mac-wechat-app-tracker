//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVViewController.h"

#import "LVMainWindowExt-Protocol.h"
#import "LVTrtcMgrExt-Protocol.h"

@class LVLocalSetting, LVTrtcMgr, LVVolumeSlider, NSArray, NSString, NSTrackingArea, NSView, SVGButton;
@protocol LLVLiveBottomToolViewDelegate;

@interface LVLiveBottomToolViewController : LVViewController <LVMainWindowExt, LVTrtcMgrExt>
{
    BOOL _mute;
    BOOL _isCilckMaxminze;
    BOOL _isSetFromLocal;
    int _currentVolumeValue;
    id <LLVLiveBottomToolViewDelegate> _volumeViewDelegate;
    SVGButton *_maxminzeButton;
    SVGButton *_volumeButton;
    SVGButton *_rotateButton;
    NSView *_gradientLayerView;
    NSView *_volumeBgView;
    LVVolumeSlider *_volumeSilder;
    NSArray *_videoRotationArray;
    long long _currentIndex;
    LVTrtcMgr *_trtcMgr;
    NSView *_trackVolumeView;
    NSTrackingArea *_trackArea;
    LVLocalSetting *_localSetting;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isSetFromLocal; // @synthesize isSetFromLocal=_isSetFromLocal;
@property(retain, nonatomic) LVLocalSetting *localSetting; // @synthesize localSetting=_localSetting;
@property(retain, nonatomic) NSTrackingArea *trackArea; // @synthesize trackArea=_trackArea;
@property(nonatomic) __weak NSView *trackVolumeView; // @synthesize trackVolumeView=_trackVolumeView;
@property(nonatomic) BOOL isCilckMaxminze; // @synthesize isCilckMaxminze=_isCilckMaxminze;
@property(nonatomic) BOOL mute; // @synthesize mute=_mute;
@property(nonatomic) int currentVolumeValue; // @synthesize currentVolumeValue=_currentVolumeValue;
@property(nonatomic) __weak LVTrtcMgr *trtcMgr; // @synthesize trtcMgr=_trtcMgr;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *videoRotationArray; // @synthesize videoRotationArray=_videoRotationArray;
@property(nonatomic) __weak LVVolumeSlider *volumeSilder; // @synthesize volumeSilder=_volumeSilder;
@property(nonatomic) __weak NSView *volumeBgView; // @synthesize volumeBgView=_volumeBgView;
@property(retain, nonatomic) NSView *gradientLayerView; // @synthesize gradientLayerView=_gradientLayerView;
@property(nonatomic) __weak SVGButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(nonatomic) __weak SVGButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(nonatomic) __weak SVGButton *maxminzeButton; // @synthesize maxminzeButton=_maxminzeButton;
@property(nonatomic) __weak id <LLVLiveBottomToolViewDelegate> volumeViewDelegate; // @synthesize volumeViewDelegate=_volumeViewDelegate;
- (void)onMainWindowWillExitFullScreen;
- (void)onMainWindowWillEnterFullScreen;
- (void)setAudioVolumeByLocal;
- (void)onLiveTask:(unsigned long long)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)onLiveTask:(unsigned long long)arg1 user:(id)arg2 audioAvailable:(BOOL)arg3;
- (void)closeVolumeSiler;
- (BOOL)isShowVolumeSiler;
- (void)onClickRotateButton:(id)arg1;
- (void)setVolume:(int)arg1;
- (void)updateVolumeButton:(BOOL)arg1;
- (void)updateSilderAndVolumeButton:(int)arg1;
- (void)onVolumeSilderChange:(id)arg1;
- (void)setVolumeSilerView:(BOOL)arg1;
- (void)onClickVolumeButton:(id)arg1;
- (void)updateMaxMinzeButton:(BOOL)arg1;
- (void)onClickMaxMinzeButton:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)mouseEntered:(id)arg1;
- (void)addTrackArea;
- (void)setGradienLayer;
- (void)updateDefaultVolumeView;
- (void)setUpView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

