/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/airportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CWAutoJoinSSID : NSObject {

	NSString* _ssid;
	double _timestamp;

}

@property (nonatomic,copy) NSString * ssid;                 //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(char)isEqualToAutoJoinSSID:(id)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)ssid;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timestamp;
@end
