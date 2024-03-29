//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCNearbyServiceAdvertiserDelegate-Protocol.h"
#import "MCSessionDelegate-Protocol.h"

@class MCNearbyServiceAdvertiser, MCPeerID, MCSession, MMSpeedFilter, NSDate, NSDictionary, NSLock, NSMutableArray, NSString;
@protocol LocalAreaPeerServerDelegate;

@interface LocalAreaPeerServer : NSObject <MCNearbyServiceAdvertiserDelegate, MCSessionDelegate>
{
    MCNearbyServiceAdvertiser *m_advertiser;
    MCSession *m_serverSession;
    NSDictionary *m_dicoverInfo;
    NSString *m_answerInfo;
    MCPeerID *m_localPeerID;
    MCPeerID *m_otherPeerID;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    MMSpeedFilter *m_sendSpeedFilter;
    MMSpeedFilter *m_recveSpeedFilter;
    NSDate *m_peerOpenDate;
    id <LocalAreaPeerServerDelegate> _delegate;
    NSLock *_sendingSizeLock;
    NSMutableArray *_sendingSizeArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sendingSizeArr; // @synthesize sendingSizeArr=_sendingSizeArr;
@property(retain, nonatomic) NSLock *sendingSizeLock; // @synthesize sendingSizeLock=_sendingSizeLock;
@property(nonatomic) __weak id <LocalAreaPeerServerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getPeerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getPeerReceiveSpeed;
- (float)getPeerSendSpeed;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)stopServer;
- (void)startServerWithDiscoverInfo:(id)arg1 withAnswerInfo:(id)arg2 withServiceType:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

