/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKScannerDeviceViewHandler, NSMutableArray;

@interface IKAutoDetection : NSObject {

	IKScannerDeviceViewHandler* _scannerViewHandler;
	unsigned long long _rhoRange;
	unsigned long long _thetaSize;
	unsigned long long _width;
	unsigned long long _height;
	NSMutableArray* _houghResults;
	int _houghResultsCount;
	unsigned long long _houghBufferSize;
	double _imageScale;

}
-(CGImageRef)cleanedupImageBuffer:(vImage_Buffer*)arg1 ;
-(CGRect)doStartSimpleFrameDetection:(CGImageRef)arg1 ;
-(void)enterAutoDetection:(int)arg1 image:(CGImageRef)arg2 ;
-(void)exitAutoDetection:(int)arg1 ;
-(id)doStartSimpleFrameDetection:(CGImageRef)arg1 templateRects:(CGRect*)arg2 count:(long long)arg3 ;
-(id)doStartSimpleScanAreaDetection:(CGImageRef)arg1 ;
-(id)doStartScanAreaDetection:(CGImageRef)arg1 ;
-(CGPoint)findIntersection:(int)arg1 index2:(int)arg2 ;
-(void)removeNestedAreas:(id)arg1 ;
-(id)initWithScannerViewHandler:(id)arg1 ;
-(CGImageRef)cleanedupImage:(CGImageRef)arg1 ;
-(void)startSimpleFrameDetection:(CGImageRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSimpleFrameDetection:(CGImageRef)arg1 templateRects:(CGRect*)arg2 count:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)startSimpleScanAreaDetection:(CGImageRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)startScanAreaDetection:(CGImageRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)cleanup;
@end

