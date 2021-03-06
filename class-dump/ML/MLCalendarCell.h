//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class MLCalendarView, NSDate;

@interface MLCalendarCell : NSButton
{
    BOOL _selected;
    BOOL _selectable;
    MLCalendarView *_owner;
    NSDate *_representedDate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSDate *representedDate; // @synthesize representedDate=_representedDate;
@property __weak MLCalendarView *owner; // @synthesize owner=_owner;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

