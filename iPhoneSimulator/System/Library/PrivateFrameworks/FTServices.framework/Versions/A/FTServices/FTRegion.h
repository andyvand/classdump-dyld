/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString;

@interface FTRegion : NSObject {

	NSDictionary* _dictionary;
	NSArray* _subRegions;
	FTRegion* _parentRegion;

}

@property (readonly) NSString * isoCode; 
@property (readonly) NSString * label; 
@property (readonly) NSString * regionID; 
@property (readonly) NSString * basePhoneNumber; 
@property (readonly) FTRegion * parentRegion; 
@property (readonly) NSArray * subRegions;                    //@synthesize subRegions=_subRegions - In the implementation block
@property (retain) NSDictionary * _dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
@property (retain) FTRegion * _parentRegion;                  //@synthesize parentRegion=_parentRegion - In the implementation block
-(NSString *)regionID;
-(NSDictionary *)_dictionary;
-(NSString *)isoCode;
-(NSString *)basePhoneNumber;
-(id)_initWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)_setParentRegion:(id)arg1 ;
-(NSArray *)subRegions;
-(FTRegion *)parentRegion;
-(id)regionWithID:(id)arg1 ;
-(void)set_dictionary:(NSDictionary *)arg1 ;
-(FTRegion *)_parentRegion;
-(void)set_parentRegion:(FTRegion *)arg1 ;
@end

