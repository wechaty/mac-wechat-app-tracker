//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface MMEmoticonData : NSObject <NSCoding, NSCopying>
{
    int _type;
    int _customEmojiType;
    NSString *_representationalString;
    NSString *_caption;
    NSString *_md5;
    NSString *_productId;
    NSString *_tpUrl;
    NSString *_authKey;
    NSString *_aesKey;
    NSString *_cdnUrl;
    NSString *_encryptUrl;
    NSString *_externUrl;
    NSString *_externMd5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externMd5; // @synthesize externMd5=_externMd5;
@property(retain, nonatomic) NSString *externUrl; // @synthesize externUrl=_externUrl;
@property(copy, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(copy, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(copy, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) NSString *tpUrl; // @synthesize tpUrl=_tpUrl;
@property(nonatomic) int customEmojiType; // @synthesize customEmojiType=_customEmojiType;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSString *representationalString; // @synthesize representationalString=_representationalString;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)copyDownloadInfoFromEmojiInfo:(id)arg1;
- (id)simpleDescription;
- (BOOL)hasTpDownloadInfo;
- (BOOL)canCdnDownload;
- (BOOL)hasEncryptDownloadInfo;
- (BOOL)hasWxAMDownloadInfo;
- (BOOL)isDownloaded;
- (id)filePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

