//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableHeaderCell.h>

@interface MMContactsHeaderCell : NSTableHeaderCell
{
    long long _mode;
    long long _tabType;
}

@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)drawSortIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2 ascending:(BOOL)arg3 priority:(long long)arg4;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (id)textColor;
- (id)font;

@end

