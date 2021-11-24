//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMSnsDataItem, MMSnsMediaItem, NSArray, NSString, UrlInfo;

@interface CdnSnsTaskInfo : NSObject
{
    BOOL _m_bNeedNotify;
    BOOL _m_isDCIP;
    BOOL _isBatchDownloadThumb;
    BOOL _finishBatchTask;
    BOOL _isCoverTask;
    int _m_nRetCode;
    unsigned int _m_uiFileType;
    unsigned int _m_uiConcurrentCount;
    unsigned int _m_eImgRequestType;
    unsigned int _m_eImgResponseType;
    unsigned int _m_dcIpDnsType;
    unsigned int _m_ocIpDnsType;
    unsigned int _m_uiDnsCostTime;
    unsigned int _m_cdnMediaType;
    unsigned int _feedMediaAllCount;
    unsigned long long _m_ui64StartTime;
    unsigned long long _m_uiFileSize;
    NSString *_m_nsCdnStatInfo;
    MMSnsMediaItem *_m_oMediaItem;
    MMSnsDataItem *_m_oDataItem;
    long long _downloadType;
    NSString *_m_nsClientID;
    NSString *_m_nsSavePath;
    UrlInfo *_m_urlInfo;
    NSArray *_m_dcIplist;
    NSArray *_m_ocIplist;
    NSString *_tid;
    NSArray *_batchMediaInfo;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isCoverTask; // @synthesize isCoverTask=_isCoverTask;
@property(nonatomic) BOOL finishBatchTask; // @synthesize finishBatchTask=_finishBatchTask;
@property(retain, nonatomic) NSArray *batchMediaInfo; // @synthesize batchMediaInfo=_batchMediaInfo;
@property(nonatomic) unsigned int feedMediaAllCount; // @synthesize feedMediaAllCount=_feedMediaAllCount;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) BOOL isBatchDownloadThumb; // @synthesize isBatchDownloadThumb=_isBatchDownloadThumb;
@property(nonatomic) unsigned int m_cdnMediaType; // @synthesize m_cdnMediaType=_m_cdnMediaType;
@property(nonatomic) unsigned int m_uiDnsCostTime; // @synthesize m_uiDnsCostTime=_m_uiDnsCostTime;
@property(retain, nonatomic) NSArray *m_ocIplist; // @synthesize m_ocIplist=_m_ocIplist;
@property(retain, nonatomic) NSArray *m_dcIplist; // @synthesize m_dcIplist=_m_dcIplist;
@property(nonatomic) unsigned int m_ocIpDnsType; // @synthesize m_ocIpDnsType=_m_ocIpDnsType;
@property(nonatomic) unsigned int m_dcIpDnsType; // @synthesize m_dcIpDnsType=_m_dcIpDnsType;
@property(nonatomic) BOOL m_isDCIP; // @synthesize m_isDCIP=_m_isDCIP;
@property(nonatomic) BOOL m_bNeedNotify; // @synthesize m_bNeedNotify=_m_bNeedNotify;
@property(nonatomic) unsigned int m_eImgResponseType; // @synthesize m_eImgResponseType=_m_eImgResponseType;
@property(nonatomic) unsigned int m_eImgRequestType; // @synthesize m_eImgRequestType=_m_eImgRequestType;
@property(nonatomic) unsigned int m_uiConcurrentCount; // @synthesize m_uiConcurrentCount=_m_uiConcurrentCount;
@property(retain, nonatomic) UrlInfo *m_urlInfo; // @synthesize m_urlInfo=_m_urlInfo;
@property(retain, nonatomic) NSString *m_nsSavePath; // @synthesize m_nsSavePath=_m_nsSavePath;
@property(retain, nonatomic) NSString *m_nsClientID; // @synthesize m_nsClientID=_m_nsClientID;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) MMSnsDataItem *m_oDataItem; // @synthesize m_oDataItem=_m_oDataItem;
@property(retain, nonatomic) MMSnsMediaItem *m_oMediaItem; // @synthesize m_oMediaItem=_m_oMediaItem;
@property(retain, nonatomic) NSString *m_nsCdnStatInfo; // @synthesize m_nsCdnStatInfo=_m_nsCdnStatInfo;
@property(nonatomic) unsigned long long m_uiFileSize; // @synthesize m_uiFileSize=_m_uiFileSize;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType=_m_uiFileType;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime=_m_ui64StartTime;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode=_m_nRetCode;

@end

