//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSString;

@interface ContactVerifyLogic : NSObject <MMCGIDelegate>
{
    BOOL _isStop;
    CDUnknownBlockType _getContactCompletionBlock;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isStop; // @synthesize isStop=_isStop;
@property(copy, nonatomic) CDUnknownBlockType getContactCompletionBlock; // @synthesize getContactCompletionBlock=_getContactCompletionBlock;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (BOOL)sendGetContactReqWithUserName:(id)arg1 chatRoomName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

