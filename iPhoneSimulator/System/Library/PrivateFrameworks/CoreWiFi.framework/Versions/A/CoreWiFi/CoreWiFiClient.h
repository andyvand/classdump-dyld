/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFiMAC.h>

@interface CoreWiFiClient : CoreWiFiMAC {

	char isAssociated;
	unsigned long long createTime;
	unsigned long long joinTime;
	unsigned long long leftTime;
	unsigned long long deauthReason;
	char isWOWSleep;

}

@property (assign,nonatomic) char isAssociated; 
@property (assign,nonatomic) unsigned long long createTime; 
@property (assign,nonatomic) unsigned long long joinTime; 
@property (assign,nonatomic) unsigned long long leftTime; 
@property (assign,nonatomic) unsigned long long deauthReason; 
@property (assign,nonatomic) char isWOWSleep; 
-(id)initWithSkeleton:(id)arg1 ;
-(id)initWithMAC:(id)arg1 interfaceName:(id)arg2 channel:(long long)arg3 ies:(id)arg4 ;
-(char)isAssociated;
-(void)setIsAssociated:(char)arg1 ;
-(unsigned long long)createTime;
-(void)setCreateTime:(unsigned long long)arg1 ;
-(unsigned long long)joinTime;
-(void)setJoinTime:(unsigned long long)arg1 ;
-(unsigned long long)leftTime;
-(void)setLeftTime:(unsigned long long)arg1 ;
-(unsigned long long)deauthReason;
-(void)setDeauthReason:(unsigned long long)arg1 ;
-(char)isWOWSleep;
-(void)setIsWOWSleep:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)skeleton;
@end

