//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "WAResourceCacheServiceExt-Protocol.h"

@class NSImageView, NSString, NSTextField, WAContact;

@interface WeAppTableCellView : NSTableCellView <WAResourceCacheServiceExt>
{
    NSImageView *_iconImageView;
    NSTextField *_titleLabel;
    WAContact *_oContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContact *oContact; // @synthesize oContact=_oContact;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)onDownloadImageFinished:(id)arg1 key:(id)arg2;
- (void)reloadData:(id)arg1;
- (void)prepareForReuse;
- (void)initViews;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

