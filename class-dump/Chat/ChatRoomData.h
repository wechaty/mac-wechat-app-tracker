//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface ChatRoomData : NSObject <NSCopying>
{
    NSMutableDictionary *m_dicData;
    unsigned int m_maxMemberCount;
    unsigned int m_chatRoomVersion;
    unsigned int m_chatRoomType;
    BOOL isSimplify;
    NSRecursiveLock *_lock;
    unsigned int _chatRoomType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int chatRoomType; // @synthesize chatRoomType=_chatRoomType;
@property(nonatomic) BOOL isSimplify; // @synthesize isSimplify;
@property(retain, nonatomic) NSMutableDictionary *dicData; // @synthesize dicData=m_dicData;
@property(nonatomic) unsigned int chatRoomVersion; // @synthesize chatRoomVersion=m_chatRoomVersion;
@property(nonatomic) unsigned int maxMemberCount; // @synthesize maxMemberCount=m_maxMemberCount;
- (void)updateDicData:(struct XmlReaderNode_t *)arg1;
- (unsigned int)getXmlNodeIntValue:(struct XmlReaderNode_t *)arg1 forName:(const char *)arg2;
- (BOOL)isUndeliverCountOpen;
- (void)setUndeliverCountOpen:(BOOL)arg1;
- (BOOL)isShowDislayName;
- (void)setShowDislayName:(BOOL)arg1;
- (id)getDislayNameForUserName:(id)arg1;
- (void)setDislayName:(id)arg1 forUserName:(id)arg2;
- (void)updateChatRoomData:(struct XmlReaderNode_t *)arg1;
- (id)getDataDescription;
- (id)getDataXml;
- (void)parseData:(id)arg1;
- (void)setDataForUserName:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getDataForUserName:(id)arg1 key:(id)arg2;
- (void)mergeOldDetail:(id)arg1;
- (void)mergeOpenIMData:(id)arg1;
- (void)merge:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNewOpenIMChatRoomData:(id)arg1;
- (id)initWithNewChatRoomData:(id)arg1;
- (id)initWithChatRoomData:(id)arg1;
- (id)init;

@end

