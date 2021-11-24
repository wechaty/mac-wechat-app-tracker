//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MMImageView, MMTextField;

@interface MMPopTableCellView : NSTableCellView
{
    MMImageView *_icon;
    MMTextField *_title;
    MMTextField *_subtitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTextField *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) MMTextField *title; // @synthesize title=_title;
@property(retain, nonatomic) MMImageView *icon; // @synthesize icon=_icon;
- (void)setIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

