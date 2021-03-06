//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageEditTextViewBasedItem.h"

#import "NSTextViewDelegate-Protocol.h"

@class NSBezierPath, NSString;

@interface MMImageEditTextItem : MMImageEditTextViewBasedItem <NSTextViewDelegate>
{
    NSBezierPath *_borderPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSBezierPath *borderPath; // @synthesize borderPath=_borderPath;
- (BOOL)isValid;
- (struct CGRect)textviewRect;
- (struct CGSize)sizeOfTextViewWithString:(id)arg1 width:(double)arg2 height:(double)arg3 font:(id)arg4;
- (struct CGSize)minSizeOfTextViewWithFont:(id)arg1;
- (struct CGSize)minSizeOfTextItemWithFont:(id)arg1;
- (void)drawControlPoints;
- (void)drawActiveBorder;
- (void)drawGraphWithScale:(double)arg1;
- (void)drawGraph;
- (void)updateFrame;
- (void)updateTextView;
- (void)textDidChange:(id)arg1;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (BOOL)mouseHitHorizontalResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitVerticalResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitCornerResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitGraph:(struct CGPoint)arg1;
- (void)move:(struct CGPoint)arg1;
- (void)setEditType:(unsigned long long)arg1;
- (void)setNormalStrokeColor:(id)arg1;
- (void)setNormalStrokeWidth:(double)arg1;
- (void)setupTextView;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 centerPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

