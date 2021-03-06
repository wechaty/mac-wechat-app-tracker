//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface CheckMd5Request : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFileid:1;
    unsigned int hasMd5:1;
    unsigned int hasNewmd5:1;
    unsigned int hasCrc32:1;
    unsigned int crc32;
    BaseRequest *baseRequest;
    NSString *fileid;
    NSString *md5;
    NSString *newmd5;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetCrc32:) unsigned int crc32; // @synthesize crc32;
@property(readonly, nonatomic) BOOL hasCrc32; // @synthesize hasCrc32;
@property(retain, nonatomic, setter=SetNewmd5:) NSString *newmd5; // @synthesize newmd5;
@property(readonly, nonatomic) BOOL hasNewmd5; // @synthesize hasNewmd5;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
@property(retain, nonatomic, setter=SetFileid:) NSString *fileid; // @synthesize fileid;
@property(readonly, nonatomic) BOOL hasFileid; // @synthesize hasFileid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

