/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPZone, NSMutableArray;

@interface CPSpacerFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	CGRect zoneBounds;
	CGRect textBounds;
	SCD_Struct_CP30* spacerSequence;
	NSMutableArray* spacers;
	unsigned segmentationCount;
	SCD_Struct_CP31* segmentations;
	SCD_Struct_CP32* qualityEntries;

}
-(id)spacers;
-(id)initWithContentZone:(id)arg1 ;
-(void)findSpacers;
-(void)splitTextLines;
-(void)initializeSegmentations;
-(void)initializeJunctions;
-(void)assessQuality;
-(void)determineValidity;
-(void)finalize;
-(void)dealloc;
-(void)dispose;
@end

