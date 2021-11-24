//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CAppBrandInfo : NSObject
{
    BOOL _hasAppInfo;
    BOOL _isUseModule;
    BOOL _webSocketSkipPortCheck;
    BOOL _canPreFetchData;
    BOOL _canPeriodFetchData;
    BOOL _TLSSkipHostnameCheck;
    BOOL _canShowLoadingAdvert;
    unsigned int _appServiceType;
    unsigned int _runningFlag;
    unsigned int _canNotStarWxaBeforeTime;
    unsigned int _appRole;
    unsigned int _wechatPluginApp;
    unsigned int _profileCommentForbid;
    unsigned int _originalFlag;
    unsigned int _versionState;
    unsigned int _maxPkgSize;
    unsigned int _maxUploadConcurrent;
    unsigned int _maxDownloadConcurrent;
    unsigned int _maxLocalstorageSize;
    unsigned int _maxOpendataLocalstorageSize;
    unsigned int _maxBackgroundLifespan;
    unsigned int _maxRequestConcurrent;
    unsigned int _maxWebsocketConnect;
    unsigned int _maxWebviewDepth;
    unsigned int _expendedMaxWebviewDepth;
    unsigned int _actualWebviewDepth;
    unsigned int _expiresAtList;
    unsigned int _maxFileStorageSize;
    unsigned int _maxOpendataFileStorageSize;
    unsigned int _maxTempFileStorageSize;
    unsigned int _backgroundNetworkInterruptedTimeout;
    unsigned int _lifeSpanBeforeSuspend;
    unsigned int _lifeSpanAfterSuspend;
    unsigned int _maxWorkerConcurrent;
    unsigned int _periodFetchDataHours;
    unsigned int _periodFetchDataDay;
    unsigned int _videoTaskTimeout;
    unsigned int _guaranteeFlag;
    NSString *_regitserBody;
    NSString *_passThroughInfo;
    NSString *_appid;
    NSString *_shortNickName;
    NSString *_runningOpenForbbidenUrl;
    NSArray *_templateList;
    NSString *_fromBusinessUserName;
    NSArray *_versionList;
    NSArray *_requestDomain;
    NSArray *_wsRequestDomain;
    NSArray *_uploadDomain;
    NSArray *_downloadDomain;
    NSArray *_udpDomain;
    NSDictionary *_dicPluginInfo;
    NSString *_originalRedirectUrl;
    unsigned long long _appVersion;
    NSString *_versionPkgMD5;
    NSString *_deviceOrientation;
    NSString *_loadingImgUrl;
    NSString *_loadingImgProgressbarColor;
    NSDictionary *_loadingStyleWhite;
    NSDictionary *_loadingStyleBlack;
    NSArray *_arrModuleList;
    NSString *_entranceModule;
    NSDictionary *_dicClientJsExtInfo;
    NSString *_withoutLibMd5;
    NSArray *_arrPluginCodeInfo;
    NSArray *_arrWidgetInfo;
    NSArray *_categories;
    NSArray *_bizEntryInfo;
}

+ (id)appBrandInfoWithExternalInfoDicionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int guaranteeFlag; // @synthesize guaranteeFlag=_guaranteeFlag;
@property(retain, nonatomic) NSArray *bizEntryInfo; // @synthesize bizEntryInfo=_bizEntryInfo;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) BOOL canShowLoadingAdvert; // @synthesize canShowLoadingAdvert=_canShowLoadingAdvert;
@property(nonatomic) unsigned int videoTaskTimeout; // @synthesize videoTaskTimeout=_videoTaskTimeout;
@property(nonatomic) BOOL TLSSkipHostnameCheck; // @synthesize TLSSkipHostnameCheck=_TLSSkipHostnameCheck;
@property(nonatomic) unsigned int periodFetchDataDay; // @synthesize periodFetchDataDay=_periodFetchDataDay;
@property(nonatomic) unsigned int periodFetchDataHours; // @synthesize periodFetchDataHours=_periodFetchDataHours;
@property(nonatomic) BOOL canPeriodFetchData; // @synthesize canPeriodFetchData=_canPeriodFetchData;
@property(nonatomic) BOOL canPreFetchData; // @synthesize canPreFetchData=_canPreFetchData;
@property(nonatomic) unsigned int maxWorkerConcurrent; // @synthesize maxWorkerConcurrent=_maxWorkerConcurrent;
@property(nonatomic) BOOL webSocketSkipPortCheck; // @synthesize webSocketSkipPortCheck=_webSocketSkipPortCheck;
@property(nonatomic) unsigned int lifeSpanAfterSuspend; // @synthesize lifeSpanAfterSuspend=_lifeSpanAfterSuspend;
@property(nonatomic) unsigned int lifeSpanBeforeSuspend; // @synthesize lifeSpanBeforeSuspend=_lifeSpanBeforeSuspend;
@property(nonatomic) unsigned int backgroundNetworkInterruptedTimeout; // @synthesize backgroundNetworkInterruptedTimeout=_backgroundNetworkInterruptedTimeout;
@property(nonatomic) unsigned int maxTempFileStorageSize; // @synthesize maxTempFileStorageSize=_maxTempFileStorageSize;
@property(nonatomic) unsigned int maxOpendataFileStorageSize; // @synthesize maxOpendataFileStorageSize=_maxOpendataFileStorageSize;
@property(nonatomic) unsigned int maxFileStorageSize; // @synthesize maxFileStorageSize=_maxFileStorageSize;
@property(nonatomic) unsigned int expiresAtList; // @synthesize expiresAtList=_expiresAtList;
@property(nonatomic) unsigned int actualWebviewDepth; // @synthesize actualWebviewDepth=_actualWebviewDepth;
@property(nonatomic) unsigned int expendedMaxWebviewDepth; // @synthesize expendedMaxWebviewDepth=_expendedMaxWebviewDepth;
@property(nonatomic) unsigned int maxWebviewDepth; // @synthesize maxWebviewDepth=_maxWebviewDepth;
@property(nonatomic) unsigned int maxWebsocketConnect; // @synthesize maxWebsocketConnect=_maxWebsocketConnect;
@property(nonatomic) unsigned int maxRequestConcurrent; // @synthesize maxRequestConcurrent=_maxRequestConcurrent;
@property(nonatomic) unsigned int maxBackgroundLifespan; // @synthesize maxBackgroundLifespan=_maxBackgroundLifespan;
@property(nonatomic) unsigned int maxOpendataLocalstorageSize; // @synthesize maxOpendataLocalstorageSize=_maxOpendataLocalstorageSize;
@property(nonatomic) unsigned int maxLocalstorageSize; // @synthesize maxLocalstorageSize=_maxLocalstorageSize;
@property(nonatomic) unsigned int maxDownloadConcurrent; // @synthesize maxDownloadConcurrent=_maxDownloadConcurrent;
@property(nonatomic) unsigned int maxUploadConcurrent; // @synthesize maxUploadConcurrent=_maxUploadConcurrent;
@property(nonatomic) unsigned int maxPkgSize; // @synthesize maxPkgSize=_maxPkgSize;
@property(retain, nonatomic) NSArray *arrWidgetInfo; // @synthesize arrWidgetInfo=_arrWidgetInfo;
@property(retain, nonatomic) NSArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo=_arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5=_withoutLibMd5;
@property(retain, nonatomic) NSDictionary *dicClientJsExtInfo; // @synthesize dicClientJsExtInfo=_dicClientJsExtInfo;
@property(copy, nonatomic) NSString *entranceModule; // @synthesize entranceModule=_entranceModule;
@property(nonatomic) BOOL isUseModule; // @synthesize isUseModule=_isUseModule;
@property(retain, nonatomic) NSArray *arrModuleList; // @synthesize arrModuleList=_arrModuleList;
@property(copy, nonatomic) NSDictionary *loadingStyleBlack; // @synthesize loadingStyleBlack=_loadingStyleBlack;
@property(copy, nonatomic) NSDictionary *loadingStyleWhite; // @synthesize loadingStyleWhite=_loadingStyleWhite;
@property(copy, nonatomic) NSString *loadingImgProgressbarColor; // @synthesize loadingImgProgressbarColor=_loadingImgProgressbarColor;
@property(copy, nonatomic) NSString *loadingImgUrl; // @synthesize loadingImgUrl=_loadingImgUrl;
@property(copy, nonatomic) NSString *deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(copy, nonatomic) NSString *versionPkgMD5; // @synthesize versionPkgMD5=_versionPkgMD5;
@property(nonatomic) unsigned long long appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned int versionState; // @synthesize versionState=_versionState;
@property(copy, nonatomic) NSString *originalRedirectUrl; // @synthesize originalRedirectUrl=_originalRedirectUrl;
@property(nonatomic) unsigned int originalFlag; // @synthesize originalFlag=_originalFlag;
@property(retain, nonatomic) NSDictionary *dicPluginInfo; // @synthesize dicPluginInfo=_dicPluginInfo;
@property(retain, nonatomic) NSArray *udpDomain; // @synthesize udpDomain=_udpDomain;
@property(retain, nonatomic) NSArray *downloadDomain; // @synthesize downloadDomain=_downloadDomain;
@property(retain, nonatomic) NSArray *uploadDomain; // @synthesize uploadDomain=_uploadDomain;
@property(retain, nonatomic) NSArray *wsRequestDomain; // @synthesize wsRequestDomain=_wsRequestDomain;
@property(retain, nonatomic) NSArray *requestDomain; // @synthesize requestDomain=_requestDomain;
@property(retain, nonatomic) NSArray *versionList; // @synthesize versionList=_versionList;
@property(copy, nonatomic) NSString *fromBusinessUserName; // @synthesize fromBusinessUserName=_fromBusinessUserName;
@property(nonatomic) unsigned int profileCommentForbid; // @synthesize profileCommentForbid=_profileCommentForbid;
@property(nonatomic) unsigned int wechatPluginApp; // @synthesize wechatPluginApp=_wechatPluginApp;
@property(retain, nonatomic) NSArray *templateList; // @synthesize templateList=_templateList;
@property(nonatomic) unsigned int appRole; // @synthesize appRole=_appRole;
@property(nonatomic) unsigned int canNotStarWxaBeforeTime; // @synthesize canNotStarWxaBeforeTime=_canNotStarWxaBeforeTime;
@property(copy, nonatomic) NSString *runningOpenForbbidenUrl; // @synthesize runningOpenForbbidenUrl=_runningOpenForbbidenUrl;
@property(nonatomic) unsigned int runningFlag; // @synthesize runningFlag=_runningFlag;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(copy, nonatomic) NSString *shortNickName; // @synthesize shortNickName=_shortNickName;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) BOOL hasAppInfo; // @synthesize hasAppInfo=_hasAppInfo;
@property(copy, nonatomic) NSString *passThroughInfo; // @synthesize passThroughInfo=_passThroughInfo;
@property(copy, nonatomic) NSString *regitserBody; // @synthesize regitserBody=_regitserBody;

@end

