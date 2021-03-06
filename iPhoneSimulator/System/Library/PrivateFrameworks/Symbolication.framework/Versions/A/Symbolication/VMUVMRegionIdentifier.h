/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {

	NSMutableArray* _regions;
	NSMapTable* _mallocZoneStatisticsMap;

}
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionForRange:(VMURange)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 ;
-(id)descriptionForRange:(VMURange)arg1 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(id)regions;
-(void)dealloc;
@end

