//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MMDivider, MMTextField;

@interface MMWebSearchSuggestTableCellView : NSTableCellView
{
    BOOL _selected;
    MMTextField *_keywordLabel;
    MMDivider *_divider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MMTextField *keywordLabel; // @synthesize keywordLabel=_keywordLabel;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)populateWithDataItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

