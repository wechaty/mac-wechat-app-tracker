//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class CmdList, NSString, SKBuiltinBuffer_t;

@interface NewSyncRequest : PBGeneratedMessage
{
    unsigned int hasOplog:1;
    unsigned int hasSelector:1;
    unsigned int hasKeyBuf:1;
    unsigned int hasScene:1;
    unsigned int hasDeviceType:1;
    unsigned int selector;
    unsigned int scene;
    CmdList *oplog;
    SKBuiltinBuffer_t *keyBuf;
    NSString *deviceType;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetDeviceType:) NSString *deviceType; // @synthesize deviceType;
@property(readonly, nonatomic) BOOL hasDeviceType; // @synthesize hasDeviceType;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetKeyBuf:) SKBuiltinBuffer_t *keyBuf; // @synthesize keyBuf;
@property(readonly, nonatomic) BOOL hasKeyBuf; // @synthesize hasKeyBuf;
@property(nonatomic, setter=SetSelector:) unsigned int selector; // @synthesize selector;
@property(readonly, nonatomic) BOOL hasSelector; // @synthesize hasSelector;
@property(retain, nonatomic, setter=SetOplog:) CmdList *oplog; // @synthesize oplog;
@property(readonly, nonatomic) BOOL hasOplog; // @synthesize hasOplog;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

