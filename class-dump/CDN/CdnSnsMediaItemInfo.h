//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMSnsMediaItem, NSString;

@interface CdnSnsMediaItemInfo : NSObject
{
    BOOL _finishFlag;
    int _totalSize;
    int _index;
    NSString *_fileKey;
    NSString *_nsUrl;
    unsigned long long _decryptKey;
    MMSnsMediaItem *_mediaItem;
    NSString *_imageCachePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageCachePath; // @synthesize imageCachePath=_imageCachePath;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) int totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) BOOL finishFlag; // @synthesize finishFlag=_finishFlag;
@property(retain, nonatomic) MMSnsMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) unsigned long long decryptKey; // @synthesize decryptKey=_decryptKey;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;

@end

