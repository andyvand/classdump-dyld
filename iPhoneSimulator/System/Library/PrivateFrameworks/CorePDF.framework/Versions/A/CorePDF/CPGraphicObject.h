/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@protocol CPGraphicUser;
@class CPTextLine, CPParagraph, CPChunk;

@interface CPGraphicObject : CPChunk {

	unsigned clipIndex;
	CGRect renderedBounds;
	char isInZoneBorder;
	int zoneGraphicType;
	CPTextLine* anchoringTextLine;
	CPParagraph* anchoringParagraph;
	CPChunk*<CPGraphicUser> user;

}

@property (assign,nonatomic) unsigned clipIndex; 
@property (nonatomic,retain) CPParagraph * anchoringParagraph; 
-(void)setClipIndex:(unsigned)arg1 ;
-(CGRect)renderedBounds;
-(unsigned short)unicode;
-(char)isNarrow;
-(char)canBeContainer;
-(char)isIndivisible;
-(char)isInZoneBorder;
-(void)setIsInZoneBorder:(char)arg1 ;
-(int)zoneGraphicType;
-(void)setZoneGraphicType:(int)arg1 ;
-(void)setAnchoringTextLine:(id)arg1 ;
-(id)anchoringTextLine;
-(unsigned)clipIndex;
-(CPParagraph *)anchoringParagraph;
-(void)setAnchoringParagraph:(CPParagraph *)arg1 ;
-(id)user;
-(id)init;
-(void)dealloc;
-(char)isVisible;
-(void)setUser:(id)arg1 ;
@end

