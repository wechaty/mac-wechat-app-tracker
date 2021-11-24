//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PathUtility : NSObject
{
}

+ (BOOL)isInDiskImageFolder:(id)arg1;
+ (BOOL)setDoNotBackupForPath:(id)arg1;
+ (id)getSysDocumentPath;
+ (id)getSysCachePath;
+ (id)getSysLibraryPath;
+ (id)GetAppDocumentsPath;
+ (id)GetSysDownloadsPath;
+ (id)HashUserNameForPath:(id)arg1;
+ (id)GetRootPathOfTrash;
+ (id)GetRandomPathOfTrash;
+ (id)GetTmpPath;
+ (id)GetDocFixRootPath;
+ (id)GetLibraryCacheFixRootPath;
+ (id)GetDocPath;
+ (id)GetLogFolder;
+ (id)GetLibraryCachePath;
+ (id)GetBrandSessionHolderCachePath;
+ (id)GetSessionFilePathWithMessage:(id)arg1;
+ (id)GetAllMsgFilePathWithMessage:(id)arg1;
+ (void)RemoveChatSyncFileWithMessage:(id)arg1;
+ (id)GetChatSyncUnzipPathWithMessage:(id)arg1;
+ (id)GetChatSyncFileFullPathWithMessage:(id)arg1;
+ (id)GetChatSyncFileBasePathWithMessage:(id)arg1;
+ (id)GetChatSyncDBPath;
+ (id)GetChatSyncBasePath;
+ (id)GetPathOfLiveSetting;
+ (id)GetLiveDBPath;
+ (id)localUsrLibrary;
+ (id)localUsrDirPath;
+ (id)GetSessionDBRecoverPath;
+ (id)GetSessionDBExtPath;
+ (id)GetSessionDBPath;
+ (id)GetSessionStorageDir;
+ (id)GetEmojiPanelConfigDir;
+ (id)GetNewEmojiConfigDir;
+ (id)emoticonPackageThumbPath:(id)arg1;
+ (id)emoticonThumbPath:(id)arg1;
+ (id)emoticonPath:(id)arg1;
+ (id)downloadPathForEmoticonPackage:(id)arg1;
+ (id)emoticonsDBPath;
+ (id)emoticonsBasePath;
+ (id)GetAllowSaveEmoticonDataPath;
+ (id)GetCustomEmoticonDataListPath;
+ (id)GetFavEmoticonDataListPath;
+ (id)GetPathOfEmoticonDownloadQueueData;
+ (id)packageThumbsBasePath;
+ (id)BasePathOfEmoticonFile;
+ (id)BasePathOfDownloadTemp;
+ (id)GetPathOfTempEmoticon:(id)arg1;
+ (void)CreateEmoticonBasePaths;
+ (id)getWCContactDBRecoverPathNew;
+ (id)getWCContactDBPathNew;
+ (id)getWCContactDBPath;
+ (id)getWCContactRootPath;
+ (id)getContactAutoUpdateDataOldPath;
+ (id)getContactAutoCheckDataPath;
+ (id)getContactAutoUpdateDataPath;
+ (id)GetCdnRootPath;
+ (id)GetAcountBetaDBPath;
+ (id)GetAccountSettingsHistoryPath;
+ (id)GetAccountKeyValueDBPath;
+ (id)GetAccountSettingsHistoryPathOfUser:(id)arg1;
+ (id)GetAccountKeyValueDBPathOfUser:(id)arg1;
+ (id)GetAccountFriendRequestDataPath;
+ (id)GetAccountSnsBackgroundImagePath;
+ (id)GetAccountUserInfoPath;
+ (id)GetAccountSettingDbPathOfUser:(id)arg1;
+ (id)GetAccountSettingDbPath;
+ (id)GetAccountSettingExtPath;
+ (id)GetAccountSettingPath;
+ (id)GetAccountStoragePathOfUser:(id)arg1;
+ (id)GetAccountStoragePath;
+ (id)GetCurUsrMd5;
+ (id)GetCurUserCachePath;
+ (id)GetCurUserDocumentPath;
+ (id)GetUserCachePathWithUserName:(id)arg1;
+ (id)GetUserDocumentPathWithUserName:(id)arg1;
+ (id)getAbtestCachePath;
+ (id)getAbtestRootPath;
+ (id)getKvConfigDBPath;
+ (id)getKvConfigRootPath;
+ (id)getNewSyncTimePath;
+ (id)getSyncTimePath;
+ (id)GetOpenIMOplogDBPath;
+ (id)GetOpLogDBPath;
+ (id)GetSyncBufferPath;
+ (id)getSyncRootDir;
+ (id)getTmpSysMsgHistoryPathWithUserName:(id)arg1 historyId:(unsigned long long)arg2;
+ (id)getSysMsgHistoryPathWithUserName:(id)arg1 historyId:(unsigned long long)arg2;
+ (id)getMsgFileDirWithUserName:(id)arg1;
+ (id)getMsgAppOpenDataDirWithUserName:(id)arg1;
+ (unsigned long long)_genFromSelfVideoUniqFlag:(id)arg1;
+ (id)getMsgVideoPathWithMessage:(id)arg1;
+ (id)getMsgVideoPathWithUserName:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgVideoDirWithUserName:(id)arg1;
+ (id)getMsgSilkAudioPath:(id)arg1;
+ (id)getMsgAMRAudioPath:(id)arg1;
+ (id)getUniqueMsgAudioPath:(id)arg1;
+ (id)getMsgAudioPath:(id)arg1;
+ (id)getMsgAudioDir:(id)arg1;
+ (id)getMsgTmpHDImgPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgTmpImgThumbPathWithMessage:(id)arg1;
+ (id)getMsgTmpImgPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgEditImgPathWithMessage:(id)arg1;
+ (id)getMsgHDImgPathWithMessage:(id)arg1;
+ (id)getMsgImgThumbPath:(id)arg1 imgURLString:(id)arg2;
+ (id)getMsgImgThumbPathWithMessage:(id)arg1;
+ (id)getMsgImgPreviewImageForLargeImage:(id)arg1;
+ (id)getMsgImgPreviewThumbPathWithMessage:(id)arg1;
+ (id)getMsgImgPathWithMessage:(id)arg1 isSend:(int)arg2;
+ (id)getMsgImgPathWithMessage:(id)arg1;
+ (id)getMsgImgDir:(id)arg1;
+ (id)getMsgTempDirOfUser:(id)arg1;
+ (id)getMsgTempDir;
+ (id)getRevokeMsgDBPath;
+ (id)getRevokeMsgDBDir;
+ (id)getAppMsgDBPath;
+ (id)getFTSFileMsgDBPath;
+ (id)getFTSFileMsgDBDir;
+ (id)getFTSMsgDBPath;
+ (id)getMsgDBRecoverPath:(id)arg1;
+ (id)getMsgDBPath:(id)arg1;
+ (id)getMessageRootDir;
+ (id)cachedStatusDataPath;
+ (id)cachedStatusDataFolder;
+ (id)GetFileStateSyncDBPath;
+ (id)GetAvatarPathBeforeAuthOK;
+ (id)GetAvatarPath;
+ (id)getGroupExtendDataPath:(id)arg1;
+ (id)getGroupDBRecoverPath;
+ (id)getGroupDBPath;
+ (id)getGroupDataDir;
+ (id)webPageItemImageHttpDownloadFileName:(id)arg1;
+ (id)webPageItemImageHttpDownloadPath:(id)arg1;
+ (id)favoritesDisplayOptimizedThumbnailsCachePath;
+ (id)favoritesDataPathWithFavItemData:(id)arg1;
+ (id)favoritesDataFolder;
+ (id)favoritesTpDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)favoritesTpDownloadedThumbnailFolder;
+ (id)favoritesCDNDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)favoritesCDNDownloadedThumbnailFolder;
+ (id)favoritesTempFolder;
+ (id)favoritesUICacheFolder;
+ (id)favoritesSettingPath;
+ (id)favoritesSyncBufferPath;
+ (id)favoritesDBRecoverPath;
+ (id)favoritesDBPath;
+ (id)favoritesRootDir;
+ (id)getSNSDBPath;

@end

