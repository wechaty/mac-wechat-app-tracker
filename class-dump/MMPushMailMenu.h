//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPushMailExt-Protocol.h"

@class MMFlatButton, NSBox;

@interface MMPushMailMenu : NSObject <IPushMailExt>
{
    MMFlatButton *_writeMailButton;
    MMFlatButton *_mailboxButton;
    NSBox *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSBox *line; // @synthesize line=_line;
@property(retain, nonatomic) MMFlatButton *mailboxButton; // @synthesize mailboxButton=_mailboxButton;
@property(retain, nonatomic) MMFlatButton *writeMailButton; // @synthesize writeMailButton=_writeMailButton;
- (void)OnGetPushMailUnreadCount:(long long)arg1;
- (void)onMailboxButtonClicked:(id)arg1;
- (void)onWriteMailButtonClicked:(id)arg1;
- (id)mailBoxTitleWithUnreadCount:(long long)arg1;
- (void)setupPushMailMenuListWithContainerView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

