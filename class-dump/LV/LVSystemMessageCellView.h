//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVMessageCellView.h"

@class LVCommentBubbleView, MMCTTextView, NSString;

@interface LVSystemMessageCellView : LVMessageCellView
{
    NSString *_content;
    double _viewWidth;
    MMCTTextView *_messageTextView;
    LVCommentBubbleView *_bgCricleView;
    struct CGSize _contentSize;
}

+ (struct CGSize)calculateContentSize:(id)arg1 widthConstraint:(double)arg2;
+ (double)textViewMarginTop;
- (void).cxx_destruct;
@property(retain, nonatomic) LVCommentBubbleView *bgCricleView; // @synthesize bgCricleView=_bgCricleView;
@property(retain, nonatomic) MMCTTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void)hideBubbleBackgroud;
- (void)updateBubbleSize;
- (void)hideBgCircleView;
- (void)showBgCircleView;
- (void)showBubbleBackgroud;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andBubbleBackgroud:(BOOL)arg2 andBubbleSize:(struct CGSize)arg3;

@end

