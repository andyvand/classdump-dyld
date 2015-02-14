/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	char renderedBoundsComputed;

}
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)recomputeRenderedBounds;
-(void)accept:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(CGRect)bounds;
-(char)isVisible;
-(CPPDFImage*)imageData;
@end

