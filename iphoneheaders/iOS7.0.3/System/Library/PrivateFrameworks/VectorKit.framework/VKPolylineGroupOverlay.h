/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlay.h>

@class NSMutableSet, GEOMapRegion, VKPolylineOverlay, NSSet;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {

	NSMutableSet* _polylines;
	GEOMapRegion* _boundingMapRegion;
	CFSetRef _observers;
	VKPolylineOverlay* _selectedPolyline;

}

@property (nonatomic,readonly) NSSet * polylines;                               //@synthesize polylines=_polylines - In the implementation block
@property (nonatomic,retain) VKPolylineOverlay * selectedPolyline;              //@synthesize selectedPolyline=_selectedPolyline - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK61 coordinate; 
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(SCD_Struct_VK61)coordinate;
-(id)boundingMapRegion;
-(void)_updateBoundingMapRegion;
-(void)addPolyline:(id)arg1 ;
-(void)removePolyline:(id)arg1 ;
-(void)setSelectedPolyline:(id)arg1 ;
-(id)polylines;
-(id)selectedPolyline;
@end
