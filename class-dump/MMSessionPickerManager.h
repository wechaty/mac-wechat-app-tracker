//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"

@class MMSessionPickerPreviewController, NSMutableDictionary, NSPopover, NSString;

@interface MMSessionPickerManager : MMService <MMViewerWindowDelegate, MMService>
{
    NSMutableDictionary *_viewerWindowDic;
    NSPopover *_previewPopover;
    MMSessionPickerPreviewController *_previewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSessionPickerPreviewController *previewController; // @synthesize previewController=_previewController;
@property(retain, nonatomic) NSPopover *previewPopover; // @synthesize previewPopover=_previewPopover;
@property(retain, nonatomic) NSMutableDictionary *viewerWindowDic; // @synthesize viewerWindowDic=_viewerWindowDic;
- (void)windowDidColsed:(id)arg1;
- (void)hideMessagePreview;
- (void)showDataFieldPreview:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (void)showFavoriteItemPreview:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (void)showMessagePreview:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

