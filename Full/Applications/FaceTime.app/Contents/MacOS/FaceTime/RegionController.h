/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, FTRegion, NSError;

@interface RegionController : NSObject {

	NSArray* _cachedRegions;
	char _regionsLoaded;

}

@property (nonatomic,readonly) NSArray * regions;                                           //@synthesize cachedRegions=_cachedRegions - In the implementation block
@property (nonatomic,readonly) char regionsLoaded;                                          //@synthesize regionsLoaded=_regionsLoaded - In the implementation block
@property (nonatomic,__weak,readonly) NSString * regionID; 
@property (nonatomic,__weak,readonly) NSString * basePhoneNumber; 
@property (nonatomic,__weak,readonly) FTRegion * currentRegion; 
@property (nonatomic,readonly) long long profileValidationStatus; 
@property (nonatomic,__weak,readonly) NSError * profileValidationError; 
@property (nonatomic,__weak,readonly) NSString * debugProfileValidationStatus; 
+(id)sharedInstance;
-(void)_profileValidationStatusChanged:(id)arg1 ;
-(void)_regionsFinishedLoading:(id)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)_postUpdateUINotification;
-(FTRegion *)currentRegion;
-(NSError *)profileValidationError;
-(NSString *)debugProfileValidationStatus;
-(void)setFTRegion:(id)arg1 ;
-(char)regionsLoaded;
-(NSString *)regionID;
-(long long)profileValidationStatus;
-(NSArray *)regions;
-(NSString *)basePhoneNumber;
-(id)init;
-(void)dealloc;
@end

