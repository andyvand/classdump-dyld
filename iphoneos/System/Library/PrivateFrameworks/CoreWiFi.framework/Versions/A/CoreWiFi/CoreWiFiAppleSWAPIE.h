/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFiIE.h>

@class NSString;

@interface CoreWiFiAppleSWAPIE : CoreWiFiIE {

	char internetConnectionSharingEnabled;
	NSString* macModelIdentifier;

}

@property (assign,nonatomic) char internetConnectionSharingEnabled; 
@property (nonatomic,retain) NSString * macModelIdentifier; 
-(id)initWithIE:(id)arg1 ;
-(char)parseIE:(id*)arg1 ;
-(char)generateIE:(id*)arg1 ;
-(char)internetConnectionSharingEnabled;
-(void)setInternetConnectionSharingEnabled:(char)arg1 ;
-(NSString *)macModelIdentifier;
-(void)setMacModelIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

