//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PacketBackupDataPush, PacketBackupDataTag;

@interface MMChatBackupOutput : NSObject
{
    PacketBackupDataPush *_dataPush;
    PacketBackupDataTag *_dataTag;
    unsigned long long _outputType;
    NSString *_sessionName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
@property(nonatomic) unsigned long long outputType; // @synthesize outputType=_outputType;
@property(retain, nonatomic) PacketBackupDataTag *dataTag; // @synthesize dataTag=_dataTag;
@property(retain, nonatomic) PacketBackupDataPush *dataPush; // @synthesize dataPush=_dataPush;
- (id)getSessionName;
- (void)setPacketBackupDataTag:(id)arg1;
- (id)getPacketBackupDataTag;
- (void)setBackupDataPush:(id)arg1;
- (id)getBackupDataPush;
- (unsigned long long)getOutputType;
- (id)init;

@end

