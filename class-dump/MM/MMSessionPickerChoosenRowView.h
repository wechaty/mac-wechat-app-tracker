//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class MMAvatarImageView, NSButton, NSImageView, NSString, NSTextField, NSView, SVGImageView, WCContactData;

@interface MMSessionPickerChoosenRowView : NSTableRowView
{
    BOOL _disabled;
    NSString *_tagName;
    WCContactData *_contact;
    unsigned long long _sessionPickerType;
    NSView *_containView;
    SVGImageView *_tagHeadView;
    MMAvatarImageView *_avatarView;
    NSTextField *_sessionNameField;
    NSButton *_removeButton;
    NSImageView *_openIMIcon;
    CDUnknownBlockType _didClickRemoveButtonBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didClickRemoveButtonBlock; // @synthesize didClickRemoveButtonBlock=_didClickRemoveButtonBlock;
@property(retain, nonatomic) NSImageView *openIMIcon; // @synthesize openIMIcon=_openIMIcon;
@property(retain, nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) NSTextField *sessionNameField; // @synthesize sessionNameField=_sessionNameField;
@property(retain, nonatomic) MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) SVGImageView *tagHeadView; // @synthesize tagHeadView=_tagHeadView;
@property(retain, nonatomic) NSView *containView; // @synthesize containView=_containView;
@property(nonatomic) unsigned long long sessionPickerType; // @synthesize sessionPickerType=_sessionPickerType;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void)setupWithSessionPickerRow:(id)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (void)setupView;
- (void)openChatWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

