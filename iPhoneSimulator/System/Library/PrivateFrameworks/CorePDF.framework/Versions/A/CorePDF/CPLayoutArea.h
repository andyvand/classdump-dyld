/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	char isFirstLayout;

}
-(double)selectionBottom;
-(char)isBoxRegion;
-(char)isGraphicalRegion;
-(char)isRowRegion;
-(void)setIsImageRegion:(char)arg1 ;
-(char)isImageRegion;
-(char)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(char)isFirstLayout;
-(void)setIsFirstLayout:(char)arg1 ;
-(void)addColumnBreaks;
-(void)accept:(id)arg1 ;
-(id)init;
-(id)description;
-(id)properties;
-(char)isSimilarTo:(id)arg1 ;
@end

