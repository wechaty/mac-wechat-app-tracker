//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface WxaAppHostInfo : PBGeneratedMessage
{
    NSMutableArray *mutablePluginInfoList;
    NSMutableArray *mutableJumpToInfoList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableJumpToInfoList; // @synthesize mutableJumpToInfoList;
@property(retain, nonatomic) NSMutableArray *mutablePluginInfoList; // @synthesize mutablePluginInfoList;
- (void)addJumpToInfo:(id)arg1;
- (void)addJumpToInfoFromArray:(id)arg1;
- (void)addPluginInfo:(id)arg1;
- (void)addPluginInfoFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *jumpToInfo; // @dynamic jumpToInfo;
- (id)jumpToInfoList;
@property(retain, nonatomic) NSMutableArray *pluginInfo; // @dynamic pluginInfo;
- (id)pluginInfoList;
- (id)init;

@end

