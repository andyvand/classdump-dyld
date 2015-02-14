/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK4 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK4 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)_dictionaryRepresentation;
-(SCD_Struct_MK4)boundingRegion;
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
-(NSArray *)mapItems;
-(id)description;
@end

