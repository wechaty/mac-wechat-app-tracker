//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMGetA8KeyLogicDelegate-Protocol.h"

@class MMGetA8KeyLogic, NSString;

@interface MMURLHandler : NSObject <MMGetA8KeyLogicDelegate, AccountServiceExt, MMCGIDelegate>
{
    MMGetA8KeyLogic *getA8KeyLogic;
    BOOL _m_bPresentViewController;
    BOOL _m_isDisableShare;
    BOOL _m_disalbeStartLoadGetA8Key;
    BOOL _m_isShouldShowGoBackBtn;
    int _m_urlSource;
    unsigned int _m_urlPermittedSet;
    NSString *_m_url;
    CDUnknownBlockType _didOpenUrlBlock;
}

+ (id)getHostTextWithUrl:(id)arg1;
+ (BOOL)hasMPHost:(id)arg1;
+ (id)getUrlWithoutFragment:(id)arg1;
+ (BOOL)isA8KeyCGI:(int)arg1;
+ (int)getA8keyCgiCmdIDByUrl:(id)arg1;
+ (int)getA8keyCgiCmdIDByUrl:(id)arg1 reason:(unsigned int)arg2;
+ (BOOL)containsPhoneLinkString:(id)arg1;
+ (BOOL)containEmailString:(id)arg1;
+ (BOOL)containsMoaString:(id)arg1;
+ (BOOL)containsWeixinString:(id)arg1;
+ (BOOL)containsLocalPathString:(id)arg1;
+ (BOOL)containsString:(id)arg1 withRegex:(id)arg2;
+ (BOOL)containsHTTPString:(id)arg1;
+ (BOOL)isSafeUrlStr:(id)arg1;
+ (id)defaultHandler;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didOpenUrlBlock; // @synthesize didOpenUrlBlock=_didOpenUrlBlock;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url=_m_url;
@property(nonatomic) BOOL m_isShouldShowGoBackBtn; // @synthesize m_isShouldShowGoBackBtn=_m_isShouldShowGoBackBtn;
@property(nonatomic) unsigned int m_urlPermittedSet; // @synthesize m_urlPermittedSet=_m_urlPermittedSet;
@property(nonatomic) int m_urlSource; // @synthesize m_urlSource=_m_urlSource;
@property(nonatomic) BOOL m_disalbeStartLoadGetA8Key; // @synthesize m_disalbeStartLoadGetA8Key=_m_disalbeStartLoadGetA8Key;
@property(nonatomic) BOOL m_isDisableShare; // @synthesize m_isDisableShare=_m_isDisableShare;
@property(nonatomic) BOOL m_bPresentViewController; // @synthesize m_bPresentViewController=_m_bPresentViewController;
- (void)handleDebugUrl:(id)arg1 withFromUserName:(id)arg2;
- (id)debugUrlActionFromUrl:(id)arg1;
- (id)debugAvailableActions;
- (BOOL)isDebugUrl:(id)arg1 withFromUserName:(id)arg2;
- (BOOL)isAdminUserName:(id)arg1;
- (void)getA8KeyDidFaildWithReason:(int)arg1;
- (void)getA8keyDidFinishedWithReason:(int)arg1 fullURL:(id)arg2 shareURL:(id)arg3;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (id)getSharpTagKeyWord:(id)arg1;
- (void)handleURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)openURL:(id)arg1 withA8KeyConfig:(id)arg2;
- (void)getA8keyAndOpenURL:(id)arg1 withA8KeyConfig:(id)arg2;
- (BOOL)_defaultOpenURL:(id)arg1;
- (BOOL)openURLWithDefault:(id)arg1;
- (BOOL)preHandleUrlStr:(id)arg1 withMessage:(id)arg2;
- (BOOL)preHandleUrlStr:(id)arg1;
- (id)filterUrlStr:(id)arg1;
- (void)handleSharpJump:(id)arg1;
- (void)handleChatroomAnnouncement:(id)arg1;
- (void)handleReceiveBrandMsgURL:(id)arg1 messageData:(id)arg2;
- (void)handleReTransferFileURL:(id)arg1 messageData:(id)arg2;
- (void)handleContactVerifyURL:(id)arg1 messageData:(id)arg2;
- (void)handleExposeUrl:(id)arg1 messageData:(id)arg2;
- (void)handleDlFeedbackUrl:(id)arg1 messageData:(id)arg2;
- (void)handleNextFeedbackUrl:(id)arg1;
- (void)handleDisableOpenUrl:(id)arg1;
- (void)handleLimitModeUrl:(id)arg1 A8KeyConfig:(id)arg2;
- (long long)getMsgIdByReTransferUrl:(id)arg1;
- (id)getContactUserNameByReTransferURL:(id)arg1;
- (id)getContactByReTransferURL:(id)arg1;
- (id)getContactUserNameByVerifyURL:(id)arg1;
- (id)getContactByVerifyURL:(id)arg1;
- (BOOL)isWXWorkSchemaUrl:(id)arg1;
- (BOOL)isLearnMoreURL:(id)arg1;
- (BOOL)isCancelDownloadURL:(id)arg1;
- (BOOL)isRecallURL:(id)arg1;
- (BOOL)isTencentNewsURL:(id)arg1;
- (BOOL)isWXPayURL:(id)arg1;
- (BOOL)isReeditURL:(id)arg1;
- (BOOL)isShowAllURL:(id)arg1;
- (BOOL)isContactProfileURL:(id)arg1;
- (BOOL)isMacWeixinURL:(id)arg1;
- (BOOL)isSharpTagURL:(id)arg1;
- (BOOL)isChatroomAnnouncementURL:(id)arg1;
- (id)mpArticleIdentityWithUrl:(id)arg1;
- (BOOL)isMPArticleByURL:(id)arg1;
- (BOOL)isQQMailUrl:(id)arg1;
- (BOOL)isGameCentreURL:(id)arg1;
- (BOOL)isGroupChatInviteUrl:(id)arg1;
- (BOOL)isBrandHistoryRecordURL:(id)arg1;
- (BOOL)isDlFeedbackUrl:(id)arg1;
- (BOOL)isNextFeedbackUrl:(id)arg1;
- (BOOL)isExposeEntranceURL:(id)arg1;
- (BOOL)isReceiveBrandMsgURL:(id)arg1;
- (BOOL)isReTransferFileURL:(id)arg1;
- (BOOL)isContactVerifyURL:(id)arg1;
- (BOOL)isWeChatURL:(id)arg1;
- (void)onUserLogout;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

