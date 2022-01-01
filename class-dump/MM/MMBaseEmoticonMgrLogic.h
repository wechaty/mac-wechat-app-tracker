//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCache, NSMutableArray, NSString, NSURLSession;

@interface MMBaseEmoticonMgrLogic : NSObject
{
    int _downloadType;
    NSMutableArray *_dataStorageList;
    NSMutableArray *_dataList;
    NSURLSession *_downloadMgr;
    NSMutableArray *_emojiList;
    MMCache *_imageCache;
    MMCache *_dataCache;
    NSString *_dataPath;
    NSMutableArray *_downloadQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) MMCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) MMCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSMutableArray *emojiList; // @synthesize emojiList=_emojiList;
@property(retain, nonatomic) NSURLSession *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSMutableArray *dataStorageList; // @synthesize dataStorageList=_dataStorageList;
- (id)getEmotionThumbWithPackageID:(id)arg1;
- (id)getEmotionThumbWithMD5:(id)arg1;
- (BOOL)updateEmotionThumbCacheWithMD5:(id)arg1;
- (id)getEmotionImgWithMD5:(id)arg1;
- (id)getEmotionDataWithMD5:(id)arg1;
- (id)getEmoticons;
- (void)setupDownloadMgr;
- (void)proxySettingsDidChange:(id)arg1;
- (void)emoticonDidFailedDownload;
- (void)onEmoticonDownloadFinish:(id)arg1;
- (void)emoticonDidFinishedDownloadWithEmojiType:(unsigned int)arg1;
- (void)startDownloadNextEmotionTask;
- (void)startDownloadEmoticonFromMD5List;
- (void)downloadEmotionWithEmotionData:(id)arg1;
- (void)loadEmoticonDataFromFile;
- (void)saveEmoticonDataListToFile;
- (void)dealloc;
- (id)initWithDataPath:(id)arg1;

@end

