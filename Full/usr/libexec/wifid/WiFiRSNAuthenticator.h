/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/wifid
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <wifid/WiFiRSNA.h>

@class WiFiClient;

@interface WiFiRSNAuthenticator : WiFiRSNA {

	unsigned char keyDescriptorVersion;
	unsigned char protocolVersion;
	unsigned char descriptorType;
	WiFiClient* client;

}
-(void)rotateGTK:(id)arg1 withIndex:(id)arg2 withRSC:(id)arg3 ;
-(void)processEAPOL:(id)arg1 ;
-(id)initWithInterface:(id)arg1 forClient:(id)arg2 withPMK:(id)arg3 withFilter:(id)arg4 ;
-(char)resetPTK:(id)arg1 withIndex:(id)arg2 withRSC:(id)arg3 error:(id*)arg4 ;
-(void)processPTK2of4:(id)arg1 ;
-(void)processPTK4of4:(id)arg1 ;
-(void)processGTK2of2:(id)arg1 ;
-(void)constructGTK1of2;
-(void)storeGTK:(id)arg1 withIndex:(id)arg2 withRSC:(id)arg3 ;
-(void)constructPTK1of4;
-(void)constructPTK3of4;
-(char)installPTK;
-(void)dealloc;
@end
