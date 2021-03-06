//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinString_t;

@interface QuitChatRoom : PBGeneratedMessage
{
    unsigned int hasChatRoomName:1;
    unsigned int hasUserName:1;
    SKBuiltinString_t *chatRoomName;
    SKBuiltinString_t *userName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetChatRoomName:) SKBuiltinString_t *chatRoomName; // @synthesize chatRoomName;
@property(readonly, nonatomic) BOOL hasChatRoomName; // @synthesize hasChatRoomName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

