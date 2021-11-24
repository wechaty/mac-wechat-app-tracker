//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface DownloadEmojiResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasEmojiItemCount:1;
    int emojiItemCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableEmojiItemList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableEmojiItemList; // @synthesize mutableEmojiItemList;
@property(nonatomic, setter=SetEmojiItemCount:) int emojiItemCount; // @synthesize emojiItemCount;
@property(readonly, nonatomic) BOOL hasEmojiItemCount; // @synthesize hasEmojiItemCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addEmojiItem:(id)arg1;
- (void)addEmojiItemFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *emojiItem; // @dynamic emojiItem;
- (id)emojiItemList;
- (id)init;

@end

