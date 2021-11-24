//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCDNDownloadMgrExt-Protocol.h"

@class MessageData, MsgGap, NSString;
@protocol BakChatMsgDownloadTaskDelegate;

@interface BakChatMsgDownloadTask : NSObject <MMCDNDownloadMgrExt>
{
    NSString *_clientMsgId;
    MessageData *_msgData;
    MsgGap *_msgGap;
    id <BakChatMsgDownloadTaskDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BakChatMsgDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MsgGap *msgGap; // @synthesize msgGap=_msgGap;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=_msgData;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
- (void)cdnDownloadMgrDidCanceledDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFailedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithCdnTask:(id)arg1;
- (void)downloadOk;
- (void)downloadFail;
- (void)startDownloading;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

