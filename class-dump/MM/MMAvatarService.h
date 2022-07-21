//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "GetHeadImageDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "MMCDNDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "SyncExt-Protocol.h"

@class GetHDHeadImage, GetHeadImage, MMCache, NSLock, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMAvatarService : MMService <IContactMgrExt, GetHeadImageDelegate, IGroupMgrExt, SyncExt, MMCDNDownloadMgrExt, AccountServiceExt, MMService>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSendingDownloadCGI;
    MMCache *_avatarCache;
    NSMutableDictionary *_downloadingUrlBlocks;
    GetHeadImage *_cgiGetter;
    NSMutableDictionary *_cgiTasks;
    NSLock *_m_lock;
    NSLock *_m_blocksLock;
    GetHDHeadImage *_cgiHDGetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetHDHeadImage *cgiHDGetter; // @synthesize cgiHDGetter=_cgiHDGetter;
@property(retain, nonatomic) NSLock *m_blocksLock; // @synthesize m_blocksLock=_m_blocksLock;
@property(retain, nonatomic) NSLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) NSMutableDictionary *cgiTasks; // @synthesize cgiTasks=_cgiTasks;
@property(retain, nonatomic) GetHeadImage *cgiGetter; // @synthesize cgiGetter=_cgiGetter;
@property(nonatomic) BOOL isSendingDownloadCGI; // @synthesize isSendingDownloadCGI=_isSendingDownloadCGI;
@property(retain, nonatomic) NSMutableDictionary *downloadingUrlBlocks; // @synthesize downloadingUrlBlocks=_downloadingUrlBlocks;
@property(retain, nonatomic) MMCache *avatarCache; // @synthesize avatarCache=_avatarCache;
- (void)manualCleanAvatarCache;
- (void)autoCleanAvatarCache;
- (void)beforeUserLogout;
- (id)resizeToSquareAvatarImage:(id)arg1;
- (void)makeAvatarWithMemberList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateGroupChatAvatarWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)signalWithContact:(id)arg1;
- (void)updateNativeAvatarImageWithContact:(id)arg1 image:(id)arg2;
- (void)updateAvatarOnModifyContacts:(id)arg1;
- (void)OnModifyGroupMemberContact:(id)arg1;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyStrangerContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onDownloadImage:(id)arg1;
- (void)onDownloadImageFail:(id)arg1;
- (BOOL)isNeedGetImage:(id)arg1;
- (void)cdnDownloadMgrFinishHTTPRequest:(id)arg1;
- (void)cdnDownloadMgrFailedHTTPRequest:(id)arg1;
- (void)downloadAvatarWithUrl:(id)arg1 userName:(id)arg2 isHD:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)checkIsDwonloadingAndAddCallback:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)callBackForKey:(id)arg1 withImage:(id)arg2 userName:(id)arg3 url:(id)arg4 err:(id)arg5;
- (void)__removeAvatarFromStorageWithUrl:(id)arg1 userName:(id)arg2 isHD:(BOOL)arg3;
- (void)_removeAvatarHDFromStorageWithUrl:(id)arg1 userName:(id)arg2;
- (void)_removeAvatarFromStorageWithUrl:(id)arg1 userName:(id)arg2;
- (void)_removeImageFromDiskWithMd5Key:(id)arg1 userName:(id)arg2;
- (void)_removeImageFromCacheWithMd5Key:(id)arg1;
- (void)_storeImageToCache:(id)arg1 url:(id)arg2 userName:(id)arg3 isHD:(BOOL)arg4;
- (id)_getImageFromCacheWithMD5Key:(id)arg1;
- (void)_storeImage:(id)arg1 url:(id)arg2 userName:(id)arg3 isHD:(BOOL)arg4;
- (void)getAvatarWithTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)genAvatarKeyWithUrl:(id)arg1 userName:(id)arg2 isHD:(BOOL)arg3;
- (id)avatarDownloadTmpPathWithFileName:(id)arg1 userName:(id)arg2;
- (id)avatarSavePathWithFileName:(id)arg1 userName:(id)arg2;
- (id)avatarBeforeAuthOKDownloadTmpPathWithFileName:(id)arg1;
- (id)avatarBeforeAuthOKSavePathWithFileName:(id)arg1;
- (void)_fetchAvatarFromRemote:(id)arg1 withUserName:(id)arg2 isHD:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_fetchAvatarFromLocal:(id)arg1 withUserName:(id)arg2 isHD:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchAvatarWithUrl:(id)arg1 withUserName:(id)arg2 isHD:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAvatarImageAfterAuthOKWithUrl:(id)arg1 userName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvatarImageBeforeAuthOKWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvatarHDImageWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvatarImageWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSelfAvatarImageWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasSpecialAvatarWithUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceSendRequestUpdateAvatarImageRemoteOutOfLimitTimeWithContact:(id)arg1;
- (void)forceGetAvatarImageRemoteWithContact:(id)arg1 isHD:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvatarImageWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getAvatarImageNativeWithContact:(id)arg1 isHD:(BOOL)arg2;
- (void)getSelfAvatarHDImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)brandSessionHolderAvatar;
- (id)defaultHDAvatar;
- (id)defaultAvatarImage;
- (id)qqmailAvatarImage;
- (void)clearCache;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onInitCancel;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

