/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@class NSData;

@interface NSPICTImageRep : NSImageRep {

	CGPoint _pictOrigin;
	NSData* _pictData;
	id _imageRep;
	unsigned long long _pictOffset;
	unsigned _reserved1;
	unsigned _reserved2;

}

@property (copy,readonly) NSData * PICTRepresentation; 
@property (readonly) CGRect boundingBox; 
+(void)initialize;
+(id)imageUnfilteredTypes;
+(id)imageUnfilteredFileTypes;
+(id)imageUnfilteredPasteboardTypes;
+(id)imageRepWithData:(id)arg1 ;
+(char)canInitWithData:(id)arg1 ;
+(char)_verifyDataIsPICT:(id)arg1 ;
+(id)_PICTDataFromImageData:(id)arg1 ofType:(id)arg2 ;
+(id)_imageDataFromPICTData:(id)arg1 toType:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)bitsPerSample;
-(char)hasAlpha;
-(char)draw;
-(id)initWithData:(id)arg1 ;
-(long long)_uncachedSize;
-(char)_isValid;
-(void)setOpaque:(char)arg1 ;
-(char)isOpaque;
-(void)setBitsPerSample:(long long)arg1 ;
-(void)setAlpha:(char)arg1 ;
-(char)drawInRect:(CGRect)arg1 ;
-(char)drawAtPoint:(CGPoint)arg1 ;
-(CGRect)boundingBox;
-(id)bitmapImageRecordForPICTData:(id)arg1 ;
-(id)newBitmapImageRepForHeight:(long long)arg1 width:(long long)arg2 data:(id)arg3 ;
-(char)_common64BitInit;
-(NSData *)PICTRepresentation;
@end

