//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSString, WCContactData;

@interface MMContactsColumnBaseCellView : NSTableCellView
{
    BOOL _bSearchMode;
    BOOL _bSelected;
    NSString *_keyWord;
    WCContactData *_oContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCContactData *oContact; // @synthesize oContact=_oContact;
@property(nonatomic) BOOL bSelected; // @synthesize bSelected=_bSelected;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(nonatomic) BOOL bSearchMode; // @synthesize bSearchMode=_bSearchMode;
- (void)updateUIWithSearchResult:(id)arg1;
- (void)updateUIWithContact:(id)arg1;

@end

