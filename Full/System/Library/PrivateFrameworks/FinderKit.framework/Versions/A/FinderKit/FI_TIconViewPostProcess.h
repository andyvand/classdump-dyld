/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TSortingPostProcess.h>

@interface FI_TIconViewPostProcess : FI_TSortingPostProcess {

	BOOL _loadSpatialData;
	vector<DataBrowserItemSpatialData, std::__1::allocator<DataBrowserItemSpatialData> >* _spatialData;

}

@property (assign) BOOL loadSpatialData;              //@synthesize loadSpatialData=_loadSpatialData - In the implementation block
-(void)processNodes:(TFENodeVector*)arg1 andGroup:(TGroupedNodes*)arg2 withCanceledFlag:(BOOL*)arg3 ;
-(id)initWithComparator:(TBaseNodeComparator*)arg1 andGroupManager:(TGroupManager*)arg2 loadSpatialData:(BOOL)arg3 ;
-(const vector<DataBrowserItemSpatialData, std::__1::allocator<DataBrowserItemSpatialData> >*)spatialData;
-(BOOL)loadSpatialData;
-(void)setLoadSpatialData:(BOOL)arg1 ;
@end

