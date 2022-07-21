//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "IMessageExt-Protocol.h"
#import "MMRevokeMsgServiceExt-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class MMTextView, NSLayoutConstraint, NSString;

@interface MMSystemMessageCellView : MMMessageCellView <MMViewerWindowDelegate, NSTextViewDelegate, MMRevokeMsgServiceExt, IMessageExt>
{
    MMTextView *_msgTextView;
    NSLayoutConstraint *_viewHeight;
}

+ (id)getReTransferedTipsForContent:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak NSLayoutConstraint *viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) MMTextView *msgTextView; // @synthesize msgTextView=_msgTextView;
- (void)OnHistoryRecordRevoked:(id)arg1 historyId:(unsigned long long)arg2;
- (void)messageCellViewReloadLayout:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)copyActionInTextView:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)allowMultipleSelect;
- (void)setChoosable:(BOOL)arg1;
- (void)updateLabelContent;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

