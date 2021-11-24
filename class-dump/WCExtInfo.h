//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

@interface WCExtInfo : PBGeneratedMessage
{
    unsigned int hasWcstf:1;
    unsigned int hasWcste:1;
    unsigned int hasCcData:1;
    unsigned int hasUserAttrInfo:1;
    unsigned int hasAcgiDeviceInfo:1;
    unsigned int hasAcgiTuring:1;
    unsigned int hasDeviceToken:1;
    unsigned int hasBehaviorId:1;
    unsigned int hasIosturingHuman:1;
    unsigned int hasIosturingOwner:1;
    SKBuiltinBuffer_t *wcstf;
    SKBuiltinBuffer_t *wcste;
    SKBuiltinBuffer_t *ccData;
    SKBuiltinBuffer_t *userAttrInfo;
    SKBuiltinBuffer_t *acgiDeviceInfo;
    SKBuiltinBuffer_t *acgiTuring;
    SKBuiltinBuffer_t *deviceToken;
    SKBuiltinBuffer_t *behaviorId;
    SKBuiltinBuffer_t *iosturingHuman;
    SKBuiltinBuffer_t *iosturingOwner;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetIosturingOwner:) SKBuiltinBuffer_t *iosturingOwner; // @synthesize iosturingOwner;
@property(readonly, nonatomic) BOOL hasIosturingOwner; // @synthesize hasIosturingOwner;
@property(retain, nonatomic, setter=SetIosturingHuman:) SKBuiltinBuffer_t *iosturingHuman; // @synthesize iosturingHuman;
@property(readonly, nonatomic) BOOL hasIosturingHuman; // @synthesize hasIosturingHuman;
@property(retain, nonatomic, setter=SetBehaviorId:) SKBuiltinBuffer_t *behaviorId; // @synthesize behaviorId;
@property(readonly, nonatomic) BOOL hasBehaviorId; // @synthesize hasBehaviorId;
@property(retain, nonatomic, setter=SetDeviceToken:) SKBuiltinBuffer_t *deviceToken; // @synthesize deviceToken;
@property(readonly, nonatomic) BOOL hasDeviceToken; // @synthesize hasDeviceToken;
@property(retain, nonatomic, setter=SetAcgiTuring:) SKBuiltinBuffer_t *acgiTuring; // @synthesize acgiTuring;
@property(readonly, nonatomic) BOOL hasAcgiTuring; // @synthesize hasAcgiTuring;
@property(retain, nonatomic, setter=SetAcgiDeviceInfo:) SKBuiltinBuffer_t *acgiDeviceInfo; // @synthesize acgiDeviceInfo;
@property(readonly, nonatomic) BOOL hasAcgiDeviceInfo; // @synthesize hasAcgiDeviceInfo;
@property(retain, nonatomic, setter=SetUserAttrInfo:) SKBuiltinBuffer_t *userAttrInfo; // @synthesize userAttrInfo;
@property(readonly, nonatomic) BOOL hasUserAttrInfo; // @synthesize hasUserAttrInfo;
@property(retain, nonatomic, setter=SetCcData:) SKBuiltinBuffer_t *ccData; // @synthesize ccData;
@property(readonly, nonatomic) BOOL hasCcData; // @synthesize hasCcData;
@property(retain, nonatomic, setter=SetWcste:) SKBuiltinBuffer_t *wcste; // @synthesize wcste;
@property(readonly, nonatomic) BOOL hasWcste; // @synthesize hasWcste;
@property(retain, nonatomic, setter=SetWcstf:) SKBuiltinBuffer_t *wcstf; // @synthesize wcstf;
@property(readonly, nonatomic) BOOL hasWcstf; // @synthesize hasWcstf;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

