//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WebViewJSApiVerifyMgrDelegate;

@interface WebViewJSApiVerifyMgr : NSObject <MMCGIDelegate>
{
    int _preverifyScene;
    id <WebViewJSApiVerifyMgrDelegate> _delegate;
    NSMutableDictionary *_dictUrl2JSApiPermissions;
    NSMutableDictionary *_dicUrlPermission;
    NSMutableDictionary *_dictHidedMenuitemByUrl;
    NSMutableDictionary *_dicPageStateChangeUrl;
    NSMutableDictionary *_dictUrl2AppId;
    NSMutableDictionary *_dictUrl2BrandIconUrl;
    NSMutableDictionary *_dictApiName2Index;
    NSMutableDictionary *_dictOfflineVerify;
    NSMutableDictionary *_dictUrl2VerifyInfoList;
    NSMutableDictionary *_dictUrl2DomainPathList;
    NSMutableDictionary *_dictRestrictJSApiList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictRestrictJSApiList; // @synthesize dictRestrictJSApiList=_dictRestrictJSApiList;
@property(retain, nonatomic) NSMutableDictionary *dictUrl2DomainPathList; // @synthesize dictUrl2DomainPathList=_dictUrl2DomainPathList;
@property(retain, nonatomic) NSMutableDictionary *dictUrl2VerifyInfoList; // @synthesize dictUrl2VerifyInfoList=_dictUrl2VerifyInfoList;
@property(retain, nonatomic) NSMutableDictionary *dictOfflineVerify; // @synthesize dictOfflineVerify=_dictOfflineVerify;
@property(retain, nonatomic) NSMutableDictionary *dictApiName2Index; // @synthesize dictApiName2Index=_dictApiName2Index;
@property(retain, nonatomic) NSMutableDictionary *dictUrl2BrandIconUrl; // @synthesize dictUrl2BrandIconUrl=_dictUrl2BrandIconUrl;
@property(retain, nonatomic) NSMutableDictionary *dictUrl2AppId; // @synthesize dictUrl2AppId=_dictUrl2AppId;
@property(retain, nonatomic) NSMutableDictionary *dicPageStateChangeUrl; // @synthesize dicPageStateChangeUrl=_dicPageStateChangeUrl;
@property(retain, nonatomic) NSMutableDictionary *dictHidedMenuitemByUrl; // @synthesize dictHidedMenuitemByUrl=_dictHidedMenuitemByUrl;
@property(retain, nonatomic) NSMutableDictionary *dicUrlPermission; // @synthesize dicUrlPermission=_dicUrlPermission;
@property(retain, nonatomic) NSMutableDictionary *dictUrl2JSApiPermissions; // @synthesize dictUrl2JSApiPermissions=_dictUrl2JSApiPermissions;
@property(nonatomic) int preverifyScene; // @synthesize preverifyScene=_preverifyScene;
@property(nonatomic) __weak id <WebViewJSApiVerifyMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideMenuItemsBatch:(id)arg1 withUrl:(id)arg2;
- (void)showMenuItemsBatch:(id)arg1 withUrl:(id)arg2;
- (BOOL)isMenuItemHidenByPage:(id)arg1 withUrl:(id)arg2;
- (void)hideAllNonBaseMenuItemWithUrl:(id)arg1;
- (void)showAllNonBaseMenuItemWithUrl:(id)arg1;
- (void)handlePreVerifyJSAPI:(BOOL)arg1 cgiWrap:(id)arg2;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)startupPreVerifyJSAPI:(id)arg1 url:(id)arg2 failHandleBlock:(CDUnknownBlockType)arg3;
- (id)getAppHeadImgUrlForUrl:(id)arg1;
- (id)getAppIdForUrl:(id)arg1;
- (id)getCustomDomainsForUrl:(id)arg1;
- (void)setPageStateChangeUrl:(id)arg1 baseUrl:(id)arg2;
- (id)getAuthorizedFeedWebMonitorEvents;
- (id)getUrlWithoutFragment:(id)arg1;
- (id)__mutableArrayForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (id)getAuthorizedWebMonitorEvents:(id)arg1 withCurEvent:(id)arg2;
- (BOOL)compartHashUrl:(id)arg1 other:(id)arg2;
- (void)handleJSAPICallBack:(id)arg1 err_msg:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)failHandleBlockKey:(id)arg1;
- (BOOL)canFixWkWebviewPermissionWithUrl:(id)arg1 permissionRet:(id *)arg2;
- (id)getPermissionForUrl:(id)arg1;
- (void)setPermission:(id)arg1 ForUrl:(id)arg2;
- (BOOL)hasPermissionForUrl:(id)arg1;
- (id)getDefaultPermisson;
- (unsigned int)getGeneralBitSetForUrl:(id)arg1;
- (void)removeUrlPermissionForUrl:(id)arg1;
- (void)saveUrlPermission:(id)arg1 url:(id)arg2;
- (id)mutableArrayForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (void)removeObjForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (void)setObject:(id)arg1 forUrl:(id)arg2 inNoFragmentDictionary:(id)arg3;
- (long long)getPermissionIndex:(id)arg1;
- (long long)getPermissionIndexFromApiName:(id)arg1;
- (unsigned char)getJSApiPermission:(id)arg1 url:(id)arg2;
- (void)mergeJSAPIPermission:(id)arg1 withVerifyList:(id)arg2;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2 WithCheckedPreVerifyList:(BOOL)arg3;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

