//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class MMEmoticonData, NSAttributedString, NSColor, NSImage, NSTrackingArea;

@interface MMEmojiPickerEmojiCell : JNWCollectionViewCell
{
    NSTrackingArea *_trackingArea;
    NSAttributedString *_stringForDrawing;
    NSImage *_imageForDrawing;
    BOOL _highlighted;
    BOOL _rollover;
    MMEmoticonData *_emoticonData;
    NSColor *_paletteItemRolloverColor;
    NSColor *_paletteItemHighlightColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *paletteItemHighlightColor; // @synthesize paletteItemHighlightColor=_paletteItemHighlightColor;
@property(retain, nonatomic) NSColor *paletteItemRolloverColor; // @synthesize paletteItemRolloverColor=_paletteItemRolloverColor;
@property(nonatomic) BOOL rollover; // @synthesize rollover=_rollover;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) MMEmoticonData *emoticonData; // @synthesize emoticonData=_emoticonData;
- (void)clicked:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (void)setPaletteItemsSelectedColor:(id)arg1 andPaletteItemHighlightColor:(id)arg2;
- (void)updateTrackingAreas;
- (id)reuseIdentifier;
- (void)dealloc;
- (void)willLayoutWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

