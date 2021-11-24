//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseEmoticonMgrLogic.h"

@protocol MMEmotionCustomMgrLogicDelegate;

@interface MMCustomEmoticonMgrLogic : MMBaseEmoticonMgrLogic
{
    BOOL _isGetting;
    unsigned int _lastIndex;
    id <MMEmotionCustomMgrLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) BOOL isGetting; // @synthesize isGetting=_isGetting;
@property(nonatomic) __weak id <MMEmotionCustomMgrLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)removeEmoticonLocalCahceWithMD5:(id)arg1;
- (BOOL)deleteEmoticonWithMD5:(id)arg1;
- (BOOL)isEmoticonMD5InDataStorageList:(id)arg1;
- (void)onEmoticonDownloadFinish:(id)arg1;
- (void)onGetEmoticonMD5ListFinished;
- (void)startGetCustomEmojiList;
- (void)loadCustomEmoticonDataFromFile;
- (void)saveCustomEmoticonDataListToFile;
- (BOOL)isEmoticonMD5InCustomList:(id)arg1;
- (BOOL)addCustomEmoticonWithMD5:(id)arg1 type:(int)arg2;
- (void)refreshCustomEmoticons;
- (BOOL)isEmoticonMD5InCustom:(id)arg1;

@end

