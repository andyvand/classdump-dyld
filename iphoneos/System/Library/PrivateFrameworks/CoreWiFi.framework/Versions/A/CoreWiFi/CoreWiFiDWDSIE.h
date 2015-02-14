/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFiIE.h>

@interface CoreWiFiDWDSIE : CoreWiFiIE {

	char isDwdsMaster;
	char isDwdsRelay;
	char isDwdsRemote;
	char isAMPDUNotSupportedOverDWDS;
	char isAMPDUWorkaroundOverDWDS;
	char isAMPDUFullSupportOverDWDS;
	char isClosedNetworkOverDWDS;

}

@property (assign,nonatomic) char isDwdsMaster; 
@property (assign,nonatomic) char isDwdsRelay; 
@property (assign,nonatomic) char isDwdsRemote; 
@property (assign,nonatomic) char isAMPDUNotSupportedOverDWDS; 
@property (assign,nonatomic) char isAMPDUWorkaroundOverDWDS; 
@property (assign,nonatomic) char isAMPDUFullSupportOverDWDS; 
@property (assign,nonatomic) char isClosedNetworkOverDWDS; 
-(id)initWithIE:(id)arg1 ;
-(char)parseIE:(id*)arg1 ;
-(char)isDwdsMaster;
-(void)setIsDwdsMaster:(char)arg1 ;
-(char)isDwdsRelay;
-(void)setIsDwdsRelay:(char)arg1 ;
-(char)isDwdsRemote;
-(void)setIsDwdsRemote:(char)arg1 ;
-(char)isAMPDUNotSupportedOverDWDS;
-(void)setIsAMPDUNotSupportedOverDWDS:(char)arg1 ;
-(char)isAMPDUWorkaroundOverDWDS;
-(void)setIsAMPDUWorkaroundOverDWDS:(char)arg1 ;
-(char)isAMPDUFullSupportOverDWDS;
-(void)setIsAMPDUFullSupportOverDWDS:(char)arg1 ;
-(char)isClosedNetworkOverDWDS;
-(void)setIsClosedNetworkOverDWDS:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

