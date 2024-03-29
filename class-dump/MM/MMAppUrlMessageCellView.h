//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class CAShapeLayer, MMBorderView, MMImageView, MMTextView, NSImageView, NSTextField, NSView, SVGImageView;

@interface MMAppUrlMessageCellView : MMMessageCellView
{
    NSView *_containerView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    MMImageView *_thumbnailImageView;
    NSImageView *_videoIcon;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_highlightLayer;
    MMTextView *_bottomTextView;
    SVGImageView *_bottomLeftIcon;
    MMBorderView *_divider;
}

+ (id)messageTableItemAppName:(id)arg1;
+ (id)messageTableItemDesc:(id)arg1;
+ (id)_formattedAppUrlBottomWithStr:(id)arg1;
+ (id)messageTableItemTitle:(id)arg1;
+ (double)containerHeightWithMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBorderView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) SVGImageView *bottomLeftIcon; // @synthesize bottomLeftIcon=_bottomLeftIcon;
@property(retain, nonatomic) MMTextView *bottomTextView; // @synthesize bottomTextView=_bottomTextView;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) NSImageView *videoIcon; // @synthesize videoIcon=_videoIcon;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void)downloadThumbnailByHttp;
- (void)downloadThumbnailByCDN;
- (void)startDownloadThumbnailIfNeeded;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (id)getURLString;
- (void)openUrl;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect)clickableArea;
- (struct CGRect)bubbleFrame;
- (id)defaultThumbnailImg;
- (void)layoutDescriptionLabel;
- (void)layoutThumbnail;
- (void)layoutTitleLabel;
- (void)layoutContainerView;
- (void)layoutBottomView;
- (void)updateMessageLayer;
- (void)updateHighlightMaskView;
- (void)exposeUrlToMultiTab:(id)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContent;

@end

