//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTextMessageCellView.h"

@interface MMUnsupportedCellView : MMTextMessageCellView
{
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)makeUnsupportedTableItemWithItem:(id)arg1;
- (BOOL)allowRefer;
- (BOOL)allowChoose;
- (BOOL)allowStickyAndUnStickly;
- (BOOL)allowMultipleSelect;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (id)getOperationMenuItem;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContent;
- (void)setChoosable:(BOOL)arg1;
- (void)contextMenuShowSourceDebugTool;
- (void)populateWithMessage:(id)arg1;

@end

