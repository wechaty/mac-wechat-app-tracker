//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@interface _TtC6WeChat13SnsDataCenter : MMService <MMService>
{
    // Error parsing type: , name: database
    // Error parsing type: , name: localDataManager
    // Error parsing type: , name: remoteDataManager
    // Error parsing type: , name: operationManager
    // Error parsing type: , name: notificationManager
    // Error parsing type: , name: publishManager
}

- (void).cxx_destruct;
- (void)syncNewUnreadMessage;
- (void)deleteMessageWithLocalMessageId:(unsigned int)arg1;
- (void)setDataItemIgnoreWithFeedId:(id)arg1;
- (id)getFeedItem:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

@end

