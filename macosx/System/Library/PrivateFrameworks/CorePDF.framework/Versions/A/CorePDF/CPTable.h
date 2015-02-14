/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <CorePDF/CPDisposable.h>
#import <CorePDF/CPGraphicUser.h>

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {

	CGRect tableBounds;
	unsigned rowCount;
	double* rowY;
	unsigned columnCount;
	double* columnX;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;
	unsigned usedGraphicCount;
	char disposed;

}

@property (nonatomic,readonly) CGRect tableBounds; 
@property (assign,nonatomic) unsigned rowCount; 
@property (nonatomic,readonly) double* rowY; 
@property (assign,nonatomic) unsigned columnCount; 
@property (nonatomic,readonly) double* columnX; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(CGRect)tableBounds;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(double*)rowY;
-(double*)columnX;
-(void)setRowCount:(unsigned)arg1 ;
-(void)setColumnCount:(unsigned)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(id)initWithBounds:(CGRect)arg1 ;
-(unsigned)rowCount;
-(void)finalize;
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(void)dispose;
-(unsigned)columnCount;
@end

