//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SNSCdnDownloadInfoWrap : NSObject
{
    BOOL _bUseDCIP;
    BOOL _bUseXorEncrypt;
    int _filetype;
    unsigned int _concurrentCount;
    int _downloadMode;
    unsigned int _predownloadPercent;
    int _h264RecompressCloseFlag;
    NSString *_clientId;
    NSString *_dataUrl;
    NSString *_savePath;
    NSArray *_arryIP;
    NSString *_referUrl;
    unsigned long long _xorEncryKey;
    unsigned long long _m_ui64TaskCreateTime;
}

- (void).cxx_destruct;
@property(nonatomic) int h264RecompressCloseFlag; // @synthesize h264RecompressCloseFlag=_h264RecompressCloseFlag;
@property(nonatomic) unsigned long long m_ui64TaskCreateTime; // @synthesize m_ui64TaskCreateTime=_m_ui64TaskCreateTime;
@property(nonatomic) unsigned long long xorEncryKey; // @synthesize xorEncryKey=_xorEncryKey;
@property(nonatomic) BOOL bUseXorEncrypt; // @synthesize bUseXorEncrypt=_bUseXorEncrypt;
@property(nonatomic) unsigned int predownloadPercent; // @synthesize predownloadPercent=_predownloadPercent;
@property(nonatomic) int downloadMode; // @synthesize downloadMode=_downloadMode;
@property(nonatomic) BOOL bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(retain, nonatomic) NSString *referUrl; // @synthesize referUrl=_referUrl;
@property(retain, nonatomic) NSArray *arryIP; // @synthesize arryIP=_arryIP;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) unsigned int concurrentCount; // @synthesize concurrentCount=_concurrentCount;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;

@end

