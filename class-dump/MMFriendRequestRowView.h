//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMContactListBaseRowView.h"

#import "NSMenuDelegate-Protocol.h"

@class MMAvatarImageView, MMFriendRequestData, MMSidebarLabelTextField, MMTextField, NSBox, NSString;
@protocol MMFriendRequestRowViewDelegate;

@interface MMFriendRequestRowView : MMContactListBaseRowView <NSMenuDelegate>
{
    id <MMFriendRequestRowViewDelegate> _delegate;
    MMFriendRequestData *_friendRequest;
    MMAvatarImageView *_avatarView;
    MMSidebarLabelTextField *_nameField;
    MMSidebarLabelTextField *_addedStatus;
    MMTextField *_reqeustContentLabel;
    NSBox *_seperator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSBox *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) MMTextField *reqeustContentLabel; // @synthesize reqeustContentLabel=_reqeustContentLabel;
@property(retain, nonatomic) MMSidebarLabelTextField *addedStatus; // @synthesize addedStatus=_addedStatus;
@property(retain, nonatomic) MMSidebarLabelTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) MMFriendRequestData *friendRequest; // @synthesize friendRequest=_friendRequest;
@property(nonatomic) __weak id <MMFriendRequestRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)layoutSubViews;
- (void)displayRow:(id)arg1 isFirstOne:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

