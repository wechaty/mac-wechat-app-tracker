//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMSnsDataItem, NSString;

@interface MMSnsCommentLikeFailedInfo : NSObject <PBCoding>
{
    MMSnsDataItem *feed;
    NSString *content;
    NSString *referToCommentID;
    NSString *referToCommentID64;
}

+ (void)initialize;
+ (void)PBArrayAdd_referToCommentID64;
+ (void)PBArrayAdd_referToCommentID;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_feed;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *referToCommentID64; // @synthesize referToCommentID64;
@property(retain, nonatomic) NSString *referToCommentID; // @synthesize referToCommentID;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) MMSnsDataItem *feed; // @synthesize feed;
- (id)getReferencedComment;
- (id)initWithDataItem:(id)arg1 content:(id)arg2 comment:(id)arg3;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

