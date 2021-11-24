//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMView.h"

@class MMImageView, MMTextView, NSAttributedString, NSImageView, WCContactData;

@interface MMChatMgrHeaderView : MMView
{
    BOOL _isGroupChat;
    BOOL _isBrandChat;
    WCContactData *_contact;
    MMImageView *_avatarView;
    MMTextView *_chatNameLabel;
    NSImageView *_openIMIcon;
    NSAttributedString *_chatName;
    unsigned long long _chatMemberCount;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isBrandChat; // @synthesize isBrandChat=_isBrandChat;
@property(nonatomic) BOOL isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(nonatomic) unsigned long long chatMemberCount; // @synthesize chatMemberCount=_chatMemberCount;
@property(copy, nonatomic) NSAttributedString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSImageView *openIMIcon; // @synthesize openIMIcon=_openIMIcon;
@property(retain, nonatomic) MMTextView *chatNameLabel; // @synthesize chatNameLabel=_chatNameLabel;
@property(retain, nonatomic) MMImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void)adjustLayout;
- (void)handleAppFontSize;
- (id)_genChatNameAttrString:(id)arg1;
- (void)awakeFromNib;

@end

