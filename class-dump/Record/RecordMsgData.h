//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RecordMsgLocationItem, RecordMsgProductItem, RecordMsgTVItem, RecordMsgUrlItem;

@interface RecordMsgData : NSObject
{
    unsigned int _m_uiDataType;
    unsigned int _m_uiFileType;
    unsigned int _m_uiThumbSize;
    unsigned int _m_uiDataSize;
    unsigned int _m_uiCDNEncryVer;
    unsigned int _m_uiDuration;
    NSString *_m_nsDataID;
    NSString *_m_nsDataFmt;
    NSString *_m_nsAppId;
    NSString *_m_nsBrandID;
    NSString *_m_nsSourceName;
    NSString *_m_nsSourceTime;
    NSString *_m_nsDataTitle;
    NSString *_m_nsDataDesc;
    NSString *_m_nsLink;
    NSString *_m_nsMd5Sum;
    NSString *_m_nsHeadMd5Sum;
    NSString *_m_nsCDNThumbUrl;
    NSString *_m_nsCDNThumbKey;
    NSString *_m_nsThumbSourcePath;
    NSString *_m_nsCDNDataUrl;
    NSString *_m_nsCDNDataKey;
    NSString *_m_nsDataSourcePath;
    NSString *_m_nsStreamWebUrl;
    NSString *_m_nsStreamDataUrl;
    NSString *_m_nsStreamLowBandUrl;
    NSString *_m_nsExt;
    RecordMsgLocationItem *_m_locItem;
    RecordMsgUrlItem *_m_urlItem;
    RecordMsgProductItem *_m_productItem;
    RecordMsgTVItem *_m_tvItem;
    double _m_nodeHeight;
    long long _downloadStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) double m_nodeHeight; // @synthesize m_nodeHeight=_m_nodeHeight;
@property(retain, nonatomic) RecordMsgTVItem *m_tvItem; // @synthesize m_tvItem=_m_tvItem;
@property(retain, nonatomic) RecordMsgProductItem *m_productItem; // @synthesize m_productItem=_m_productItem;
@property(retain, nonatomic) RecordMsgUrlItem *m_urlItem; // @synthesize m_urlItem=_m_urlItem;
@property(retain, nonatomic) RecordMsgLocationItem *m_locItem; // @synthesize m_locItem=_m_locItem;
@property(retain, nonatomic) NSString *m_nsExt; // @synthesize m_nsExt=_m_nsExt;
@property(retain, nonatomic) NSString *m_nsStreamLowBandUrl; // @synthesize m_nsStreamLowBandUrl=_m_nsStreamLowBandUrl;
@property(retain, nonatomic) NSString *m_nsStreamDataUrl; // @synthesize m_nsStreamDataUrl=_m_nsStreamDataUrl;
@property(retain, nonatomic) NSString *m_nsStreamWebUrl; // @synthesize m_nsStreamWebUrl=_m_nsStreamWebUrl;
@property(nonatomic) unsigned int m_uiDuration; // @synthesize m_uiDuration=_m_uiDuration;
@property(nonatomic) unsigned int m_uiCDNEncryVer; // @synthesize m_uiCDNEncryVer=_m_uiCDNEncryVer;
@property(nonatomic) unsigned int m_uiDataSize; // @synthesize m_uiDataSize=_m_uiDataSize;
@property(retain, nonatomic) NSString *m_nsDataSourcePath; // @synthesize m_nsDataSourcePath=_m_nsDataSourcePath;
@property(retain, nonatomic) NSString *m_nsCDNDataKey; // @synthesize m_nsCDNDataKey=_m_nsCDNDataKey;
@property(retain, nonatomic) NSString *m_nsCDNDataUrl; // @synthesize m_nsCDNDataUrl=_m_nsCDNDataUrl;
@property(nonatomic) unsigned int m_uiThumbSize; // @synthesize m_uiThumbSize=_m_uiThumbSize;
@property(retain, nonatomic) NSString *m_nsThumbSourcePath; // @synthesize m_nsThumbSourcePath=_m_nsThumbSourcePath;
@property(retain, nonatomic) NSString *m_nsCDNThumbKey; // @synthesize m_nsCDNThumbKey=_m_nsCDNThumbKey;
@property(retain, nonatomic) NSString *m_nsCDNThumbUrl; // @synthesize m_nsCDNThumbUrl=_m_nsCDNThumbUrl;
@property(retain, nonatomic) NSString *m_nsHeadMd5Sum; // @synthesize m_nsHeadMd5Sum=_m_nsHeadMd5Sum;
@property(retain, nonatomic) NSString *m_nsMd5Sum; // @synthesize m_nsMd5Sum=_m_nsMd5Sum;
@property(retain, nonatomic) NSString *m_nsLink; // @synthesize m_nsLink=_m_nsLink;
@property(retain, nonatomic) NSString *m_nsDataDesc; // @synthesize m_nsDataDesc=_m_nsDataDesc;
@property(retain, nonatomic) NSString *m_nsDataTitle; // @synthesize m_nsDataTitle=_m_nsDataTitle;
@property(retain, nonatomic) NSString *m_nsSourceTime; // @synthesize m_nsSourceTime=_m_nsSourceTime;
@property(retain, nonatomic) NSString *m_nsSourceName; // @synthesize m_nsSourceName=_m_nsSourceName;
@property(retain, nonatomic) NSString *m_nsBrandID; // @synthesize m_nsBrandID=_m_nsBrandID;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId=_m_nsAppId;
@property(retain, nonatomic) NSString *m_nsDataFmt; // @synthesize m_nsDataFmt=_m_nsDataFmt;
@property(retain, nonatomic) NSString *m_nsDataID; // @synthesize m_nsDataID=_m_nsDataID;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType=_m_uiFileType;
@property(nonatomic) unsigned int m_uiDataType; // @synthesize m_uiDataType=_m_uiDataType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

