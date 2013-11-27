/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@class CPListItem;

@interface CPParagraph : CPRegion {

	BOOL noIndentation;
	BOOL below;
	unsigned alignment;
	BOOL hasDropCap;
	id flowProperties;
	CPListItem* listItem;
	float preformatWidth;

}

@property (nonatomic,retain) CPListItem * listItem; 
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setAlignment:(unsigned)arg1 ;
-(unsigned)alignment;
-(unsigned)index;
-(void)accept:(id)arg1 ;
-(void)setListItem:(id)arg1 ;
-(float)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(id)flowProperties;
-(void)setFlowProperties:(id)arg1 ;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(BOOL)isTextRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(void)setNoIndentation:(BOOL)arg1 ;
-(BOOL)noIndentation;
-(BOOL)hasDropCap;
-(void)setHasDropCap:(BOOL)arg1 ;
-(void)explode;
-(CGRect)reducedBounds;
-(void)setBelow:(BOOL)arg1 ;
-(BOOL)below;
-(BOOL)isPreformattedWithUnitWidth:(float*)arg1 ;
-(id)listItem;
@end
