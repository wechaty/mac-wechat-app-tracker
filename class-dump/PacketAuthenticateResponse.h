//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString;

@interface PacketAuthenticateResponse : PBGeneratedMessage
{
    unsigned int hasStep:1;
    unsigned int hasStatus:1;
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasData:1;
    NSData *data_;
    unsigned int hasVersion:1;
    unsigned int hasType:1;
    unsigned int hasSupportExt:1;
    unsigned int hasToken:1;
    int step;
    int status;
    int version;
    int type;
    int supportExt;
    NSData *token;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetToken:) NSData *token; // @synthesize token;
@property(readonly, nonatomic) BOOL hasToken; // @synthesize hasToken;
@property(nonatomic, setter=SetSupportExt:) int supportExt; // @synthesize supportExt;
@property(readonly, nonatomic) BOOL hasSupportExt; // @synthesize hasSupportExt;
@property(nonatomic, setter=SetType:) int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetVersion:) int version; // @synthesize version;
@property(readonly, nonatomic) BOOL hasVersion; // @synthesize hasVersion;
@property(retain, nonatomic, setter=SetData:) NSData *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
@property(nonatomic, setter=SetStatus:) int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(nonatomic, setter=SetStep:) int step; // @synthesize step;
@property(readonly, nonatomic) BOOL hasStep; // @synthesize hasStep;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

