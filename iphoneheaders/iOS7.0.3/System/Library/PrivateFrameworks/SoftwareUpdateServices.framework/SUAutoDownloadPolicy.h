/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular;
-(id)initWithDescriptor:(id)arg1 ;
-(unsigned)wifiOnlyPeriodInDays;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1 ;
@end
