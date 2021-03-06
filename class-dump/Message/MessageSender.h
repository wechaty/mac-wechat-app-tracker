//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MessageData, NSString;
@protocol MessageSenderDelegate;

@interface MessageSender : NSObject
{
    NSString *m_nsChatName;
    unsigned long long m_taskId;
    MessageData *m_msgData;
    unsigned int m_cgiSessionId;
    BOOL m_didRetryForEmptyAeskey;
    id <MessageSenderDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MessageSenderDelegate> delegate; // @synthesize delegate=m_delegate;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=m_msgData;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=m_taskId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=m_nsChatName;
- (BOOL)isEqual:(id)arg1;
- (void)startSending;

@end

