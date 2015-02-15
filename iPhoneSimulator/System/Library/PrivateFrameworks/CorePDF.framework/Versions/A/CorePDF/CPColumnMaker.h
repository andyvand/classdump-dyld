/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {

	NSMutableArray* columns;
	CPZone* currentZone;
	NSMutableArray* allParagraphs;
	NSMutableArray* thinHorizontalShapes;
	NSMutableArray* otherShapes;
	NSMutableArray* images;
	NSMutableArray* paragraphWrappers;
	CGRect pageBounds;
	double maxParagraphDistance;

}

@property (assign) CGRect pageBounds; 
-(void)setPageBounds:(CGRect)arg1 ;
-(void)makeColumnsFrom:(id)arg1 zone:(id)arg2 ;
-(char)paragraph:(id)arg1 isAbove:(id)arg2 ;
-(char)paragraph:(id)arg1 isBelow:(id)arg2 ;
-(id)paragraphAbove:(id)arg1 in:(id)arg2 ;
-(char)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(void)intersectionCallout:(id)arg1 ;
-(double)averageSpacing:(id)arg1 ;
-(char)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(CGRect)arg3 ;
-(void)partitionShapes:(id)arg1 ;
-(void)callOuts;
-(char)canSafelyAdd:(id)arg1 to:(id)arg2 ;
-(void)splitColumns:(id)arg1 ;
-(void)anchorImages;
-(char)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3 ;
-(char)cuttingShapeBetween:(id)arg1 and:(id)arg2 ;
-(char)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2 ;
-(id)paragraphBelow:(id)arg1 in:(id)arg2 ;
-(id)chunkAbove:(id)arg1 in:(id)arg2 ;
-(char)column:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(CGRect)pageBounds;
-(id)columns;
-(id)init;
-(void)dealloc;
@end
