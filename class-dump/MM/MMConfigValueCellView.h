//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "NSTextFieldDelegate-Protocol.h"

@class NSString, NSTextField;

@interface MMConfigValueCellView : NSTableCellView <NSTextFieldDelegate>
{
    NSTextField *_titleField;
    CDUnknownBlockType _didRemarkValueChangedBlock;
    NSString *_valueStr;
    long long _row;
}

- (void).cxx_destruct;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(copy, nonatomic) CDUnknownBlockType didRemarkValueChangedBlock; // @synthesize didRemarkValueChangedBlock=_didRemarkValueChangedBlock;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void)reloadData:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)initSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

