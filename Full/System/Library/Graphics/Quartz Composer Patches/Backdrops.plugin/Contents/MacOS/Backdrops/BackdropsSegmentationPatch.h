/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:33:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Graphics/Quartz Composer Patches/Backdrops.plugin/Contents/MacOS/Backdrops
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backdrops/Backdrops-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCImagePort, QCStructurePort, NSOperationQueue, QCStructure, MutableBuffer, NSMutableData;

@interface BackdropsSegmentationPatch : QCPatch {

	QCImagePort* inputImage;
	QCImagePort* inputBackground;
	QCStructurePort* inputNoiseStatistics;
	QCStructurePort* inputOptions;
	QCImagePort* outputMask;
	NSOperationQueue* _queue;
	QCStructure* _options;
	MutableBuffer* _mask;
	MutableBuffer* _unknown;
	MutableBuffer* _test;
	MutableBuffer* _bg;
	NSMutableData* _spanData;
	NSMutableData* _rowData;
	NSMutableData* _componentData;
	int _numSpans;
	int _numComponents;
	x_heap_structRef _heap;
	int _width;
	int _height;
	float _yScale;
	float _cbScale;
	float _threshold;
	char _firstFrame;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(void)runLengthEncoding;
-(void)connectedComponents;
-(void)segmentWithLocalityConstant:(float)arg1 iterations:(int)arg2 ;
-(void)convertBackground:(id)arg1 ;
-(void)computeTestStatisticWithImage:(id)arg1 ;
-(void)segment;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end
