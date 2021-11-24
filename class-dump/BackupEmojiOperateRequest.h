//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface BackupEmojiOperateRequest : PBGeneratedMessage
{
    unsigned int hasOpcode:1;
    unsigned int hasPanelType:1;
    unsigned int opcode;
    unsigned int panelType;
    NSMutableArray *mutableMd5ListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPanelType:) unsigned int panelType; // @synthesize panelType;
@property(readonly, nonatomic) BOOL hasPanelType; // @synthesize hasPanelType;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic) NSMutableArray *mutableMd5ListList; // @synthesize mutableMd5ListList;
- (void)addMd5ListFromArray:(id)arg1;
- (void)addMd5List:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *md5List; // @dynamic md5List;
- (id)md5ListList;
- (id)init;

@end

