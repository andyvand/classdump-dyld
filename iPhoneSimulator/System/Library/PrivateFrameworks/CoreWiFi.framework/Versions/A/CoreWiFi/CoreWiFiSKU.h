/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CoreWiFiSKU : NSObject {

	NSString* shortName;
	NSString* friendlyName;
	NSMutableArray* countries;

}

@property (nonatomic,retain) NSString * shortName; 
@property (nonatomic,retain) NSString * friendlyName; 
@property (nonatomic,retain) NSMutableArray * countries; 
+(id)createDefaultSKUList;
-(NSString *)shortName;
-(id)initWithSkeleton:(id)arg1 ;
-(id)initWithFriendlyName:(id)arg1 withShortName:(id)arg2 ;
-(void)addDefaultCountry:(id)arg1 withISOName:(id)arg2 withISOCode:(long long)arg3 ;
-(NSString *)friendlyName;
-(id)findCountryByFriendlyName:(id)arg1 ;
-(void)sortCountriesByFriendlyName;
-(id)findCountryByISOName:(id)arg1 ;
-(id)removeCountryByFriendlyName:(id)arg1 ;
-(void)addCountry:(id)arg1 ;
-(void)setShortName:(NSString *)arg1 ;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSMutableArray *)countries;
-(void)setCountries:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)skeleton;
@end

