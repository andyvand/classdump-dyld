/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NVPlace;

@interface NVPrintRawMapDataSource : NSObject {

	NVPlace* _pinnedPlace;
	double _zoomLevel;
	SCD_Struct_NV6 _visibleRect;

}

@property (assign,nonatomic) SCD_Struct_NV6 visibleRect;              //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,retain) NVPlace * pinnedPlace;                   //@synthesize pinnedPlace=_pinnedPlace - In the implementation block
@property (assign,nonatomic) double zoomLevel;                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
-(NVPlace *)pinnedPlace;
-(void)setPinnedPlace:(NVPlace *)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(double)zoomLevel;
-(void)setVisibleRect:(SCD_Struct_NV6)arg1 ;
-(SCD_Struct_NV6)visibleRect;
@end
