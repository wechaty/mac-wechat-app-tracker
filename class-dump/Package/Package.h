//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

@interface Package : PBGeneratedMessage
{
    unsigned int hasId:1;
    int id_;
    unsigned int hasVersion:1;
    unsigned int hasName:1;
    unsigned int hasSize:1;
    unsigned int hasThumb:1;
    unsigned int hasPackName:1;
    unsigned int hasExt:1;
    unsigned int hasMd5:1;
    int version;
    unsigned int size;
    NSString *name;
    SKBuiltinBuffer_t *thumb;
    NSString *packName;
    SKBuiltinBuffer_t *ext;
    NSString *md5;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
@property(retain, nonatomic, setter=SetExt:) SKBuiltinBuffer_t *ext; // @synthesize ext;
@property(readonly, nonatomic) BOOL hasExt; // @synthesize hasExt;
@property(retain, nonatomic, setter=SetPackName:) NSString *packName; // @synthesize packName;
@property(readonly, nonatomic) BOOL hasPackName; // @synthesize hasPackName;
@property(retain, nonatomic, setter=SetThumb:) SKBuiltinBuffer_t *thumb; // @synthesize thumb;
@property(readonly, nonatomic) BOOL hasThumb; // @synthesize hasThumb;
@property(nonatomic, setter=SetSize:) unsigned int size; // @synthesize size;
@property(readonly, nonatomic) BOOL hasSize; // @synthesize hasSize;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(nonatomic, setter=SetVersion:) int version; // @synthesize version;
@property(readonly, nonatomic) BOOL hasVersion; // @synthesize hasVersion;
@property(nonatomic, setter=SetId:) int id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

