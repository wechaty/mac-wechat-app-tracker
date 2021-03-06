//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCFavoritesItemTableDataPackedInfo;

@interface WCFavoritesItemTableData : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned int _localId;
    unsigned int _favId;
    unsigned int _type;
    unsigned int _status;
    unsigned int _localStatus;
    unsigned int _localUpdateSeq;
    unsigned int _updateSeq;
    unsigned int _time;
    unsigned int _sourceType;
    unsigned int _dataTotalSize;
    long long lastInsertedRowID;
    NSString *_sourceId;
    NSString *_xml;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    WCFavoritesItemTableDataPackedInfo *_m_packedInfo;
}

+ (const void *)m_packedInfo;
+ (const void *)dataTotalSize;
+ (const void *)xml;
+ (const void *)sourceId;
+ (const void *)localStatus;
+ (const void *)sourceType;
+ (const void *)realChatName;
+ (const void *)toUsr;
+ (const void *)fromUsr;
+ (const void *)localUpdateSeq;
+ (const void *)updateSeq;
+ (const void *)status;
+ (const void *)time;
+ (const void *)type;
+ (const void *)favId;
+ (const void *)localId;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFavoritesItemTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) unsigned int dataTotalSize; // @synthesize dataTotalSize=_dataTotalSize;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned int localStatus; // @synthesize localStatus=_localStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (id)description;
- (void)populateFieldsFromXML;
- (void)copyFieldFromOtherObject:(id)arg1;

@end

