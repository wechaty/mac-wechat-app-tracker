//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPStatHelper : NSObject
{
}

+ (id)Gen12805Log:(id)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)Gen11123Log:(id)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)GenAVQualityExtLog:(struct tagAVQualityReportInfo *)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)GetChannelLog:(struct NewDirectReport *)arg1 withRelayReportV2:(struct NewRelayReport *)arg2 withDialReport:(struct DialReport_t *)arg3;
+ (id)GetChannelTcpLog:(struct RelayTcpReport *)arg1 tcpSwitchCnt:(unsigned int)arg2 withDialReport:(struct DialReport_t *)arg3 withRelayReportV2:(struct NewRelayReport *)arg4 withDirectReportV2:(struct NewDirectReport *)arg5;
+ (id)GenAVQualityLog:(struct tagAVQualityReportInfo *)arg1 extAVReport:(struct NewAVExtReport_t *)arg2 androidReport:(struct AndroidReport_t *)arg3;
+ (id)GenNewDialLog:(struct NewDialReport_t *)arg1 androidReport:(struct AndroidReport_t *)arg2;
+ (id)GenExtLog:(struct ExtReport_t *)arg1 withQual:(struct tagAVQualityReportInfo)arg2;
+ (id)GenQualityLog:(struct tagAVQualityReportInfo *)arg1;
+ (id)GenDialLog:(struct DialReport_t *)arg1;

@end

