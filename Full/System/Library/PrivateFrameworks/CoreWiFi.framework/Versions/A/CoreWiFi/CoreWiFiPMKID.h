/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:09 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface CoreWiFiPMKID : NSObject {

	NSData* pmk;
	NSData* spa;
	NSData* aa;
	NSData* pmkid;
	unsigned long long timeCreated;
	unsigned long long timeLifetime;
	unsigned long long timeToExpire;

}

@property (nonatomic,retain) NSData * pmk; 
@property (nonatomic,retain) NSData * spa; 
@property (nonatomic,retain) NSData * aa; 
@property (nonatomic,retain) NSData * pmkid; 
@property (assign,nonatomic) unsigned long long timeCreated; 
@property (assign,nonatomic) unsigned long long timeLifetime; 
@property (assign,nonatomic) unsigned long long timeToExpire; 
+(char)clearPMKs:(id)arg1 error:(id*)arg2 ;
+(id)queryCache:(id*)arg1 ;
+(char)clearPMKs:(id*)arg1 ;
-(id)initWithSkeleton:(id)arg1 ;
-(id)initWithPMK:(id)arg1 withAA:(id)arg2 withSPA:(id)arg3 withLifetime:(id)arg4 ;
-(NSData *)pmk;
-(void)setPmk:(NSData *)arg1 ;
-(NSData *)spa;
-(void)setSpa:(NSData *)arg1 ;
-(NSData *)aa;
-(void)setAa:(NSData *)arg1 ;
-(NSData *)pmkid;
-(void)setPmkid:(NSData *)arg1 ;
-(unsigned long long)timeCreated;
-(void)setTimeCreated:(unsigned long long)arg1 ;
-(unsigned long long)timeLifetime;
-(void)setTimeLifetime:(unsigned long long)arg1 ;
-(unsigned long long)timeToExpire;
-(void)setTimeToExpire:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)skeleton;
@end

