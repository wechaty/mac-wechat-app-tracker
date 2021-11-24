//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class MMAvatarImageView, NSTextField, WCContactData;

@interface MMChatDetailMemberRowView : NSTableRowView
{
    BOOL _highlighted;
    WCContactData *_contact;
    MMAvatarImageView *_avatarImageView;
    NSTextField *_nameField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) MMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (id)currentBgColor;
- (id)groupChatDisplayName:(id)arg1 inGroupChat:(id)arg2;
- (void)setupWithContact:(id)arg1 inGroupChat:(id)arg2;
- (void)prepareForReuse;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

