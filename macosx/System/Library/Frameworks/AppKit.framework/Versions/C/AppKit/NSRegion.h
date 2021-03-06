/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSRegion : NSObject {

	CGRect _bounds;
	void* _cgRegion;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(char)isEmpty;
-(void)addClip;
-(void)stroke;
-(void)fill;
-(id)initWithRect:(CGRect)arg1 ;
-(void)subtractRect:(CGRect)arg1 ;
-(void)addRect:(CGRect)arg1 ;
-(char)intersectsRect:(CGRect)arg1 ;
-(void)subtractRegion:(id)arg1 ;
-(void)getRects:(CGRect*)arg1 count:(unsigned long long*)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(void)intersectRect:(CGRect)arg1 ;
-(id)initWithCGSRegionObj:(CGSRegionObjectRef)arg1 ;
-(id)initWithRects:(const CGRect*)arg1 count:(unsigned long long)arg2 ;
-(void*)cgsRegionObj;
-(void)enumerateRects:(/*^block*/id)arg1 ;
-(char)isRectangular;
-(void)setRegion:(id)arg1 ;
-(void)setEmpty;
-(void)xorRegion:(id)arg1 ;
-(id)initWithBitmapImageRep:(id)arg1 atX:(long long)arg2 y:(long long)arg3 flip:(char)arg4 ;
-(char)containsRect:(CGRect)arg1 ;
-(char)containsRegion:(id)arg1 ;
-(char)intersectsRegion:(id)arg1 ;
-(CGRect)largestRect;
-(void)setRect:(CGRect)arg1 ;
-(void)addRegion:(id)arg1 ;
-(void)intersectRegion:(id)arg1 ;
-(void)xorRect:(CGRect)arg1 ;
@end

