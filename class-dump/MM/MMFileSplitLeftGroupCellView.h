//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface MMFileSplitLeftGroupCellView : NSTableCellView
{
    BOOL _isSelected;
    int _type;
    NSTextField *_groupTextField;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSTextField *groupTextField; // @synthesize groupTextField=_groupTextField;
- (void)updateUI:(int)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

