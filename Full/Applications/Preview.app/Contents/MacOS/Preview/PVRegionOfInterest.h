/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preview/Preview-Structs.h>
@interface PVRegionOfInterest : NSObject {

	CGRect _rect;
	CGPDFNodeRef _cgPdfNode;
	unsigned long long _mediaType;
	unsigned long long _readingOrder;
	double _medianFontSize;

}

@property (assign) CGRect rect;                                   //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) CGPDFNodeRef cgPdfNode;              //@synthesize cgPdfNode=_cgPdfNode - In the implementation block
@property (assign) unsigned long long mediaType;                  //@synthesize mediaType=_mediaType - In the implementation block
@property (assign) double medianFontSize;                         //@synthesize medianFontSize=_medianFontSize - In the implementation block
@property (assign) unsigned long long readingOrder;               //@synthesize readingOrder=_readingOrder - In the implementation block
+(id)regionOfInterestWithRect:(CGRect)arg1 ;
-(id)initRegionOfInterestWithRect:(CGRect)arg1 ;
-(void)setCgPdfNode:(CGPDFNodeRef)arg1 ;
-(CGPDFNodeRef)cgPdfNode;
-(unsigned long long)readingOrder;
-(void)setReadingOrder:(unsigned long long)arg1 ;
-(void)setMedianFontSize:(double)arg1 ;
-(double)medianFontSize;
-(unsigned long long)mediaType;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqualTo:(id)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
@end
