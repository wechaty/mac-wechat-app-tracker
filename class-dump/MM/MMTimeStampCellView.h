//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class NSTextField;

@interface MMTimeStampCellView : MMMessageCellView
{
    NSTextField *_timeStampTextField;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *timeStampTextField; // @synthesize timeStampTextField=_timeStampTextField;
- (BOOL)allowMultipleSelect;
- (void)setChoosable:(BOOL)arg1;
- (void)mouseDragged:(id)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)handleNewTextSize;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

