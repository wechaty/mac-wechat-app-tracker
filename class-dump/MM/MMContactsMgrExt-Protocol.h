//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, WCContactData;

@protocol MMContactsMgrExt

@optional
- (void)onContactsDeleteFromServer;
- (void)onContactsTagMgrFinishEdit;
- (void)onRevicePrivcayMemberCountChanged;
- (void)onContactsHelperWindowClose;
- (void)onContactsPreviewSelectedContact:(WCContactData *)arg1 bSelected:(BOOL)arg2;
- (void)onContactsPrivacyFinishSetting:(NSArray *)arg1 scene:(int)arg2 withContact:(WCContactData *)arg3;
- (void)onClearAllSelectedContacts;
- (void)onReviceModifyContact:(WCContactData *)arg1;
@end

