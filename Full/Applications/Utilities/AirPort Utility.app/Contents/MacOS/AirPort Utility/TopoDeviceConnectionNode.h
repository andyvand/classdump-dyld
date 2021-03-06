/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/TopoNode_SettingsProtocol.h>
#import <AirPort Utility/TopoSettingsProtocol.h>
#import <AirPort Utility/SettingsValueDelegate.h>

@class NSDictionary;

@interface TopoDeviceConnectionNode : TopoNode_SettingsProtocol <TopoSettingsProtocol, SettingsValueDelegate> {

	unsigned long long _connectionID;
	int _medium;
	NSDictionary* _upstreamConnectionInfo;
	NSDictionary* _downstreamConnectionInfo;
	char _downstreamDeviceMissing;

}

@property (assign,nonatomic) int medium;                                           //@synthesize medium=_medium - In the implementation block
@property (nonatomic,retain) NSDictionary * upstreamConnectionInfo;                //@synthesize upstreamConnectionInfo=_upstreamConnectionInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * downstreamConnectionInfo;              //@synthesize downstreamConnectionInfo=_downstreamConnectionInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * deviceConnectionStats; 
@property (assign,nonatomic) char downstreamDeviceMissing;                         //@synthesize downstreamDeviceMissing=_downstreamDeviceMissing - In the implementation block
-(int)getValue:(id*)arg1 forSettingKey:(id)arg2 ;
-(id)describeOne:(id)arg1 node:(id)arg2 indent:(unsigned long long)arg3 ;
-(int)settingsDevice;
-(long long)localizedCompareDeviceNode:(id)arg1 ;
-(void)setUpstreamConnectionInfo:(NSDictionary *)arg1 ;
-(void)setDownstreamConnectionInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)downstreamConnectionInfo;
-(NSDictionary *)upstreamConnectionInfo;
-(NSDictionary *)deviceConnectionStats;
-(char)downstreamDeviceMissing;
-(void)setDownstreamDeviceMissing:(char)arg1 ;
-(id)deviceIdentifier;
-(int)medium;
-(void)setMedium:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
@end

