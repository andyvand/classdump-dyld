/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFiIE.h>

@class CoreWiFiWPSTLVs;

@interface CoreWiFiWPSIE : CoreWiFiIE {

	CoreWiFiWPSTLVs* tlvs;

}

@property (nonatomic,retain,readonly) CoreWiFiWPSTLVs * tlvs; 
-(id)initWithIE:(id)arg1 ;
-(char)parseIE:(id*)arg1 ;
-(CoreWiFiWPSTLVs *)tlvs;
-(void)dealloc;
-(id)description;
@end

