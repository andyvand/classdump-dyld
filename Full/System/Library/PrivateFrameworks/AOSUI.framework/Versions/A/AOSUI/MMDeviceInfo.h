/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MMDeviceInfo : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;

}

@property (nonatomic,readonly) NSString * udid;                      //@synthesize udid=_udid - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                 //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) long long osTheme; 
+(id)deviceInfo;
-(NSString *)osVersion;
-(NSString *)buildVersion;
-(long long)aquaInterface;
-(long long)osTheme;
-(NSString *)udid;
-(id)init;
-(void)dealloc;
-(NSString *)deviceName;
@end

