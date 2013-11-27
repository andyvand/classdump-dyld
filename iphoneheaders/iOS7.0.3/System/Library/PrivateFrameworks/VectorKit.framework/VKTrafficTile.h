/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class NSData, VKTileKeyMap, NSMutableArray, NSArray;

@interface VKTrafficTile : VKVectorTile {

	GEOTileKey _dataKey;
	NSData* _data;
	VKTileKeyMap* _dynamicTiles;
	NSMutableArray* _incidents;
	TrafficSkeletonTile* _trafficData;
	vector<VKRibbonMultiPolylineSegment, vk_allocator<VKRibbonMultiPolylineSegment> >* _ribbonSegments;
	vector<std::__1::pair<unsigned int, VKRibbonMultiPolylineSegment *>, vk_allocator<std::__1::pair<unsigned int, VKRibbonMultiPolylineSegment *> > >* _tileBoundaryDesignators;

}

@property (assign,nonatomic) const GEOTileKey* dataKey; 
@property (nonatomic,readonly) NSArray * incidents;                                                    //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,readonly) VKTileKeyMap * dynamicTiles;                                            //@synthesize dynamicTiles=_dynamicTiles - In the implementation block
@property (assign,nonatomic) vector<std::__1::pair<unsigned int* tileBoundaryDesignators;              //@synthesize tileBoundaryDesignators=_tileBoundaryDesignators - In the implementation block
-(void)dealloc;
-(id).cxx_construct;
-(BOOL)_buildStartOffset:(float*)arg1 endOffset:(float*)arg2 forLine:(SCD_Struct_VK119*)arg3 forSkeleton:(const Record*)arg4 forRange:(NSRange)arg5 forFlow:(const Flow*)arg6 forPoints:(Vec2Imp<float>*)arg7 ;
-(void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2 styleSession:(id)arg3 ;
-(void)buildTrafficMeshWithRoadData:(id)arg1 dynamicTile:(id)arg2 ribbonMaker:(VKRibbonMakerData*)arg3 trafficAccum:(TrafficAccum*)arg4 styleSession:(id)arg5 ;
-(void)buildConnectionDesignators;
-(void)setDataKey:(const GEOTileKey*)arg1 ;
-(const GEOTileKey*)dataKey;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 data:(id)arg3 ;
-(void)buildSkeletonMap;
-(void)buildSkeletonMeshForDebug:(id)arg1 ;
-(void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const function<void (const vk::RoadPiece &)>*)arg2 ;
-(void)buildTrafficMeshWithRoadData:(id)arg1 ;
-(id)incidents;
-(id)dynamicTiles;
-(vector<std::__1::pair<unsigned int, VKRibbonMultiPolylineSegment *>, vk_allocator<std::__1::pair<unsigned int, VKRibbonMultiPolylineSegment *> > >*)tileBoundaryDesignators;
-(void)setTileBoundaryDesignators:(vector<std::__1::pair<unsigned int, VKRibbonMultiPolylineSegment *>, vk_allocator<std::__1::pair<unsigned int, VKRibbonMultiPolylineSegment *> > >*)arg1 ;
-(void).cxx_destruct;
@end
