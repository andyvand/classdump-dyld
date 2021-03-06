/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CoreWiFiMCSVHT : NSObject {

	NSMutableArray* longGuardInterval20MHzNSS1;
	NSMutableArray* shortGuardInterval20MHzNSS1;
	NSMutableArray* longGuardInterval20MHzNSS2;
	NSMutableArray* shortGuardInterval20MHzNSS2;
	NSMutableArray* longGuardInterval20MHzNSS3;
	NSMutableArray* shortGuardInterval20MHzNSS3;
	NSMutableArray* longGuardInterval40MHzNSS1;
	NSMutableArray* shortGuardInterval40MHzNSS1;
	NSMutableArray* longGuardInterval40MHzNSS2;
	NSMutableArray* shortGuardInterval40MHzNSS2;
	NSMutableArray* longGuardInterval40MHzNSS3;
	NSMutableArray* shortGuardInterval40MHzNSS3;
	NSMutableArray* longGuardInterval80MHzNSS1;
	NSMutableArray* shortGuardInterval80MHzNSS1;
	NSMutableArray* longGuardInterval80MHzNSS2;
	NSMutableArray* shortGuardInterval80MHzNSS2;
	NSMutableArray* longGuardInterval80MHzNSS3;
	NSMutableArray* shortGuardInterval80MHzNSS3;
	NSMutableArray* longGuardInterval160MHzNSS1;
	NSMutableArray* shortGuardInterval160MHzNSS1;
	NSMutableArray* longGuardInterval160MHzNSS2;
	NSMutableArray* shortGuardInterval160MHzNSS2;
	NSMutableArray* longGuardInterval160MHzNSS3;
	NSMutableArray* shortGuardInterval160MHzNSS3;
	NSMutableArray* longGuardInterval20MHz;
	NSMutableArray* shortGuardInterval20MHz;
	NSMutableArray* longGuardInterval40MHz;
	NSMutableArray* shortGuardInterval40MHz;
	NSMutableArray* longGuardInterval80MHz;
	NSMutableArray* shortGuardInterval80MHz;
	NSMutableArray* longGuardInterval160MHz;
	NSMutableArray* shortGuardInterval160MHz;

}
+(id)sharedSystem;
-(id)rateForMCS:(unsigned long long)arg1 channelWidth:(unsigned long long)arg2 nss:(unsigned long long)arg3 shortGI:(char)arg4 ;
-(void)setup20MHz;
-(void)setup40MHz;
-(void)setup80MHz;
-(void)setup160MHz;
-(id)init;
-(void)dealloc;
@end

