//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface MMFileListSectionHeader : NSTableCellView
{
    NSTextField *_sectionTextField;
    double _margin;
}

- (void).cxx_destruct;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSTextField *sectionTextField; // @synthesize sectionTextField=_sectionTextField;
- (id)geSectionName;
- (void)updateUI:(id)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 withMargin:(double)arg2;

@end
