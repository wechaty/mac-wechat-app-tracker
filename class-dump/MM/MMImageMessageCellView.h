//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "CALayerDelegate-Protocol.h"
#import "IMessageCacheMgrImageExt-Protocol.h"
#import "IMessageServiceImageExt-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class CAShapeLayer, MMRoundedRectangleView, NSImage, NSImageView, NSString, NSTextField, SVGImageView;

@interface MMImageMessageCellView : MMMessageCellView <IMessageCacheMgrImageExt, NSPasteboardItemDataProvider, CALayerDelegate, IMessageServiceImageExt>
{
    struct CGRect _imgDrawRect;
    long long _resizeCountInDrawRect;
    unsigned long long _recalcHeightCount;
    BOOL _isStartDownloadManually;
    unsigned long long _displayType;
    NSImage *_displayedImage;
    NSString *_displayedImagePath;
    NSImageView *_displayedImageView;
    CAShapeLayer *_highlightLayer;
    CAShapeLayer *_strokeLayer;
    NSString *_cdnKey;
    MMRoundedRectangleView *_readMoreView;
    NSTextField *_readMoreTipsTextField;
    SVGImageView *_readMoreTipsIconView;
    SVGImageView *_readMoreJumpIconView;
}

+ (struct CGSize)displaySizeForMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)defaultImageWithSize:(struct CGSize)arg1;
+ (id)downloadFailedImage;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL isStartDownloadManually; // @synthesize isStartDownloadManually=_isStartDownloadManually;
@property(retain, nonatomic) SVGImageView *readMoreJumpIconView; // @synthesize readMoreJumpIconView=_readMoreJumpIconView;
@property(retain, nonatomic) SVGImageView *readMoreTipsIconView; // @synthesize readMoreTipsIconView=_readMoreTipsIconView;
@property(retain, nonatomic) NSTextField *readMoreTipsTextField; // @synthesize readMoreTipsTextField=_readMoreTipsTextField;
@property(retain, nonatomic) MMRoundedRectangleView *readMoreView; // @synthesize readMoreView=_readMoreView;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) NSImageView *displayedImageView; // @synthesize displayedImageView=_displayedImageView;
@property(retain, nonatomic) NSString *displayedImagePath; // @synthesize displayedImagePath=_displayedImagePath;
@property(retain, nonatomic) NSImage *displayedImage; // @synthesize displayedImage=_displayedImage;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void)openReadMoreArticle;
- (void)processAutoDownload;
- (BOOL)isAutoDownload;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)contextMenuShowImageBubble;
- (void)contextMenuExport;
- (void)contextMenuOpen;
- (id)getSection2MenuItem;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (id)acceptablePasteTypes;
- (id)draggingImage;
- (struct CGRect)clickableArea;
- (BOOL)draggingEnabled;
- (void)onImageDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)failedImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)originalImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)thumbImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)tellDelegateToUpdatePreview;
- (void)tellDelegateToResize;
- (void)redrawLocalView;
- (void)onViewFrameDidChangeNotification:(id)arg1;
- (void)setBorderAndHighlightBackground;
- (void)updateHighlightMaskView;
- (void)resendMessage;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)layoutErrorAccessories;
- (BOOL)shouldResizeToIdealSizeWithDisplayImageSize:(struct CGSize)arg1 inDrawRect:(struct CGRect)arg2;
- (void)updateImageFrame;
- (void)updateGeometry;
- (void)updateDisplayImage;
- (void)_drawImageWithRect:(struct CGRect)arg1 shouldUpdateImage:(unsigned char)arg2;
- (void)drawRectWithBubbleMask:(BOOL)arg1;
- (void)drawRectWithoutBubbleMask;
- (void)drawImage;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContent;
- (void)populateWithMessage:(id)arg1;
- (void)checkCellView:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

